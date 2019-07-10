#include "Gun.c"

class Gun_Tundra : Gun {
	override string GetName() {
		return "Winchester70";
	}

	override TStringArray GetAttachments() {
		return {"HuntingOptic"};
	}

	override string GetAmmoName() {
		return "Ammo_308Win";
	}
}