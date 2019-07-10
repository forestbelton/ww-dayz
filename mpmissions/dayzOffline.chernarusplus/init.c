void main() {
	// INIT WEATHER BEFORE ECONOMY INIT------------------------
	Weather weather = g_Game.GetWeather();

	weather.MissionWeather(false); // false = use weather controller from Weather.c

	weather.GetOvercast().Set(Math.RandomFloatInclusive(0.4, 0.6), 1, 0);
	weather.GetRain().Set(0, 0, 1);
	weather.GetFog().Set(Math.RandomFloatInclusive(0.05, 0.1), 1, 0);

	// INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if (ce) {
		ce.InitOffline();
    }

	// DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

    bool shouldReset = false;
    if ((month == reset_month) && (day < reset_day)) {
        shouldReset = true;
    } else if ((month == reset_month + 1) && (day > reset_day)) {
        shouldReset = true;
    } else if ((month < reset_month) || (month > reset_month + 1)) {
        shouldReset = true;
    }

    if (shouldReset) {
        GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
    }
}

class CustomMission : MissionServer {
	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName) {
        // Creates random player
		Entity playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");
		Class.CastTo(m_player, playerEnt);

		GetGame().SelectPlayer(identity, m_player);

		return m_player;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen) {
		player.RemoveAllItems();

        // NOTE: Not sure what this comment means, but it was on the original;
        // something to do with maximum allowed values.
        //
		// for bone regen: water = 2500 and energy = 4000 so 5000 should be ok
		player.GetStatWater().Set(5000);
		player.GetStatEnergy().Set(5000);

		// Add rags
		ItemBase rags = ItemBase.Cast(player.GetInventory().CreateInInventory("Rag"));
        rags.SetQuantity(4);
	}
};

Mission CreateCustomMission(string path) {
	return new CustomMission();
}
