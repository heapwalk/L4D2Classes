#include "CBaseTempEntity.h"
#include "CEffectData.h"

#pragma pack(push,1)
	class CTEEffectDispatch : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		CEffectData	m_EffectData; // 0x10
	};
#pragma pack(pop)
