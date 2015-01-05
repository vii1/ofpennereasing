#ifndef _PENNER_CUBIC
#define _PENNER_CUBIC

namespace PennerEasing
{

class Cubic {
	
	public:
		
		static float easeIn(float t,float b , float c, float d);
		static float easeOut(float t,float b , float c, float d);
		static float easeInOut(float t,float b , float c, float d);
};

} // namespace PennerEasing

#endif