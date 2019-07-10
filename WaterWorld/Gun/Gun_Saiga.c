#include "Gun.c"

class Gun_Saiga : Gun {
	override string GetName() {
		return "GP_Saiga12KShotgun";
	}

	override TStringArray GetAttachments() {
		return {"Saiga_Bttstck"};
	}

	override string GetAmmoName() {
		return "Mag_Saiga_Drum20Rnd";
	}
}