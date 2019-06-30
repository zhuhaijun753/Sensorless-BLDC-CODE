/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Os_Measurements_Cfg.c
 *    \author     Nicolae-Bogdan Bacrau
 *    \brief      Configures the acceptable runtime limits for all the tasks. The limits are used inside the routines
 *                for the timing measurements.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Os_Cfg.h"
#include "Os_Core.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Definition Of Local Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Definition Of Local Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Variables                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Declaration Of Global Variables                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Constants                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Declaration Of Global Constants                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

#if (STD_ON == OS_USE_TIMING_MEASUREMENTS)

/** \brief  Contains the maximum legal runtime limits which do not cause delays to the other tasks. These values depend
 *          on the periodicities of the tasks. */
const TickType Os_gkatTasksRuntimeLimits[OS_NR_OF_RUN_TIME_TASKS] =
   {
      OS_US2TICKS(500U), /*      OS_TASK_5MS        */
      OS_US2TICKS(500U), /*      OS_TASK_10MS       */
      OS_US2TICKS(500U), /*      OS_TASK_20MS       */
      OS_US2TICKS(500U), /*      OS_TASK_100MS      */
      OS_US2TICKS(250U), /*      OS_TASK_FAST       */
      OS_US2TICKS(200U), /*      OS_TASK_BACKGROUND */
   };

/** \brief  Contains the maximum allowed cumulated delays to the other tasks. */
const TickType Os_gkatTasksGrowthLimits[OS_NR_OF_RUN_TIME_TASKS] =
   {
      OS_US2TICKS(10000U), /*    OS_TASK_5MS        */
      OS_US2TICKS(10000U), /*    OS_TASK_10MS       */
      OS_US2TICKS(10000U), /*    OS_TASK_20MS       */
      OS_US2TICKS(10000U), /*    OS_TASK_100MS      */
      OS_US2TICKS(1500U), /*     OS_TASK_FAST       */
      OS_US2TICKS(2000U), /*     OS_TASK_BACKGROUND */
   };

#endif

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Functions                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                         Implementation Of Local Functions                                         */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                         Implementation Of Global Functions                                        */
/*-------------------------------------------------------------------------------------------------------------------*/