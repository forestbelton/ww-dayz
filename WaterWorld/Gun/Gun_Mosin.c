#include "Gun.c"

class Gun_Mosin : Gun {
	override string GetName() {
		return "Mosin9130_Black";
	}

	override TStringArray GetAttachments() {
		return {"PUScopeOptic"};
	}

	override string GetAmmoName() {
		return "Ammo_762x54";
	}
}