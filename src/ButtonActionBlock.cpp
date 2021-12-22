#include "ButtonActionBlock.h"

Signal ButtonActionBlock ::push() {

	Signal s;
	s.type_signal = Type_s::BLOCK;
	return s;

}