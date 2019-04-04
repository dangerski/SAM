#ifndef SAM_GENERICSYSTEM_H_
#define SAM_GENERICSYSTEM_H_

#include "include/visibility.h"
#include "include/SAM_api.h"


#include <stdint.h>
#ifdef __cplusplus
extern "C"
{
#endif

	//
	// GenericSystem Technology Model
	//

	/** 
	 * Create a GenericSystem variable table.
	 * @param def: the set of financial model-dependent defaults to use (None, Residential, ...)
	 * @param[in,out] err: a pointer to an error object
	 */

	SAM_EXPORT typedef void * SAM_GenericSystem;

	SAM_EXPORT SAM_GenericSystem SAM_GenericSystem_construct(const char* def, SAM_error* err);

	/// verbosity level 0 or 1. Returns 1 on success
	SAM_EXPORT int SAM_GenericSystem_execute(SAM_GenericSystem data, int verbosity, SAM_error* err);

	SAM_EXPORT void SAM_GenericSystem_destruct(SAM_GenericSystem system);

	SAM_EXPORT const char* SAM_GenericSystem_Plant_file_sget(SAM_GenericSystem ptr, SAM_error *err);

    SAM_EXPORT void SAM_GenericSystem_Plant_file_sset(SAM_GenericSystem ptr, const char* str, SAM_error *err);

    SAM_EXPORT void SAM_GenericSystem_Plant_data_tset(SAM_GenericSystem ptr, SAM_table tab, SAM_error *err);

    SAM_EXPORT SAM_table SAM_GenericSystem_Plant_data_tget(SAM_GenericSystem ptr, SAM_error *err);

	//
	// Plant parameters
	//

	/**
	 * Set conv_eff: Conversion Efficiency [%]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_GenericSystem_Plant_conv_eff_fset(SAM_GenericSystem ptr, float number, SAM_error *err);

	/**
	 * Set derate: Derate [%]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_GenericSystem_Plant_derate_fset(SAM_GenericSystem ptr, float number, SAM_error *err);

	/**
	 * Set energy_output_array: Array of Energy Output Profile [kW]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_GenericSystem_Plant_energy_output_array_aset(SAM_GenericSystem ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set heat_rate: Heat Rate [MMBTUs/MWhe]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_GenericSystem_Plant_heat_rate_fset(SAM_GenericSystem ptr, float number, SAM_error *err);

	/**
	 * Set spec_mode: Spec mode: 0=constant CF,1=profile []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_GenericSystem_Plant_spec_mode_fset(SAM_GenericSystem ptr, float number, SAM_error *err);

	/**
	 * Set system_capacity: Nameplace Capcity [kW]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_GenericSystem_Plant_system_capacity_fset(SAM_GenericSystem ptr, float number, SAM_error *err);

	/**
	 * Set user_capacity_factor: Capacity Factor [%]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_GenericSystem_Plant_user_capacity_factor_fset(SAM_GenericSystem ptr, float number, SAM_error *err);


	//
	// Common parameters
	//

	/**
	 * Set analysis_period: Lifetime analysis period [years]
	 * options: None
	 * constraints: None
	 * required if: system_use_lifetime_output=1
	 */
	SAM_EXPORT void SAM_GenericSystem_Common_analysis_period_fset(SAM_GenericSystem ptr, float number, SAM_error *err);

	/**
	 * Set generic_degradation: Annual module degradation [%/year]
	 * options: None
	 * constraints: None
	 * required if: system_use_lifetime_output=1
	 */
	SAM_EXPORT void SAM_GenericSystem_Common_generic_degradation_aset(SAM_GenericSystem ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set system_use_lifetime_output: Generic lifetime simulation [0/1]
	 * options: None
	 * constraints: INTEGER,MIN=0,MAX=1
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_GenericSystem_Common_system_use_lifetime_output_fset(SAM_GenericSystem ptr, float number, SAM_error *err);


	/**
	 * Plant Getters
	 */

	SAM_EXPORT float SAM_GenericSystem_Plant_conv_eff_fget(SAM_GenericSystem ptr, SAM_error *err);

	SAM_EXPORT float SAM_GenericSystem_Plant_derate_fget(SAM_GenericSystem ptr, SAM_error *err);

	SAM_EXPORT float* SAM_GenericSystem_Plant_energy_output_array_aget(SAM_GenericSystem ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_GenericSystem_Plant_heat_rate_fget(SAM_GenericSystem ptr, SAM_error *err);

	SAM_EXPORT float SAM_GenericSystem_Plant_spec_mode_fget(SAM_GenericSystem ptr, SAM_error *err);

	SAM_EXPORT float SAM_GenericSystem_Plant_system_capacity_fget(SAM_GenericSystem ptr, SAM_error *err);

	SAM_EXPORT float SAM_GenericSystem_Plant_user_capacity_factor_fget(SAM_GenericSystem ptr, SAM_error *err);


	/**
	 * Common Getters
	 */

	SAM_EXPORT float SAM_GenericSystem_Common_analysis_period_fget(SAM_GenericSystem ptr, SAM_error *err);

	SAM_EXPORT float* SAM_GenericSystem_Common_generic_degradation_aget(SAM_GenericSystem ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_GenericSystem_Common_system_use_lifetime_output_fget(SAM_GenericSystem ptr, SAM_error *err);


	/**
	 * Outputs Getters
	 */

	SAM_EXPORT float SAM_GenericSystem_Outputs_annual_energy_fget(SAM_GenericSystem ptr, SAM_error *err);

	SAM_EXPORT float SAM_GenericSystem_Outputs_annual_fuel_usage_fget(SAM_GenericSystem ptr, SAM_error *err);

	SAM_EXPORT float SAM_GenericSystem_Outputs_capacity_factor_fget(SAM_GenericSystem ptr, SAM_error *err);

	SAM_EXPORT float* SAM_GenericSystem_Outputs_gen_aget(SAM_GenericSystem ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_GenericSystem_Outputs_kwh_per_kw_fget(SAM_GenericSystem ptr, SAM_error *err);

	SAM_EXPORT float* SAM_GenericSystem_Outputs_monthly_energy_aget(SAM_GenericSystem ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_GenericSystem_Outputs_system_heat_rate_fget(SAM_GenericSystem ptr, SAM_error *err);

	SAM_EXPORT float SAM_GenericSystem_Outputs_water_usage_fget(SAM_GenericSystem ptr, SAM_error *err);

#ifdef __cplusplus
} /* end of extern "C" { */
#endif

#endif