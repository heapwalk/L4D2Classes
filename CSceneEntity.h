#include "CBaseEntity.h"
#include "_ST_m_hActorList_16.h"

#pragma pack(push,1)
	class CSceneEntity : 
		 public CBaseEntity // 0x5fc
	{
	public:
		_ST_m_hActorList_16	m_hActorList; // 0x0
		unsigned char _0x4[0x638];
		int    	m_bIsPlayingBack; // 0x63c
		int    	m_bPaused; // 0x63d
		int    	m_bMultiplayer; // 0x63e
		unsigned char _0x642[0x2];
		float  	m_flForceClientTime; // 0x644
		int    	m_nSceneStringIndex; // 0x648
	};
#pragma pack(pop)
