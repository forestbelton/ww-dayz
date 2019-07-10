class GunData {
    EntityAI gun;
    EntityAI ammo;

    void GunData(EntityAI gun, EntityAI ammo) {
        m_gun = gun;
        m_ammo = ammo;
    }

    EntityAI GetGun() {
        return m_gun;
    }

    EntityAI GetAmmo() {
        return m_ammo;
    }
}
