#pragma once
#include "Item.h"
typedef enum { RANGE_SHORT, RANGE_MEDIUM, RANGE_LONG, RANGE_SNIPER, RANGE_NUM_RANGES } AIRanges;
class Weapon : public Item
{
#ifndef MOHAA
#error "Only Mohaa supported for this class."
#endif // MOHAA
protected:
    int m_iAnimSlot; /* bitsize 32, bitpos 8416 */
    qboolean attached; /* bitsize 32, bitpos 8448 */
    float nextweaponsoundtime; /* bitsize 32, bitpos 8480 */
    float m_fLastFireTime; /* bitsize 32, bitpos 8512 */
    str current_attachToTag; /* bitsize 32, bitpos 8544 */
    str attachToTag_main; /* bitsize 32, bitpos 8576 */
    str attachToTag_offhand; /* bitsize 32, bitpos 8608 */
    str holster_attachToTag; /* bitsize 32, bitpos 8640 */
    float lastScale; /* bitsize 32, bitpos 8672 */
    Vector lastAngles; /* bitsize 96, bitpos 8704 */
    qboolean lastValid; /* bitsize 32, bitpos 8800 */
    qboolean auto_putaway; /* bitsize 32, bitpos 8832 */
    qboolean use_no_ammo; /* bitsize 32, bitpos 8864 */
    qboolean crosshair; /* bitsize 32, bitpos 8896 */
    int m_iZoom; /* bitsize 32, bitpos 8928 */
    float m_fZoomSpreadMult; /* bitsize 32, bitpos 8960 */
    qboolean m_bAutoZoom; /* bitsize 32, bitpos 8992 */
    qboolean m_bSemiAuto; /* bitsize 32, bitpos 9024 */
    float maxrange; /* bitsize 32, bitpos 9056 */
    float minrange; /* bitsize 32, bitpos 9088 */
    str viewmodel; /* bitsize 32, bitpos 9120 */
    weaponstate_t weaponstate; /* bitsize 32, bitpos 9152 */
    int rank; /* bitsize 32, bitpos 9184 */
    int order; /* bitsize 32, bitpos 9216 */
    SafePtr<Sentient> last_owner; /* bitsize 128, bitpos 9248 */
    float last_owner_trigger_time; /* bitsize 32, bitpos 9376 */
    qboolean notdroppable; /* bitsize 32, bitpos 9408 */
    int aimanim; /* bitsize 32, bitpos 9440 */
    int aimframe; /* bitsize 32, bitpos 9472 */
    Vector holsterOffset; /* bitsize 96, bitpos 9504 */
    Vector holsterAngles; /* bitsize 96, bitpos 9600 */
    float holsterScale; /* bitsize 32, bitpos 9696 */
    float next_noise_time; /* bitsize 32, bitpos 9728 */
    float next_noammo_time; /* bitsize 32, bitpos 9760 */
    qboolean m_bShouldReload; /* bitsize 32, bitpos 9792 */
    float fire_delay[2]; /* bitsize 64, bitpos 9824 */
    str ammo_type[2]; /* bitsize 64, bitpos 9888 */
    int ammorequired[2]; /* bitsize 64, bitpos 9952 */
    int startammo[2]; /* bitsize 64, bitpos 10016 */
    str projectileModel[2]; /* bitsize 64, bitpos 10080 */
    float bulletdamage[2]; /* bitsize 64, bitpos 10144 */
    float bulletcount[2]; /* bitsize 64, bitpos 10208 */
    float bulletrange[2]; /* bitsize 64, bitpos 10272 */
    float bulletknockback[2]; /* bitsize 64, bitpos 10336 */
    float projectilespeed[2]; /* bitsize 64, bitpos 10400 */
    Vector bulletspread[2]; /* bitsize 192, bitpos 10464 */
    Vector bulletspreadmax[2]; /* bitsize 192, bitpos 10656 */
    firetype_t firetype[2]; /* bitsize 64, bitpos 10848 */
    int ammo_clip_size[2]; /* bitsize 64, bitpos 10912 */
    int ammo_in_clip[2]; /* bitsize 64, bitpos 10976 */
    float max_charge_time[2]; /* bitsize 64, bitpos 11040 */
    float min_charge_time[2]; /* bitsize 64, bitpos 11104 */
    meansOfDeath_t meansofdeath[2]; /* bitsize 64, bitpos 11168 */
    int loopfire[2]; /* bitsize 64, bitpos 11232 */
    str worldhitspawn[2]; /* bitsize 64, bitpos 11296 */
    int tracerfrequency[2]; /* bitsize 64, bitpos 11360 */
    int tracercount[2]; /* bitsize 64, bitpos 11424 */
    Vector viewkickmin[2]; /* bitsize 192, bitpos 11488 */
    Vector viewkickmax[2]; /* bitsize 192, bitpos 11680 */
    int quiet[2]; /* bitsize 64, bitpos 11872 */
    float m_fFireSpreadMultAmount[2]; /* bitsize 64, bitpos 11936 */
    float m_fFireSpreadMultFalloff[2]; /* bitsize 64, bitpos 12000 */
    float m_fFireSpreadMultCap[2]; /* bitsize 64, bitpos 12064 */
    float m_fFireSpreadMultTimeCap[2]; /* bitsize 64, bitpos 12128 */
    float m_fFireSpreadMultTime[2]; /* bitsize 64, bitpos 12192 */
    float m_fFireSpreadMult[2]; /* bitsize 64, bitpos 12256 */
    qboolean m_bShareClip; /* bitsize 32, bitpos 12320 */
    qboolean m_bCanPartialReload; /* bitsize 32, bitpos 12352 */
    qboolean autoaim; /* bitsize 32, bitpos 12384 */
    float charge_fraction; /* bitsize 32, bitpos 12416 */
    qboolean putaway; /* bitsize 32, bitpos 12448 */
    firemode_t firemodeindex; /* bitsize 32, bitpos 12480 */
    int weapon_class; /* bitsize 32, bitpos 12512 */
    const_str m_csWeaponGroup; /* bitsize 32, bitpos 12544 */
    float m_fMovementSpeed; /* bitsize 32, bitpos 12576 */
    str m_sAmmoPickupSound; /* bitsize 32, bitpos 12608 */
    str m_NoAmmoSound; /* bitsize 32, bitpos 12640 */
public:
    int m_iNumShotsFired; /* bitsize 32, bitpos 12672 */
    int m_iNumHits; /* bitsize 32, bitpos 12704 */
    float m_fAccuracy; /* bitsize 32, bitpos 12736 */
    float m_fTimeUsed; /* bitsize 32, bitpos 12768 */
    int m_iNumHeadShots; /* bitsize 32, bitpos 12800 */
    int m_iNumTorsoShots; /* bitsize 32, bitpos 12832 */
    int m_iNumLeftLegShots; /* bitsize 32, bitpos 12864 */
    int m_iNumRightLegShots; /* bitsize 32, bitpos 12896 */
    int m_iNumGroinShots; /* bitsize 32, bitpos 12928 */
    int m_iNumLeftArmShots; /* bitsize 32, bitpos 12960 */
    int m_iNumRightArmShots; /* bitsize 32, bitpos 12992 */
    AIRanges mAIRange; /* bitsize 32, bitpos 13024 */
    SafePtr<Entity> aim_target; /* bitsize 128, bitpos 13056 */
};