#include "DIO_Interface.h"


//this array is  read only
// ???? ???? ??? ? ?? runtime
const DIO_PinStatus_type PinsStatusArray[TOTAL_PINS] ={
	INPULL,   /*port A pin 0 */
	INPULL,   /*port A pin 1 */
	INPULL,   /*port A pin 2 */
	INPULL,   /*port A pin 3 */
	OUTPUT,   /*port A pin 4 */
	OUTPUT,   /*port A pin 5 */
	OUTPUT,   /*port A pin 6 */
	OUTPUT,   /*port A pin 7 */
	OUTPUT,   /*port B pin 0 */
	OUTPUT,   /*port B pin 1 */
	OUTPUT,   /*port B pin 2 */
	OUTPUT,   /*port B pin 3 */
	OUTPUT,   /*port B pin 4 */
	OUTPUT,   /*port B pin 5 */
	OUTPUT,   /*port B pin 6 */
	INFREE,   /*port B pin 7 */
	OUTPUT,   /*port C pin 0 */
	OUTPUT,   /*port C pin 1 */
	OUTPUT,   /*port C pin 2 */
	OUTPUT,   /*port C pin 3 */
	OUTPUT,   /*port C pin 4 */
	OUTPUT,   /*port C pin 5 */
	OUTPUT,   /*port C pin 6 */
	OUTPUT,   /*port C pin 7 */
	OUTPUT,   /*port D pin 0 */
	OUTPUT,   /*port D pin 1 */
	INPULL,   /*port D pin 2 */
	OUTPUT,   /*port D pin 3 */
	OUTPUT,   /*port D pin 4 */
	OUTPUT,   /*port D pin 5 */
	OUTPUT,   /*port D pin 6 */
	INFREE   /*port D pin 7 */
	
 }; 