
#pragma pack(push,1)
	class CLocalActiveWeaponData
	{
	public:
		unsigned char _0x0[0xe8];
		int    	m_nNextThinkTick; // 0xe8
		unsigned char _0xec[0x874];
		float  	m_flNextPrimaryAttack; // 0x960
		float  	m_flNextSecondaryAttack; // 0x964
		int    	m_nQueuedAttack; // 0x968
		float  	m_flTimeAttackQueued; // 0x96c
		unsigned char _0x970[0x1c];
		int    	m_bOnlyPump; // 0x98c
		float  	m_flTimeWeaponIdle; // 0x990
	};
#pragma pack(pop)
