#include "Gun.c"

class Gun_VSS : Gun {
	override string GetName() {
		return "VSS";
	}
	
	override TStringArray GetAttachments() {
		return {"PSO1Optic"};
	}

	override string GetAmmoName() {
		return "Mag_VSS_10Rnd";
	}
}