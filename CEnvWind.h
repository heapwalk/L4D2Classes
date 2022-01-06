#include "CBaseEntity.h"
#include "CEnvWindShared.h"

#pragma pack(push,1)
	class CEnvWind : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		CEnvWindShared	m_EnvWindShared; // 0x638
	};
#pragma pack(pop)
