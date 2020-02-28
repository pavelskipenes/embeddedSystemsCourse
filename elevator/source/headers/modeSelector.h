#pragma once

/**
 * @file 
 * @brief Library containing decleration of modeSelector() and the relevant @c typedef
 * 
 */

/**
 * @brief Enumeration declaring the different statii (aka "state", or "mode") the elevator can have.
 * 
 */
typedef enum{
    IDLE,
    SERVING,
    RUNNING,
    OPENDOOR,
    STOP,
    UNKNOWN
} Status;

/**
 * @brief High level controller of elevator behaviour. Reads sensor inputs and determines the Status() of the elevator. \n Puts the elevator in the corresponding mode.
 * @details Main program loop. Call to initiate and run elevator control logic.
 * 
 * @code
 * //Example:
 * 
 * #include <elevator.h>
 * 
 * int main(){
 *     modeSelector();
 * }
 * @endcode
 *
 * @see @c modes.h
 * 
 */
void modeSelector();