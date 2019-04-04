#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <iostream>

#include <ssc/sscapi.h>

#include "SAM_api.h"
#include "ErrorHandler.h"
#include "SAM_Swh.h"

SAM_EXPORT SAM_Swh SAM_Swh_construct(const char* def, SAM_error* err){
	SAM_Swh result = nullptr;
	translateExceptions(err, [&]{
		result = ssc_data_create();
	});
	return result;
}

SAM_EXPORT int SAM_Swh_execute(SAM_Swh data, int verbosity, SAM_error* err){
	int n_err = 0;
	translateExceptions(err, [&]{
		n_err += SAM_module_exec("swh", data, verbosity, err);
	});
	return n_err;
}


SAM_EXPORT void SAM_Swh_destruct(SAM_Swh system)
{
	ssc_data_free(system);
}

SAM_EXPORT void SAM_Swh_Weather_solar_resource_file_sset(SAM_Swh ptr, const char* str, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_string(ptr, "solar_resource_file", str);
	});
}

SAM_EXPORT void SAM_Swh_SWH_FRUL_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "FRUL", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_FRta_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "FRta", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_T_room_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "T_room", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_T_set_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "T_set", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_T_tank_max_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "T_tank_max", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_U_tank_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "U_tank", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_V_tank_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "V_tank", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_albedo_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "albedo", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_area_coll_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "area_coll", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_azimuth_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "azimuth", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_custom_mains_aset(SAM_Swh ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "custom_mains", arr, length);
	});
}

SAM_EXPORT void SAM_Swh_SWH_custom_set_aset(SAM_Swh ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "custom_set", arr, length);
	});
}

SAM_EXPORT void SAM_Swh_SWH_fluid_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "fluid", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_hx_eff_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "hx_eff", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_iam_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "iam", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_irrad_mode_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "irrad_mode", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_mdot_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mdot", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_ncoll_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ncoll", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_pipe_diam_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pipe_diam", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_pipe_insul_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pipe_insul", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_pipe_k_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pipe_k", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_pipe_length_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pipe_length", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_pump_eff_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pump_eff", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_pump_power_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pump_power", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_scaled_draw_aset(SAM_Swh ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "scaled_draw", arr, length);
	});
}

SAM_EXPORT void SAM_Swh_SWH_shading_tset(SAM_Swh ptr, SAM_table tab, SAM_error *err){
	SAM_table_set_table(ptr, "shading", tab, err);
}



SAM_EXPORT void SAM_Swh_SWH_sky_model_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sky_model", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_system_capacity_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_capacity", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_tank_h2d_ratio_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "tank_h2d_ratio", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_test_flow_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "test_flow", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_test_fluid_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "test_fluid", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_tilt_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "tilt", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_use_custom_mains_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "use_custom_mains", number);
	});
}

SAM_EXPORT void SAM_Swh_SWH_use_custom_set_fset(SAM_Swh ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "use_custom_set", number);
	});
}

SAM_EXPORT const char* SAM_Swh_Weather_solar_resource_file_sget(SAM_Swh ptr, SAM_error *err){
	const char* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_string(ptr, "solar_resource_file");
	if (!result)
		make_access_error("SAM_Swh", "solar_resource_file");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_FRUL_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "FRUL", &result))
		make_access_error("SAM_Swh", "FRUL");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_FRta_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "FRta", &result))
		make_access_error("SAM_Swh", "FRta");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_T_room_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "T_room", &result))
		make_access_error("SAM_Swh", "T_room");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_T_set_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "T_set", &result))
		make_access_error("SAM_Swh", "T_set");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_T_tank_max_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "T_tank_max", &result))
		make_access_error("SAM_Swh", "T_tank_max");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_U_tank_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "U_tank", &result))
		make_access_error("SAM_Swh", "U_tank");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_V_tank_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "V_tank", &result))
		make_access_error("SAM_Swh", "V_tank");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_albedo_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "albedo", &result))
		make_access_error("SAM_Swh", "albedo");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_area_coll_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "area_coll", &result))
		make_access_error("SAM_Swh", "area_coll");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_azimuth_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "azimuth", &result))
		make_access_error("SAM_Swh", "azimuth");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_SWH_custom_mains_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "custom_mains", length);
	if (!result)
		make_access_error("SAM_Swh", "custom_mains");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_SWH_custom_set_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "custom_set", length);
	if (!result)
		make_access_error("SAM_Swh", "custom_set");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_fluid_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "fluid", &result))
		make_access_error("SAM_Swh", "fluid");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_hx_eff_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "hx_eff", &result))
		make_access_error("SAM_Swh", "hx_eff");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_iam_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "iam", &result))
		make_access_error("SAM_Swh", "iam");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_irrad_mode_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "irrad_mode", &result))
		make_access_error("SAM_Swh", "irrad_mode");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_mdot_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mdot", &result))
		make_access_error("SAM_Swh", "mdot");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_ncoll_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ncoll", &result))
		make_access_error("SAM_Swh", "ncoll");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_pipe_diam_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pipe_diam", &result))
		make_access_error("SAM_Swh", "pipe_diam");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_pipe_insul_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pipe_insul", &result))
		make_access_error("SAM_Swh", "pipe_insul");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_pipe_k_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pipe_k", &result))
		make_access_error("SAM_Swh", "pipe_k");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_pipe_length_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pipe_length", &result))
		make_access_error("SAM_Swh", "pipe_length");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_pump_eff_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pump_eff", &result))
		make_access_error("SAM_Swh", "pump_eff");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_pump_power_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pump_power", &result))
		make_access_error("SAM_Swh", "pump_power");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_SWH_scaled_draw_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "scaled_draw", length);
	if (!result)
		make_access_error("SAM_Swh", "scaled_draw");
	});
	return result;
}



SAM_EXPORT SAM_table SAM_Swh_SWH_shading_tget(SAM_Swh ptr, SAM_error *err){
	SAM_table result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_table(ptr, "shading");
	if (!result)
		make_access_error("SAM_Swh", "shading");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_sky_model_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sky_model", &result))
		make_access_error("SAM_Swh", "sky_model");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_system_capacity_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_capacity", &result))
		make_access_error("SAM_Swh", "system_capacity");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_tank_h2d_ratio_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "tank_h2d_ratio", &result))
		make_access_error("SAM_Swh", "tank_h2d_ratio");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_test_flow_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "test_flow", &result))
		make_access_error("SAM_Swh", "test_flow");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_test_fluid_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "test_fluid", &result))
		make_access_error("SAM_Swh", "test_fluid");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_tilt_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "tilt", &result))
		make_access_error("SAM_Swh", "tilt");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_use_custom_mains_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "use_custom_mains", &result))
		make_access_error("SAM_Swh", "use_custom_mains");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_SWH_use_custom_set_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "use_custom_set", &result))
		make_access_error("SAM_Swh", "use_custom_set");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_I_incident_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "I_incident", length);
	if (!result)
		make_access_error("SAM_Swh", "I_incident");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_I_transmitted_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "I_transmitted", length);
	if (!result)
		make_access_error("SAM_Swh", "I_transmitted");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_P_pump_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "P_pump", length);
	if (!result)
		make_access_error("SAM_Swh", "P_pump");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_Q_aux_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "Q_aux", length);
	if (!result)
		make_access_error("SAM_Swh", "Q_aux");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_Q_auxonly_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "Q_auxonly", length);
	if (!result)
		make_access_error("SAM_Swh", "Q_auxonly");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_Q_deliv_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "Q_deliv", length);
	if (!result)
		make_access_error("SAM_Swh", "Q_deliv");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_Q_loss_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "Q_loss", length);
	if (!result)
		make_access_error("SAM_Swh", "Q_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_Q_transmitted_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "Q_transmitted", length);
	if (!result)
		make_access_error("SAM_Swh", "Q_transmitted");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_Q_useful_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "Q_useful", length);
	if (!result)
		make_access_error("SAM_Swh", "Q_useful");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_T_amb_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "T_amb", length);
	if (!result)
		make_access_error("SAM_Swh", "T_amb");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_T_cold_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "T_cold", length);
	if (!result)
		make_access_error("SAM_Swh", "T_cold");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_T_deliv_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "T_deliv", length);
	if (!result)
		make_access_error("SAM_Swh", "T_deliv");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_T_hot_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "T_hot", length);
	if (!result)
		make_access_error("SAM_Swh", "T_hot");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_T_mains_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "T_mains", length);
	if (!result)
		make_access_error("SAM_Swh", "T_mains");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_T_tank_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "T_tank", length);
	if (!result)
		make_access_error("SAM_Swh", "T_tank");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_V_cold_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "V_cold", length);
	if (!result)
		make_access_error("SAM_Swh", "V_cold");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_V_hot_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "V_hot", length);
	if (!result)
		make_access_error("SAM_Swh", "V_hot");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_Outputs_annual_Q_aux_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_Q_aux", &result))
		make_access_error("SAM_Swh", "annual_Q_aux");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_Outputs_annual_Q_auxonly_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_Q_auxonly", &result))
		make_access_error("SAM_Swh", "annual_Q_auxonly");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_Outputs_annual_Q_deliv_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_Q_deliv", &result))
		make_access_error("SAM_Swh", "annual_Q_deliv");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_Outputs_annual_energy_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_energy", &result))
		make_access_error("SAM_Swh", "annual_energy");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_beam_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "beam", length);
	if (!result)
		make_access_error("SAM_Swh", "beam");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_Outputs_capacity_factor_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "capacity_factor", &result))
		make_access_error("SAM_Swh", "capacity_factor");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_diffuse_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "diffuse", length);
	if (!result)
		make_access_error("SAM_Swh", "diffuse");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_draw_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "draw", length);
	if (!result)
		make_access_error("SAM_Swh", "draw");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_gen_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "gen", length);
	if (!result)
		make_access_error("SAM_Swh", "gen");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_Outputs_kwh_per_kw_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "kwh_per_kw", &result))
		make_access_error("SAM_Swh", "kwh_per_kw");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_mode_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "mode", length);
	if (!result)
		make_access_error("SAM_Swh", "mode");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_monthly_Q_aux_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_Q_aux", length);
	if (!result)
		make_access_error("SAM_Swh", "monthly_Q_aux");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_monthly_Q_auxonly_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_Q_auxonly", length);
	if (!result)
		make_access_error("SAM_Swh", "monthly_Q_auxonly");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_monthly_Q_deliv_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_Q_deliv", length);
	if (!result)
		make_access_error("SAM_Swh", "monthly_Q_deliv");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_monthly_energy_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_energy", length);
	if (!result)
		make_access_error("SAM_Swh", "monthly_energy");
	});
	return result;
}



SAM_EXPORT float* SAM_Swh_Outputs_shading_loss_aget(SAM_Swh ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "shading_loss", length);
	if (!result)
		make_access_error("SAM_Swh", "shading_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_Outputs_solar_fraction_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "solar_fraction", &result))
		make_access_error("SAM_Swh", "solar_fraction");
	});
	return result;
}



SAM_EXPORT float SAM_Swh_Outputs_ts_shift_hours_fget(SAM_Swh ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ts_shift_hours", &result))
		make_access_error("SAM_Swh", "ts_shift_hours");
	});
	return result;
}



