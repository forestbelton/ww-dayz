#include "Gun.c"

class Gun_AK101 : Gun {
    override string GetName() {
        return "AK101_Black";
    }

    override string GetAmmoName() {
        return "Mag_AK101_30Rnd";
    }

    override TStringArray GetAttachments() {
        return {"AK_PlasticBttstck", "AK_PlasticHndgrd", "AK_Bayonet"};
    }
}
