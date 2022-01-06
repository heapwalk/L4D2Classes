
#pragma pack(push,1)
	class CBaseViewModel
	{
	public:
		unsigned char _0x0[0xe0];
		int    	m_fEffects; // 0xe0
		unsigned char _0xe4[0x5c];
		int    	m_nModelIndex; // 0x140
		unsigned char _0x144[0x51c];
		float  	m_flPlaybackRate; // 0x660
		int    	m_nSkin; // 0x664
		int    	m_nBody; // 0x668
		int    	m_nNewSequenceParity; // 0x66c
		int    	m_nResetEventsParity; // 0x670
		unsigned char _0x674[0x10];
		int    	m_nMuzzleFlashParity; // 0x684
		unsigned char _0x688[0x21c];
		int    	m_nSequence; // 0x8a4
		unsigned char _0x8a8[0x304];
		int    	m_nViewModelIndex; // 0xbac
		int    	m_nAnimationParity; // 0xbb0
		int    	m_nLayerSequence; // 0xbb4
		int    	m_nLayer; // 0xbb8
		float  	m_flLayerStartTime; // 0xbbc
		int    	m_hWeapon; // 0xbc0
		int    	m_hOwner; // 0xbc4
	};
#pragma pack(pop)
