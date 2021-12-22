#include "ButtonActionSymbol.h"

Signal ButtonActionSymbol::push() {

	Signal s;
	s.type_signal = Type_s::SYMBOL;
	s.message = this->symbol;
	return s;

}