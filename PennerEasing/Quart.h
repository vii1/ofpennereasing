#ifndef _PENNER_QUART
#define _PENNER_QUART

namespace PennerEasing
{

class Quart {
	
	public:
		
		static float easeIn(float t,float b , float c, float d);
		static float easeOut(float t,float b , float c, float d);
		static float easeInOut(float t,float b , float c, float d);
};

} // namespace PennerEasing

#endif