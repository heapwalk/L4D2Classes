
#pragma pack(push,1)
	class CEffectData
	{
	public:
		float  	m_vOrigin_x; // 0x0
		float  	m_vOrigin_y; // 0x4
		float  	m_vOrigin_z; // 0x8
		float  	m_vStart_x; // 0xc
		float  	m_vStart_y; // 0x10
		float  	m_vStart_z; // 0x14
		vector3	m_vNormal; // 0x18
		vector3	m_vAngles; // 0x24
		int    	m_fFlags; // 0x30
		unsigned char _0x34[0x4];
		float  	m_flScale; // 0x38
		float  	m_flMagnitude; // 0x3c
		float  	m_flRadius; // 0x40
		int    	m_nAttachmentIndex; // 0x44
		int    	m_nSurfaceProp; // 0x48
		int    	m_nMaterial; // 0x4c
		int    	m_nDamageType; // 0x50
		int    	m_nHitBox; // 0x54
		int    	m_nColor; // 0x58
		int    	m_iEffectName; // 0x5c
	};
#pragma pack(pop)
