#include "Gun.c"

class Gun_AugSteyr : Gun {
    override string GetName() {
        return "GP_AugSteyr";
    }

    override string GetAmmoName() {
        return "Mag_STANAG_30Rnd";
    }
}
