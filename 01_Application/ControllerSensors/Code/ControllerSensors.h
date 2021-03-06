/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       ControllerSensors.h
 *    \author     Baciu Vlad-Eusebiu
 *    \brief      Empty template to be used for all .h files. This file provides an example for the case in which a
 *                detailed description is not needed.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef CONTROLLER_SENSORS_H
#define CONTROLLER_SENSORS_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Definition Of Global Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/
typedef enum
{
   Sensors_DischargedBattery,

   Sensors_MediumBattery,

   Sensors_ChargedBattery
} Sensors_BatteyStatus;
/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Variables                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Constants                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Functions                                            */
/*-------------------------------------------------------------------------------------------------------------------*/
extern void ControllerSensors_Init();
extern void ControllerSensors_ReadBattery();
extern void ControllerSensors_ReadCurrent();

/*-------------------------------------------------------------------------------------------------------------------*/
#endif /* CONTROLLER_SENSORS_H */
