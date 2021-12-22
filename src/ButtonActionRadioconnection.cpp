#include "ButtonActionRadioconnection.h"

Signal ButtonActionRadioconnection::push() {

	Signal s;
	s.type_signal = Type_s::RADIO_CONNECTION;
	return s;

}