#include "ButtonActionSymbol.h"

Signal ButtonActionSymbol::push() {

	Signal s;
	s.type_signal = SYMBOL;
	s.message = this->symbol;
	return s;


}