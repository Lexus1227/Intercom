#include "ButtonActionOpen.h"

Signal ButtonActionOpen::push() {

	Signal s;
	s.type_signal = Type_s::OPEN_DOOR;
	return s;

}