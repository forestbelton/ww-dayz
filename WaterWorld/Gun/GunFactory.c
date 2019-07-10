#include "Gun.c"

#include "Gun_AK101.c"
#include "Gun_M4A1.c"
#include "Gun_Mosin.c"
#include "Gun_Saiga.c"
#include "Gun_SKS.c"
#include "Gun_Tundra.c"

class GunFactory {
    autoptr array<ref Gun> primaryGuns = {
        new Gun_M4A1,
        new Gun_AK101,
        new Gun_Saiga
    };

    autoptr array<ref Gun> secondaryGuns = {
        new Gun_Mosin,
        new Gun_SKS,
        new Gun_Tundra
    };

    void CreateAndAttachGuns(PlayerBase player) {
        int primaryIndex = Math.RandomIntInclusive(0, primaryGuns.Count() - 1);
        GunData primaryData = primaryGuns[primaryIndex].Create(player, true);
        player.SetQuickBarEntityShortcut(primaryData.GetGun(), 0);
        player.SetQuickBarEntityShortcut(primaryData.GetAmmo(), 1);

        int secondaryIndex = Math.RandomIntInclusive(0, secondaryGuns.Count() - 1);
        GunData secondaryData = secondaryGuns[secondaryIndex].Create(player, false);
        player.SetQuickBarEntityShortcut(secondaryData.GetGun(), 2);
        player.SetQuickBarEntityShortcut(secondaryData.GetAmmo(), 3);
    }
}

