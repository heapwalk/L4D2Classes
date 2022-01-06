#include "CBaseAnimating.h"
#include "COverlayVars.h"

#pragma pack(push,1)
	class CBaseAnimatingOverlay : 
		 public CBaseAnimating // 0x930
	{
	public:
		COverlayVars	overlay_vars; // 0x0
	};
#pragma pack(pop)
