#ifndef _PENNER_QUINT
#define _PENNER_QUINT

namespace PennerEasing
{

class Quint {
	
	public:
		
		static float easeIn(float t,float b , float c, float d);
		static float easeOut(float t,float b , float c, float d);
		static float easeInOut(float t,float b , float c, float d);
};

} // namespace PennerEasing

#endif