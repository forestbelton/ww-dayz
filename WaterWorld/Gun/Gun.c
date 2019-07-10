#include "GunData.c"

class Gun {
    string GetName() {
        return "";
    }

    string GetAmmoName() {
        return "";
    }

    array<string> GetAttachments() {
        return {};
    }

    GunData Create(PlayerBase player, bool createInHands) {
        int i;
        EntityAI gun;
        EntityAI ammo;
        string name = GetName();
        array<string> attachments = GetAttachments();

        if (createInHands) {
            gun = player.GetInventory().CreateInHands(name);
        } else {
            gun = player.GetInventory().CreateInInventory(name);
        }

        for (i = 0; i < attachments.Count(); ++i) {
            gun.GetInventory().CreateAttachment(attachments[i]);
        }

        ammo = player.GetInventory().CreateInInventory(GetAmmoName());
        return new GunData(gun, ammo);
    }
}

