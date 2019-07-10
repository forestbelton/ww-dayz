#include "Gun.c"

class Gun_M4A1 : Gun {
    override string GetName() {
        return "M4A1_Black";
    }

    override string GetAmmoName() {
        return "Mag_STANAG_30Rnd";
    }

    override TStringArray GetAttachments() {
        return {"M4_MPBttstck_Black", "M4_MPHndGrd_Black", "M4_CarryHandleOptic", "M9A1_Bayonet"};
    }
}
