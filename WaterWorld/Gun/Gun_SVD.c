#include "Gun.c"

class Gun_SVD : Gun {
    override string GetName() {
        return "SVD";
    }
	
    override TStringArray GetAttachments() {
        return {"PSO1Optic"};
    }

    override string GetAmmoName() {
        return "Mag_SVD_10Rnd";
    }
}