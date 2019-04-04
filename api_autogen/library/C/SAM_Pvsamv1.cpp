#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <iostream>

#include <ssc/sscapi.h>

#include "SAM_api.h"
#include "ErrorHandler.h"
#include "SAM_Pvsamv1.h"

SAM_EXPORT SAM_Pvsamv1 SAM_Pvsamv1_construct(const char* def, SAM_error* err){
	SAM_Pvsamv1 result = nullptr;
	translateExceptions(err, [&]{
		result = ssc_data_create();
	});
	return result;
}

SAM_EXPORT int SAM_Pvsamv1_execute(SAM_Pvsamv1 data, int verbosity, SAM_error* err){
	int n_err = 0;
	translateExceptions(err, [&]{
		n_err += SAM_module_exec("pvsamv1", data, verbosity, err);
	});
	return n_err;
}


SAM_EXPORT void SAM_Pvsamv1_destruct(SAM_Pvsamv1 system)
{
	ssc_data_free(system);
}

SAM_EXPORT void SAM_Pvsamv1_SolarResource_albedo_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "albedo", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SolarResource_irrad_mode_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "irrad_mode", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SolarResource_sky_model_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sky_model", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SolarResource_solar_resource_data_tset(SAM_Pvsamv1 ptr, SAM_table tab, SAM_error *err){
	SAM_table_set_table(ptr, "solar_resource_data", tab, err);
}



SAM_EXPORT void SAM_Pvsamv1_SolarResource_solar_resource_file_sset(SAM_Pvsamv1 ptr, const char* str, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_string(ptr, "solar_resource_file", str);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SolarResource_use_wf_albedo_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "use_wf_albedo", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_acwiring_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "acwiring_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_dcoptimizer_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dcoptimizer_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_en_snow_model_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "en_snow_model", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray1_dcwiring_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_dcwiring_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray1_diodeconn_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_diodeconn_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray1_mismatch_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_mismatch_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray1_nameplate_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_nameplate_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray1_rear_irradiance_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_rear_irradiance_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray1_soiling_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "subarray1_soiling", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray1_tracking_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_tracking_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray2_dcwiring_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_dcwiring_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray2_diodeconn_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_diodeconn_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray2_mismatch_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_mismatch_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray2_nameplate_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_nameplate_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray2_rear_irradiance_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_rear_irradiance_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray2_soiling_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "subarray2_soiling", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray2_tracking_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_tracking_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray3_dcwiring_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_dcwiring_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray3_diodeconn_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_diodeconn_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray3_mismatch_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_mismatch_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray3_nameplate_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_nameplate_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray3_rear_irradiance_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_rear_irradiance_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray3_soiling_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "subarray3_soiling", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray3_tracking_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_tracking_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray4_dcwiring_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_dcwiring_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray4_diodeconn_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_diodeconn_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray4_mismatch_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_mismatch_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray4_nameplate_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_nameplate_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray4_rear_irradiance_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_rear_irradiance_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray4_soiling_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "subarray4_soiling", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_subarray4_tracking_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_tracking_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_transformer_load_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "transformer_load_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_transformer_no_load_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "transformer_no_load_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Losses_transmission_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "transmission_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Lifetime_ac_lifetime_losses_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "ac_lifetime_losses", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Lifetime_analysis_period_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "analysis_period", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Lifetime_dc_degradation_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "dc_degradation", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Lifetime_dc_lifetime_losses_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "dc_lifetime_losses", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Lifetime_en_ac_lifetime_losses_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "en_ac_lifetime_losses", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Lifetime_en_dc_lifetime_losses_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "en_dc_lifetime_losses", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Lifetime_system_use_lifetime_output_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_use_lifetime_output", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_enable_mismatch_vmax_calc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "enable_mismatch_vmax_calc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_inverter_count_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inverter_count", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray1_azimuth_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_azimuth", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray1_backtrack_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_backtrack", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray1_gcr_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_gcr", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray1_modules_per_string_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_modules_per_string", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray1_monthly_tilt_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "subarray1_monthly_tilt", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray1_mppt_input_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_mppt_input", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray1_nstrings_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_nstrings", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray1_rotlim_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_rotlim", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray1_tilt_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_tilt", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray1_tilt_eq_lat_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_tilt_eq_lat", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray1_track_mode_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_track_mode", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray2_azimuth_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_azimuth", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray2_backtrack_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_backtrack", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray2_enable_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_enable", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray2_gcr_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_gcr", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray2_modules_per_string_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_modules_per_string", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray2_monthly_tilt_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "subarray2_monthly_tilt", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray2_mppt_input_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_mppt_input", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray2_nstrings_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_nstrings", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray2_rotlim_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_rotlim", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray2_tilt_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_tilt", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray2_tilt_eq_lat_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_tilt_eq_lat", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray2_track_mode_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_track_mode", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray3_azimuth_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_azimuth", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray3_backtrack_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_backtrack", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray3_enable_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_enable", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray3_gcr_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_gcr", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray3_modules_per_string_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_modules_per_string", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray3_monthly_tilt_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "subarray3_monthly_tilt", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray3_mppt_input_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_mppt_input", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray3_nstrings_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_nstrings", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray3_rotlim_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_rotlim", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray3_tilt_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_tilt", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray3_tilt_eq_lat_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_tilt_eq_lat", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray3_track_mode_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_track_mode", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray4_azimuth_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_azimuth", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray4_backtrack_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_backtrack", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray4_enable_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_enable", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray4_gcr_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_gcr", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray4_modules_per_string_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_modules_per_string", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray4_monthly_tilt_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "subarray4_monthly_tilt", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray4_mppt_input_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_mppt_input", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray4_nstrings_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_nstrings", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray4_rotlim_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_rotlim", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray4_tilt_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_tilt", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray4_tilt_eq_lat_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_tilt_eq_lat", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_subarray4_track_mode_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_track_mode", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SystemDesign_system_capacity_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_capacity", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Shading_subarray1_shade_mode_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_shade_mode", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Shading_subarray1_shading_tset(SAM_Pvsamv1 ptr, SAM_table tab, SAM_error *err){
	SAM_table_set_table(ptr, "subarray1_shading", tab, err);
}



SAM_EXPORT void SAM_Pvsamv1_Shading_subarray2_shade_mode_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_shade_mode", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Shading_subarray2_shading_tset(SAM_Pvsamv1 ptr, SAM_table tab, SAM_error *err){
	SAM_table_set_table(ptr, "subarray2_shading", tab, err);
}



SAM_EXPORT void SAM_Pvsamv1_Shading_subarray3_shade_mode_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_shade_mode", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Shading_subarray3_shading_tset(SAM_Pvsamv1 ptr, SAM_table tab, SAM_error *err){
	SAM_table_set_table(ptr, "subarray3_shading", tab, err);
}



SAM_EXPORT void SAM_Pvsamv1_Shading_subarray4_shade_mode_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_shade_mode", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Shading_subarray4_shading_tset(SAM_Pvsamv1 ptr, SAM_table tab, SAM_error *err){
	SAM_table_set_table(ptr, "subarray4_shading", tab, err);
}



SAM_EXPORT void SAM_Pvsamv1_Layout_module_aspect_ratio_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "module_aspect_ratio", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Layout_subarray1_mod_orient_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_mod_orient", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Layout_subarray1_nmodx_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_nmodx", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Layout_subarray1_nmody_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray1_nmody", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Layout_subarray2_mod_orient_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_mod_orient", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Layout_subarray2_nmodx_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_nmodx", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Layout_subarray2_nmody_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray2_nmody", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Layout_subarray3_mod_orient_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_mod_orient", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Layout_subarray3_nmodx_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_nmodx", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Layout_subarray3_nmody_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray3_nmody", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Layout_subarray4_mod_orient_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_mod_orient", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Layout_subarray4_nmodx_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_nmodx", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Layout_subarray4_nmody_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "subarray4_nmody", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Module_module_model_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "module_model", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_a_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_a", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_area_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_area", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_b_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_b", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_bifacial_ground_clearance_height_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_bifacial_ground_clearance_height", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_bifacial_transmission_factor_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_bifacial_transmission_factor", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_bifaciality_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_bifaciality", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_dT_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_dT", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_eff0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_eff0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_eff1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_eff1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_eff2_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_eff2", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_eff3_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_eff3", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_eff4_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_eff4", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_fd_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_fd", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_is_bifacial_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_is_bifacial", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_module_structure_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_module_structure", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_rad0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_rad0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_rad1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_rad1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_rad2_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_rad2", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_rad3_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_rad3", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_rad4_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_rad4", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_reference_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_reference", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_temp_coeff_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_temp_coeff", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_vmp_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_vmp", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_voc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "spe_voc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_a_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_a_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_adjust_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_adjust", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_alpha_sc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_alpha_sc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_area_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_area", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_array_cols_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_array_cols", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_array_rows_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_array_rows", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_backside_temp_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_backside_temp", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_beta_oc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_beta_oc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_bifacial_ground_clearance_height_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_bifacial_ground_clearance_height", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_bifacial_transmission_factor_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_bifacial_transmission_factor", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_bifaciality_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_bifaciality", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_gamma_r_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_gamma_r", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_gap_spacing_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_gap_spacing", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_heat_transfer_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_heat_transfer", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_height_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_height", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_i_l_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_i_l_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_i_mp_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_i_mp_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_i_o_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_i_o_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_i_sc_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_i_sc_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_is_bifacial_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_is_bifacial", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_module_length_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_module_length", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_module_width_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_module_width", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_mounting_config_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_mounting_config", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_mounting_orientation_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_mounting_orientation", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_n_s_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_n_s", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_r_s_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_r_s", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_r_sh_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_r_sh_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_standoff_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_standoff", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_t_noct_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_t_noct", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_temp_corr_mode_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_temp_corr_mode", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_v_mp_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_v_mp_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_v_oc_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cec_v_oc_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_aisc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_aisc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_area_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_area", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_bifacial_ground_clearance_height_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_bifacial_ground_clearance_height", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_bifacial_transmission_factor_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_bifacial_transmission_factor", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_bifaciality_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_bifaciality", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_bvoc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_bvoc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_celltech_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_celltech", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_gpmp_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_gpmp", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_imp_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_imp", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_is_bifacial_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_is_bifacial", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_isc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_isc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_mounting_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_mounting", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_nser_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_nser", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_standoff_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_standoff", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_tnoct_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_tnoct", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_vmp_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_vmp", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_voc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "6par_voc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_a_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_a", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_a0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_a0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_a1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_a1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_a2_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_a2", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_a3_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_a3", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_a4_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_a4", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_aimp_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_aimp", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_aisc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_aisc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_area_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_area", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_b", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_b0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_b1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b2_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_b2", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b3_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_b3", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b4_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_b4", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b5_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_b5", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_bvmpo_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_bvmpo", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_bvoco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_bvoco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_c0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_c1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c2_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_c2", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c3_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_c3", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c4_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_c4", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c5_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_c5", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c6_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_c6", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c7_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_c7", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_dtc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_dtc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_fd_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_fd", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_impo_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_impo", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_isco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_isco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_ixo_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_ixo", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_ixxo_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_ixxo", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_mbvmp_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_mbvmp", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_mbvoc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_mbvoc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_module_structure_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_module_structure", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_n_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_n", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_ref_a_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_ref_a", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_ref_b_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_ref_b", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_ref_dT_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_ref_dT", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_series_cells_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_series_cells", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_vmpo_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_vmpo", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_voco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "snl_voco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_AMa0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_AMa0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_AMa1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_AMa1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_AMa2_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_AMa2", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_AMa3_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_AMa3", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_AMa4_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_AMa4", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Egref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_Egref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Il_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_Il", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Imp0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_Imp0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Io_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_Io", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Isc0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_Isc0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Vmp0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_Vmp0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Voc0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_Voc0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_alphaIsc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_alphaIsc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_area_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_area", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_c1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_c1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_c2_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_c2", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_c3_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_c3", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_d1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_d1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_d2_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_d2", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_d3_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_d3", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_glass_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_glass", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_mounting_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_mounting", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_n_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_n", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_nser_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_nser", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_standoff_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_standoff", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_tnoct_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "sd11par_tnoct", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_lp0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_AM_c_lp0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_lp1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_AM_c_lp1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_lp2_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_AM_c_lp2", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_lp3_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_AM_c_lp3", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_lp4_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_AM_c_lp4", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_lp5_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_AM_c_lp5", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_sa0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_AM_c_sa0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_sa1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_AM_c_sa1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_sa2_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_AM_c_sa2", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_sa3_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_AM_c_sa3", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_sa4_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_AM_c_sa4", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_mode_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_AM_mode", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_D2MuTau_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_D2MuTau", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_E_g_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_E_g", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_as_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_IAM_c_as", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_cs_iamValue_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "mlm_IAM_c_cs_iamValue", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_cs_incAngle_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "mlm_IAM_c_cs_incAngle", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_sa0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_IAM_c_sa0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_sa1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_IAM_c_sa1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_sa2_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_IAM_c_sa2", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_sa3_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_IAM_c_sa3", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_sa4_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_IAM_c_sa4", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_sa5_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_IAM_c_sa5", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_mode_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_IAM_mode", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_I_mp_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_I_mp_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_I_sc_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_I_sc_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_Length_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_Length", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_N_diodes_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_N_diodes", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_N_parallel_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_N_parallel", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_N_series_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_N_series", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_R_s_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_R_s", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_R_sh0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_R_sh0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_R_shexp_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_R_shexp", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_R_shref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_R_shref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_S_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_S_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_c_fa_U0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_T_c_fa_U0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_c_fa_U1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_T_c_fa_U1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_c_fa_alpha_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_T_c_fa_alpha", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_c_no_mounting_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_T_c_no_mounting", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_c_no_standoff_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_T_c_no_standoff", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_c_no_tnoct_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_T_c_no_tnoct", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_mode_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_T_mode", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_T_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_V_mp_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_V_mp_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_V_oc_ref_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_V_oc_ref", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_Width_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_Width", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_alpha_isc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_alpha_isc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_beta_voc_spec_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_beta_voc_spec", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_groundRelfectionFraction_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_groundRelfectionFraction", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_mu_n_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_mu_n", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_n_0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mlm_n_0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Inverter_inv_cec_cg_eff_cec_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_cec_cg_eff_cec", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Inverter_inv_cec_cg_paco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_cec_cg_paco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Inverter_inv_ds_eff_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_ds_eff", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Inverter_inv_ds_paco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_ds_paco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Inverter_inv_num_mppt_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_num_mppt", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Inverter_inv_pd_eff_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_pd_eff", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Inverter_inv_pd_paco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_pd_paco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Inverter_inv_snl_eff_cec_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_snl_eff_cec", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Inverter_inv_snl_paco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_snl_paco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Inverter_inverter_count_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inverter_count", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Inverter_inverter_model_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inverter_model", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Inverter_mppt_hi_inverter_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mppt_hi_inverter", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Inverter_mppt_low_inverter_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mppt_low_inverter", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECDatabase_inv_snl_c0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_snl_c0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECDatabase_inv_snl_c1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_snl_c1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECDatabase_inv_snl_c2_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_snl_c2", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECDatabase_inv_snl_c3_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_snl_c3", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECDatabase_inv_snl_paco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_snl_paco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECDatabase_inv_snl_pdco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_snl_pdco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECDatabase_inv_snl_pnt_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_snl_pnt", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECDatabase_inv_snl_pso_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_snl_pso", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECDatabase_inv_snl_vdcmax_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_snl_vdcmax", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECDatabase_inv_snl_vdco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_snl_vdco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECDatabase_inv_tdc_cec_db_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "inv_tdc_cec_db", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_c0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_cec_cg_c0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_c1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_cec_cg_c1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_c2_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_cec_cg_c2", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_c3_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_cec_cg_c3", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_paco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_cec_cg_paco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_pdco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_cec_cg_pdco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_pnt_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_cec_cg_pnt", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_psco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_cec_cg_psco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_vdcmax_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_cec_cg_vdcmax", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_vdco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_cec_cg_vdco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_tdc_cec_cg_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "inv_tdc_cec_cg", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterDatasheet_inv_ds_eff_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_ds_eff", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterDatasheet_inv_ds_paco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_ds_paco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterDatasheet_inv_ds_pnt_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_ds_pnt", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterDatasheet_inv_ds_pso_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_ds_pso", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterDatasheet_inv_ds_vdcmax_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_ds_vdcmax", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterDatasheet_inv_ds_vdco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_ds_vdco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterDatasheet_inv_tdc_ds_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "inv_tdc_ds", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_efficiency_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "inv_pd_efficiency", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_paco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_pd_paco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_partload_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "inv_pd_partload", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_pdco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_pd_pdco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_pnt_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_pd_pnt", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_vdcmax_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_pd_vdcmax", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_vdco_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_pd_vdco", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterPartLoadCurve_inv_tdc_plc_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "inv_tdc_plc", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_Aux_Loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_Aux_Loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_CompPMax_sset(SAM_Pvsamv1 ptr, const char* str, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_string(ptr, "ond_CompPMax", str);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_CompVMax_sset(SAM_Pvsamv1 ptr, const char* str, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_string(ptr, "ond_CompVMax", str);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_IMaxAC_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_IMaxAC", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_IMaxDC_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_IMaxDC", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_INomAC_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_INomAC", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_INomDC_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_INomDC", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_ModeAffEnum_sset(SAM_Pvsamv1 ptr, const char* str, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_string(ptr, "ond_ModeAffEnum", str);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_ModeOper_sset(SAM_Pvsamv1 ptr, const char* str, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_string(ptr, "ond_ModeOper", str);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_NbInputs_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_NbInputs", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_NbMPPT_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_NbMPPT", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_Night_Loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_Night_Loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PLim1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_PLim1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PLimAbs_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_PLimAbs", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PMaxDC_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_PMaxDC", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PMaxOUT_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_PMaxOUT", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PNomConv_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_PNomConv", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PNomDC_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_PNomDC", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PSeuil_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_PSeuil", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_TPLim1_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_TPLim1", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_TPLimAbs_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_TPLimAbs", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_TPMax_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_TPMax", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_TPNom_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_TPNom", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_VAbsMax_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_VAbsMax", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_VMPPMax_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_VMPPMax", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_VMppMin_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_VMppMin", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_VNomEff_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "ond_VNomEff", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_VOutConv_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_VOutConv", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_doAllowOverpower_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_doAllowOverpower", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_doUseTemperatureLimit_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_doUseTemperatureLimit", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_effCurve_Pac_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "ond_effCurve_Pac", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_effCurve_Pdc_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "ond_effCurve_Pdc", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_effCurve_elements_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_effCurve_elements", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_effCurve_eta_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "ond_effCurve_eta", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_lossRAc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_lossRAc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_lossRDc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ond_lossRDc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_LeadAcid_q10_computed_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "LeadAcid_q10_computed", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_LeadAcid_q20_computed_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "LeadAcid_q20_computed", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_LeadAcid_qn_computed_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "LeadAcid_qn_computed", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_LeadAcid_tn_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "LeadAcid_tn", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_C_rate_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_C_rate", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_Cp_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_Cp", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_Qexp_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_Qexp", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_Qfull_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_Qfull", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_Qfull_flow_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_Qfull_flow", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_Qnom_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_Qnom", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_Vexp_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_Vexp", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_Vfull_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_Vfull", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_Vnom_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_Vnom", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_Vnom_default_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_Vnom_default", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_ac_dc_efficiency_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_ac_dc_efficiency", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_ac_or_dc_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_ac_or_dc", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_auto_gridcharge_max_daily_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_auto_gridcharge_max_daily", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_calendar_a_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_calendar_a", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_calendar_b_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_calendar_b", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_calendar_c_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_calendar_c", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_calendar_choice_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_calendar_choice", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_calendar_lifetime_matrix_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "batt_calendar_lifetime_matrix", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_calendar_q0_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_calendar_q0", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_chem_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_chem", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_computed_bank_capacity_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_computed_bank_capacity", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_computed_series_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_computed_series", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_computed_strings_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_computed_strings", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_current_charge_max_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_current_charge_max", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_current_choice_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_current_choice", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_current_discharge_max_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_current_discharge_max", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_custom_dispatch_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_custom_dispatch", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_cycle_cost_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_cycle_cost", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_cycle_cost_choice_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_cycle_cost_choice", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_dc_ac_efficiency_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_dc_ac_efficiency", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_dc_dc_efficiency_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_dc_dc_efficiency", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_dispatch_auto_can_charge_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_dispatch_auto_can_charge", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_dispatch_auto_can_clipcharge_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_dispatch_auto_can_clipcharge", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_dispatch_auto_can_fuelcellcharge_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_dispatch_auto_can_fuelcellcharge", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_dispatch_auto_can_gridcharge_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_dispatch_auto_can_gridcharge", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_dispatch_choice_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_dispatch_choice", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_dispatch_update_frequency_hours_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_dispatch_update_frequency_hours", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_h_to_ambient_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_h_to_ambient", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_height_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_height", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_initial_SOC_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_initial_SOC", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_length_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_length", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_lifetime_matrix_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "batt_lifetime_matrix", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_look_ahead_hours_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_look_ahead_hours", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_loss_choice_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_loss_choice", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_losses_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_losses", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_losses_charging_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_losses_charging", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_losses_discharging_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_losses_discharging", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_losses_idle_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_losses_idle", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_mass_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_mass", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_maximum_SOC_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_maximum_SOC", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_meter_position_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_meter_position", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_minimum_SOC_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_minimum_SOC", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_minimum_modetime_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_minimum_modetime", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_power_charge_max_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_power_charge_max", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_power_discharge_max_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_power_discharge_max", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_pv_clipping_forecast_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_pv_clipping_forecast", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_pv_dc_forecast_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_pv_dc_forecast", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_replacement_capacity_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_replacement_capacity", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_replacement_option_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_replacement_option", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_replacement_schedule_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_replacement_schedule", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_resistance_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_resistance", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_room_temperature_celsius_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_room_temperature_celsius", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_target_choice_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_target_choice", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_target_power_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_target_power", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_target_power_monthly_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_target_power_monthly", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_voltage_choice_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_voltage_choice", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_voltage_matrix_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "batt_voltage_matrix", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_batt_width_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_width", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_cap_vs_temp_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "cap_vs_temp", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_dispatch_manual_charge_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "dispatch_manual_charge", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_dispatch_manual_discharge_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "dispatch_manual_discharge", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_dispatch_manual_gridcharge_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "dispatch_manual_gridcharge", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_dispatch_manual_percent_discharge_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "dispatch_manual_percent_discharge", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_dispatch_manual_percent_gridcharge_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "dispatch_manual_percent_gridcharge", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_dispatch_manual_sched_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "dispatch_manual_sched", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_dispatch_manual_sched_weekend_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "dispatch_manual_sched_weekend", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_en_batt_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "en_batt", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_load_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "load", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Battery_om_replacement_cost1_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_replacement_cost1", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Simulation_analysis_period_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "analysis_period", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Simulation_system_use_lifetime_output_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_use_lifetime_output", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_Common_inverter_model_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inverter_model", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_PV_dcoptimizer_loss_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dcoptimizer_loss", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_FuelCell_dispatch_manual_fuelcellcharge_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "dispatch_manual_fuelcellcharge", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_FuelCell_fuelcell_power_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "fuelcell_power", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_ElectricityRate_en_electricity_rates_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "en_electricity_rates", number);
	});
}

SAM_EXPORT void SAM_Pvsamv1_ElectricityRate_ur_ec_sched_weekday_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "ur_ec_sched_weekday", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_ElectricityRate_ur_ec_sched_weekend_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "ur_ec_sched_weekend", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_ElectricityRate_ur_ec_tou_mat_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "ur_ec_tou_mat", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_EnergyMarket_dispatch_sched_weekday_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "dispatch_sched_weekday", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_EnergyMarket_dispatch_sched_weekend_mset(SAM_Pvsamv1 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "dispatch_sched_weekend", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvsamv1_EnergyMarket_dispatch_tod_factors_aset(SAM_Pvsamv1 ptr, float* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "dispatch_tod_factors", arr, length);
	});
}

SAM_EXPORT void SAM_Pvsamv1_EnergyMarket_ppa_price_input_fset(SAM_Pvsamv1 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ppa_price_input", number);
	});
}

SAM_EXPORT float* SAM_Pvsamv1_SolarResource_albedo_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "albedo", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "albedo");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SolarResource_irrad_mode_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "irrad_mode", &result))
		make_access_error("SAM_Pvsamv1", "irrad_mode");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SolarResource_sky_model_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sky_model", &result))
		make_access_error("SAM_Pvsamv1", "sky_model");
	});
	return result;
}



SAM_EXPORT SAM_table SAM_Pvsamv1_SolarResource_solar_resource_data_tget(SAM_Pvsamv1 ptr, SAM_error *err){
	SAM_table result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_table(ptr, "solar_resource_data");
	if (!result)
		make_access_error("SAM_Pvsamv1", "solar_resource_data");
	});
	return result;
}



SAM_EXPORT const char* SAM_Pvsamv1_SolarResource_solar_resource_file_sget(SAM_Pvsamv1 ptr, SAM_error *err){
	const char* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_string(ptr, "solar_resource_file");
	if (!result)
		make_access_error("SAM_Pvsamv1", "solar_resource_file");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SolarResource_use_wf_albedo_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "use_wf_albedo", &result))
		make_access_error("SAM_Pvsamv1", "use_wf_albedo");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_acwiring_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "acwiring_loss", &result))
		make_access_error("SAM_Pvsamv1", "acwiring_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_dcoptimizer_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dcoptimizer_loss", &result))
		make_access_error("SAM_Pvsamv1", "dcoptimizer_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_en_snow_model_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "en_snow_model", &result))
		make_access_error("SAM_Pvsamv1", "en_snow_model");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray1_dcwiring_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_dcwiring_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_dcwiring_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray1_diodeconn_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_diodeconn_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_diodeconn_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray1_mismatch_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_mismatch_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_mismatch_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray1_nameplate_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_nameplate_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_nameplate_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray1_rear_irradiance_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_rear_irradiance_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_rear_irradiance_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Losses_subarray1_soiling_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_soiling", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_soiling");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray1_tracking_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_tracking_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_tracking_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray2_dcwiring_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_dcwiring_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_dcwiring_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray2_diodeconn_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_diodeconn_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_diodeconn_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray2_mismatch_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_mismatch_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_mismatch_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray2_nameplate_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_nameplate_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_nameplate_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray2_rear_irradiance_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_rear_irradiance_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_rear_irradiance_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Losses_subarray2_soiling_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_soiling", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_soiling");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray2_tracking_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_tracking_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_tracking_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray3_dcwiring_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_dcwiring_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_dcwiring_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray3_diodeconn_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_diodeconn_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_diodeconn_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray3_mismatch_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_mismatch_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_mismatch_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray3_nameplate_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_nameplate_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_nameplate_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray3_rear_irradiance_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_rear_irradiance_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_rear_irradiance_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Losses_subarray3_soiling_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_soiling", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_soiling");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray3_tracking_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_tracking_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_tracking_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray4_dcwiring_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_dcwiring_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_dcwiring_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray4_diodeconn_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_diodeconn_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_diodeconn_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray4_mismatch_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_mismatch_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_mismatch_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray4_nameplate_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_nameplate_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_nameplate_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray4_rear_irradiance_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_rear_irradiance_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_rear_irradiance_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Losses_subarray4_soiling_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_soiling", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_soiling");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_subarray4_tracking_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_tracking_loss", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_tracking_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_transformer_load_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "transformer_load_loss", &result))
		make_access_error("SAM_Pvsamv1", "transformer_load_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_transformer_no_load_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "transformer_no_load_loss", &result))
		make_access_error("SAM_Pvsamv1", "transformer_no_load_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Losses_transmission_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "transmission_loss", &result))
		make_access_error("SAM_Pvsamv1", "transmission_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Lifetime_ac_lifetime_losses_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "ac_lifetime_losses", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "ac_lifetime_losses");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Lifetime_analysis_period_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "analysis_period", &result))
		make_access_error("SAM_Pvsamv1", "analysis_period");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Lifetime_dc_degradation_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dc_degradation", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dc_degradation");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Lifetime_dc_lifetime_losses_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dc_lifetime_losses", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dc_lifetime_losses");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Lifetime_en_ac_lifetime_losses_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "en_ac_lifetime_losses", &result))
		make_access_error("SAM_Pvsamv1", "en_ac_lifetime_losses");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Lifetime_en_dc_lifetime_losses_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "en_dc_lifetime_losses", &result))
		make_access_error("SAM_Pvsamv1", "en_dc_lifetime_losses");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Lifetime_system_use_lifetime_output_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_use_lifetime_output", &result))
		make_access_error("SAM_Pvsamv1", "system_use_lifetime_output");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_enable_mismatch_vmax_calc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "enable_mismatch_vmax_calc", &result))
		make_access_error("SAM_Pvsamv1", "enable_mismatch_vmax_calc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_inverter_count_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inverter_count", &result))
		make_access_error("SAM_Pvsamv1", "inverter_count");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray1_azimuth_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_azimuth", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_azimuth");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray1_backtrack_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_backtrack", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_backtrack");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray1_gcr_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_gcr", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_gcr");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray1_modules_per_string_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_modules_per_string", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_modules_per_string");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_SystemDesign_subarray1_monthly_tilt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_monthly_tilt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_monthly_tilt");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray1_mppt_input_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_mppt_input", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_mppt_input");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray1_nstrings_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_nstrings", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_nstrings");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray1_rotlim_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_rotlim", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_rotlim");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray1_tilt_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_tilt", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_tilt");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray1_tilt_eq_lat_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_tilt_eq_lat", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_tilt_eq_lat");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray1_track_mode_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_track_mode", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_track_mode");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray2_azimuth_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_azimuth", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_azimuth");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray2_backtrack_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_backtrack", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_backtrack");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray2_enable_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_enable", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_enable");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray2_gcr_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_gcr", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_gcr");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray2_modules_per_string_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_modules_per_string", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_modules_per_string");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_SystemDesign_subarray2_monthly_tilt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_monthly_tilt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_monthly_tilt");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray2_mppt_input_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_mppt_input", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_mppt_input");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray2_nstrings_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_nstrings", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_nstrings");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray2_rotlim_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_rotlim", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_rotlim");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray2_tilt_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_tilt", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_tilt");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray2_tilt_eq_lat_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_tilt_eq_lat", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_tilt_eq_lat");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray2_track_mode_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_track_mode", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_track_mode");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray3_azimuth_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_azimuth", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_azimuth");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray3_backtrack_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_backtrack", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_backtrack");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray3_enable_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_enable", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_enable");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray3_gcr_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_gcr", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_gcr");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray3_modules_per_string_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_modules_per_string", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_modules_per_string");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_SystemDesign_subarray3_monthly_tilt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_monthly_tilt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_monthly_tilt");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray3_mppt_input_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_mppt_input", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_mppt_input");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray3_nstrings_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_nstrings", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_nstrings");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray3_rotlim_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_rotlim", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_rotlim");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray3_tilt_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_tilt", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_tilt");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray3_tilt_eq_lat_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_tilt_eq_lat", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_tilt_eq_lat");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray3_track_mode_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_track_mode", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_track_mode");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray4_azimuth_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_azimuth", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_azimuth");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray4_backtrack_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_backtrack", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_backtrack");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray4_enable_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_enable", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_enable");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray4_gcr_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_gcr", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_gcr");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray4_modules_per_string_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_modules_per_string", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_modules_per_string");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_SystemDesign_subarray4_monthly_tilt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_monthly_tilt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_monthly_tilt");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray4_mppt_input_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_mppt_input", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_mppt_input");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray4_nstrings_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_nstrings", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_nstrings");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray4_rotlim_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_rotlim", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_rotlim");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray4_tilt_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_tilt", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_tilt");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray4_tilt_eq_lat_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_tilt_eq_lat", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_tilt_eq_lat");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_subarray4_track_mode_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_track_mode", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_track_mode");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SystemDesign_system_capacity_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_capacity", &result))
		make_access_error("SAM_Pvsamv1", "system_capacity");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Shading_subarray1_shade_mode_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_shade_mode", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_shade_mode");
	});
	return result;
}



SAM_EXPORT SAM_table SAM_Pvsamv1_Shading_subarray1_shading_tget(SAM_Pvsamv1 ptr, SAM_error *err){
	SAM_table result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_table(ptr, "subarray1_shading");
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_shading");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Shading_subarray2_shade_mode_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_shade_mode", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_shade_mode");
	});
	return result;
}



SAM_EXPORT SAM_table SAM_Pvsamv1_Shading_subarray2_shading_tget(SAM_Pvsamv1 ptr, SAM_error *err){
	SAM_table result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_table(ptr, "subarray2_shading");
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_shading");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Shading_subarray3_shade_mode_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_shade_mode", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_shade_mode");
	});
	return result;
}



SAM_EXPORT SAM_table SAM_Pvsamv1_Shading_subarray3_shading_tget(SAM_Pvsamv1 ptr, SAM_error *err){
	SAM_table result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_table(ptr, "subarray3_shading");
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_shading");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Shading_subarray4_shade_mode_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_shade_mode", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_shade_mode");
	});
	return result;
}



SAM_EXPORT SAM_table SAM_Pvsamv1_Shading_subarray4_shading_tget(SAM_Pvsamv1 ptr, SAM_error *err){
	SAM_table result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_table(ptr, "subarray4_shading");
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_shading");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Layout_module_aspect_ratio_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "module_aspect_ratio", &result))
		make_access_error("SAM_Pvsamv1", "module_aspect_ratio");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Layout_subarray1_mod_orient_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_mod_orient", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_mod_orient");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Layout_subarray1_nmodx_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_nmodx", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_nmodx");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Layout_subarray1_nmody_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_nmody", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_nmody");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Layout_subarray2_mod_orient_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_mod_orient", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_mod_orient");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Layout_subarray2_nmodx_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_nmodx", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_nmodx");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Layout_subarray2_nmody_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_nmody", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_nmody");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Layout_subarray3_mod_orient_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_mod_orient", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_mod_orient");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Layout_subarray3_nmodx_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_nmodx", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_nmodx");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Layout_subarray3_nmody_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_nmody", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_nmody");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Layout_subarray4_mod_orient_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_mod_orient", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_mod_orient");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Layout_subarray4_nmodx_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_nmodx", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_nmodx");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Layout_subarray4_nmody_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_nmody", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_nmody");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Module_module_model_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "module_model", &result))
		make_access_error("SAM_Pvsamv1", "module_model");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_a_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_a", &result))
		make_access_error("SAM_Pvsamv1", "spe_a");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_area_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_area", &result))
		make_access_error("SAM_Pvsamv1", "spe_area");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_b_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_b", &result))
		make_access_error("SAM_Pvsamv1", "spe_b");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_bifacial_ground_clearance_height_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_bifacial_ground_clearance_height", &result))
		make_access_error("SAM_Pvsamv1", "spe_bifacial_ground_clearance_height");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_bifacial_transmission_factor_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_bifacial_transmission_factor", &result))
		make_access_error("SAM_Pvsamv1", "spe_bifacial_transmission_factor");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_bifaciality_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_bifaciality", &result))
		make_access_error("SAM_Pvsamv1", "spe_bifaciality");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_dT_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_dT", &result))
		make_access_error("SAM_Pvsamv1", "spe_dT");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_eff0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_eff0", &result))
		make_access_error("SAM_Pvsamv1", "spe_eff0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_eff1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_eff1", &result))
		make_access_error("SAM_Pvsamv1", "spe_eff1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_eff2_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_eff2", &result))
		make_access_error("SAM_Pvsamv1", "spe_eff2");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_eff3_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_eff3", &result))
		make_access_error("SAM_Pvsamv1", "spe_eff3");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_eff4_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_eff4", &result))
		make_access_error("SAM_Pvsamv1", "spe_eff4");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_fd_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_fd", &result))
		make_access_error("SAM_Pvsamv1", "spe_fd");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_is_bifacial_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_is_bifacial", &result))
		make_access_error("SAM_Pvsamv1", "spe_is_bifacial");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_module_structure_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_module_structure", &result))
		make_access_error("SAM_Pvsamv1", "spe_module_structure");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_rad0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_rad0", &result))
		make_access_error("SAM_Pvsamv1", "spe_rad0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_rad1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_rad1", &result))
		make_access_error("SAM_Pvsamv1", "spe_rad1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_rad2_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_rad2", &result))
		make_access_error("SAM_Pvsamv1", "spe_rad2");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_rad3_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_rad3", &result))
		make_access_error("SAM_Pvsamv1", "spe_rad3");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_rad4_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_rad4", &result))
		make_access_error("SAM_Pvsamv1", "spe_rad4");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_reference_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_reference", &result))
		make_access_error("SAM_Pvsamv1", "spe_reference");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_temp_coeff_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_temp_coeff", &result))
		make_access_error("SAM_Pvsamv1", "spe_temp_coeff");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_vmp_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_vmp", &result))
		make_access_error("SAM_Pvsamv1", "spe_vmp");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SimpleEfficiencyModuleModel_spe_voc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "spe_voc", &result))
		make_access_error("SAM_Pvsamv1", "spe_voc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_a_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_a_ref", &result))
		make_access_error("SAM_Pvsamv1", "cec_a_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_adjust_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_adjust", &result))
		make_access_error("SAM_Pvsamv1", "cec_adjust");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_alpha_sc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_alpha_sc", &result))
		make_access_error("SAM_Pvsamv1", "cec_alpha_sc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_area_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_area", &result))
		make_access_error("SAM_Pvsamv1", "cec_area");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_array_cols_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_array_cols", &result))
		make_access_error("SAM_Pvsamv1", "cec_array_cols");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_array_rows_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_array_rows", &result))
		make_access_error("SAM_Pvsamv1", "cec_array_rows");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_backside_temp_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_backside_temp", &result))
		make_access_error("SAM_Pvsamv1", "cec_backside_temp");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_beta_oc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_beta_oc", &result))
		make_access_error("SAM_Pvsamv1", "cec_beta_oc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_bifacial_ground_clearance_height_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_bifacial_ground_clearance_height", &result))
		make_access_error("SAM_Pvsamv1", "cec_bifacial_ground_clearance_height");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_bifacial_transmission_factor_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_bifacial_transmission_factor", &result))
		make_access_error("SAM_Pvsamv1", "cec_bifacial_transmission_factor");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_bifaciality_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_bifaciality", &result))
		make_access_error("SAM_Pvsamv1", "cec_bifaciality");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_gamma_r_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_gamma_r", &result))
		make_access_error("SAM_Pvsamv1", "cec_gamma_r");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_gap_spacing_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_gap_spacing", &result))
		make_access_error("SAM_Pvsamv1", "cec_gap_spacing");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_heat_transfer_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_heat_transfer", &result))
		make_access_error("SAM_Pvsamv1", "cec_heat_transfer");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_height_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_height", &result))
		make_access_error("SAM_Pvsamv1", "cec_height");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_i_l_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_i_l_ref", &result))
		make_access_error("SAM_Pvsamv1", "cec_i_l_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_i_mp_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_i_mp_ref", &result))
		make_access_error("SAM_Pvsamv1", "cec_i_mp_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_i_o_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_i_o_ref", &result))
		make_access_error("SAM_Pvsamv1", "cec_i_o_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_i_sc_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_i_sc_ref", &result))
		make_access_error("SAM_Pvsamv1", "cec_i_sc_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_is_bifacial_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_is_bifacial", &result))
		make_access_error("SAM_Pvsamv1", "cec_is_bifacial");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_module_length_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_module_length", &result))
		make_access_error("SAM_Pvsamv1", "cec_module_length");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_module_width_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_module_width", &result))
		make_access_error("SAM_Pvsamv1", "cec_module_width");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_mounting_config_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_mounting_config", &result))
		make_access_error("SAM_Pvsamv1", "cec_mounting_config");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_mounting_orientation_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_mounting_orientation", &result))
		make_access_error("SAM_Pvsamv1", "cec_mounting_orientation");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_n_s_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_n_s", &result))
		make_access_error("SAM_Pvsamv1", "cec_n_s");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_r_s_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_r_s", &result))
		make_access_error("SAM_Pvsamv1", "cec_r_s");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_r_sh_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_r_sh_ref", &result))
		make_access_error("SAM_Pvsamv1", "cec_r_sh_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_standoff_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_standoff", &result))
		make_access_error("SAM_Pvsamv1", "cec_standoff");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_t_noct_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_t_noct", &result))
		make_access_error("SAM_Pvsamv1", "cec_t_noct");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_temp_corr_mode_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_temp_corr_mode", &result))
		make_access_error("SAM_Pvsamv1", "cec_temp_corr_mode");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_v_mp_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_v_mp_ref", &result))
		make_access_error("SAM_Pvsamv1", "cec_v_mp_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithModuleDatabase_cec_v_oc_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cec_v_oc_ref", &result))
		make_access_error("SAM_Pvsamv1", "cec_v_oc_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_aisc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_aisc", &result))
		make_access_error("SAM_Pvsamv1", "6par_aisc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_area_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_area", &result))
		make_access_error("SAM_Pvsamv1", "6par_area");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_bifacial_ground_clearance_height_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_bifacial_ground_clearance_height", &result))
		make_access_error("SAM_Pvsamv1", "6par_bifacial_ground_clearance_height");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_bifacial_transmission_factor_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_bifacial_transmission_factor", &result))
		make_access_error("SAM_Pvsamv1", "6par_bifacial_transmission_factor");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_bifaciality_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_bifaciality", &result))
		make_access_error("SAM_Pvsamv1", "6par_bifaciality");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_bvoc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_bvoc", &result))
		make_access_error("SAM_Pvsamv1", "6par_bvoc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_celltech_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_celltech", &result))
		make_access_error("SAM_Pvsamv1", "6par_celltech");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_gpmp_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_gpmp", &result))
		make_access_error("SAM_Pvsamv1", "6par_gpmp");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_imp_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_imp", &result))
		make_access_error("SAM_Pvsamv1", "6par_imp");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_is_bifacial_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_is_bifacial", &result))
		make_access_error("SAM_Pvsamv1", "6par_is_bifacial");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_isc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_isc", &result))
		make_access_error("SAM_Pvsamv1", "6par_isc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_mounting_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_mounting", &result))
		make_access_error("SAM_Pvsamv1", "6par_mounting");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_nser_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_nser", &result))
		make_access_error("SAM_Pvsamv1", "6par_nser");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_standoff_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_standoff", &result))
		make_access_error("SAM_Pvsamv1", "6par_standoff");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_tnoct_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_tnoct", &result))
		make_access_error("SAM_Pvsamv1", "6par_tnoct");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_vmp_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_vmp", &result))
		make_access_error("SAM_Pvsamv1", "6par_vmp");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_CECPerformanceModelWithUserEnteredSpecifications_6par_voc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_voc", &result))
		make_access_error("SAM_Pvsamv1", "6par_voc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_a_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_a", &result))
		make_access_error("SAM_Pvsamv1", "snl_a");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_a0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_a0", &result))
		make_access_error("SAM_Pvsamv1", "snl_a0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_a1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_a1", &result))
		make_access_error("SAM_Pvsamv1", "snl_a1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_a2_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_a2", &result))
		make_access_error("SAM_Pvsamv1", "snl_a2");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_a3_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_a3", &result))
		make_access_error("SAM_Pvsamv1", "snl_a3");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_a4_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_a4", &result))
		make_access_error("SAM_Pvsamv1", "snl_a4");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_aimp_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_aimp", &result))
		make_access_error("SAM_Pvsamv1", "snl_aimp");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_aisc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_aisc", &result))
		make_access_error("SAM_Pvsamv1", "snl_aisc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_area_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_area", &result))
		make_access_error("SAM_Pvsamv1", "snl_area");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_b", &result))
		make_access_error("SAM_Pvsamv1", "snl_b");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_b0", &result))
		make_access_error("SAM_Pvsamv1", "snl_b0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_b1", &result))
		make_access_error("SAM_Pvsamv1", "snl_b1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b2_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_b2", &result))
		make_access_error("SAM_Pvsamv1", "snl_b2");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b3_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_b3", &result))
		make_access_error("SAM_Pvsamv1", "snl_b3");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b4_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_b4", &result))
		make_access_error("SAM_Pvsamv1", "snl_b4");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_b5_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_b5", &result))
		make_access_error("SAM_Pvsamv1", "snl_b5");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_bvmpo_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_bvmpo", &result))
		make_access_error("SAM_Pvsamv1", "snl_bvmpo");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_bvoco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_bvoco", &result))
		make_access_error("SAM_Pvsamv1", "snl_bvoco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_c0", &result))
		make_access_error("SAM_Pvsamv1", "snl_c0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_c1", &result))
		make_access_error("SAM_Pvsamv1", "snl_c1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c2_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_c2", &result))
		make_access_error("SAM_Pvsamv1", "snl_c2");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c3_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_c3", &result))
		make_access_error("SAM_Pvsamv1", "snl_c3");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c4_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_c4", &result))
		make_access_error("SAM_Pvsamv1", "snl_c4");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c5_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_c5", &result))
		make_access_error("SAM_Pvsamv1", "snl_c5");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c6_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_c6", &result))
		make_access_error("SAM_Pvsamv1", "snl_c6");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_c7_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_c7", &result))
		make_access_error("SAM_Pvsamv1", "snl_c7");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_dtc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_dtc", &result))
		make_access_error("SAM_Pvsamv1", "snl_dtc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_fd_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_fd", &result))
		make_access_error("SAM_Pvsamv1", "snl_fd");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_impo_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_impo", &result))
		make_access_error("SAM_Pvsamv1", "snl_impo");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_isco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_isco", &result))
		make_access_error("SAM_Pvsamv1", "snl_isco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_ixo_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_ixo", &result))
		make_access_error("SAM_Pvsamv1", "snl_ixo");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_ixxo_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_ixxo", &result))
		make_access_error("SAM_Pvsamv1", "snl_ixxo");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_mbvmp_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_mbvmp", &result))
		make_access_error("SAM_Pvsamv1", "snl_mbvmp");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_mbvoc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_mbvoc", &result))
		make_access_error("SAM_Pvsamv1", "snl_mbvoc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_module_structure_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_module_structure", &result))
		make_access_error("SAM_Pvsamv1", "snl_module_structure");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_n_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_n", &result))
		make_access_error("SAM_Pvsamv1", "snl_n");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_ref_a_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_ref_a", &result))
		make_access_error("SAM_Pvsamv1", "snl_ref_a");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_ref_b_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_ref_b", &result))
		make_access_error("SAM_Pvsamv1", "snl_ref_b");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_ref_dT_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_ref_dT", &result))
		make_access_error("SAM_Pvsamv1", "snl_ref_dT");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_series_cells_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_series_cells", &result))
		make_access_error("SAM_Pvsamv1", "snl_series_cells");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_vmpo_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_vmpo", &result))
		make_access_error("SAM_Pvsamv1", "snl_vmpo");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_SandiaPVArrayPerformanceModelWithModuleDatabase_snl_voco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "snl_voco", &result))
		make_access_error("SAM_Pvsamv1", "snl_voco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_AMa0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_AMa0", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_AMa0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_AMa1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_AMa1", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_AMa1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_AMa2_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_AMa2", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_AMa2");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_AMa3_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_AMa3", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_AMa3");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_AMa4_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_AMa4", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_AMa4");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Egref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_Egref", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_Egref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Il_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_Il", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_Il");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Imp0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_Imp0", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_Imp0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Io_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_Io", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_Io");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Isc0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_Isc0", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_Isc0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Vmp0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_Vmp0", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_Vmp0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_Voc0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_Voc0", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_Voc0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_alphaIsc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_alphaIsc", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_alphaIsc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_area_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_area", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_area");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_c1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_c1", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_c1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_c2_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_c2", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_c2");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_c3_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_c3", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_c3");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_d1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_d1", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_d1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_d2_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_d2", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_d2");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_d3_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_d3", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_d3");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_glass_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_glass", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_glass");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_mounting_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_mounting", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_mounting");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_n_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_n", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_n");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_nser_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_nser", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_nser");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_standoff_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_standoff", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_standoff");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_IEC61853SingleDiodeModel_sd11par_tnoct_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sd11par_tnoct", &result))
		make_access_error("SAM_Pvsamv1", "sd11par_tnoct");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_lp0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_AM_c_lp0", &result))
		make_access_error("SAM_Pvsamv1", "mlm_AM_c_lp0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_lp1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_AM_c_lp1", &result))
		make_access_error("SAM_Pvsamv1", "mlm_AM_c_lp1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_lp2_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_AM_c_lp2", &result))
		make_access_error("SAM_Pvsamv1", "mlm_AM_c_lp2");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_lp3_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_AM_c_lp3", &result))
		make_access_error("SAM_Pvsamv1", "mlm_AM_c_lp3");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_lp4_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_AM_c_lp4", &result))
		make_access_error("SAM_Pvsamv1", "mlm_AM_c_lp4");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_lp5_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_AM_c_lp5", &result))
		make_access_error("SAM_Pvsamv1", "mlm_AM_c_lp5");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_sa0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_AM_c_sa0", &result))
		make_access_error("SAM_Pvsamv1", "mlm_AM_c_sa0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_sa1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_AM_c_sa1", &result))
		make_access_error("SAM_Pvsamv1", "mlm_AM_c_sa1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_sa2_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_AM_c_sa2", &result))
		make_access_error("SAM_Pvsamv1", "mlm_AM_c_sa2");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_sa3_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_AM_c_sa3", &result))
		make_access_error("SAM_Pvsamv1", "mlm_AM_c_sa3");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_c_sa4_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_AM_c_sa4", &result))
		make_access_error("SAM_Pvsamv1", "mlm_AM_c_sa4");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_AM_mode_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_AM_mode", &result))
		make_access_error("SAM_Pvsamv1", "mlm_AM_mode");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_D2MuTau_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_D2MuTau", &result))
		make_access_error("SAM_Pvsamv1", "mlm_D2MuTau");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_E_g_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_E_g", &result))
		make_access_error("SAM_Pvsamv1", "mlm_E_g");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_as_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_IAM_c_as", &result))
		make_access_error("SAM_Pvsamv1", "mlm_IAM_c_as");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_cs_iamValue_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "mlm_IAM_c_cs_iamValue", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "mlm_IAM_c_cs_iamValue");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_cs_incAngle_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "mlm_IAM_c_cs_incAngle", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "mlm_IAM_c_cs_incAngle");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_sa0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_IAM_c_sa0", &result))
		make_access_error("SAM_Pvsamv1", "mlm_IAM_c_sa0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_sa1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_IAM_c_sa1", &result))
		make_access_error("SAM_Pvsamv1", "mlm_IAM_c_sa1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_sa2_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_IAM_c_sa2", &result))
		make_access_error("SAM_Pvsamv1", "mlm_IAM_c_sa2");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_sa3_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_IAM_c_sa3", &result))
		make_access_error("SAM_Pvsamv1", "mlm_IAM_c_sa3");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_sa4_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_IAM_c_sa4", &result))
		make_access_error("SAM_Pvsamv1", "mlm_IAM_c_sa4");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_c_sa5_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_IAM_c_sa5", &result))
		make_access_error("SAM_Pvsamv1", "mlm_IAM_c_sa5");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_IAM_mode_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_IAM_mode", &result))
		make_access_error("SAM_Pvsamv1", "mlm_IAM_mode");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_I_mp_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_I_mp_ref", &result))
		make_access_error("SAM_Pvsamv1", "mlm_I_mp_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_I_sc_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_I_sc_ref", &result))
		make_access_error("SAM_Pvsamv1", "mlm_I_sc_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_Length_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_Length", &result))
		make_access_error("SAM_Pvsamv1", "mlm_Length");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_N_diodes_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_N_diodes", &result))
		make_access_error("SAM_Pvsamv1", "mlm_N_diodes");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_N_parallel_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_N_parallel", &result))
		make_access_error("SAM_Pvsamv1", "mlm_N_parallel");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_N_series_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_N_series", &result))
		make_access_error("SAM_Pvsamv1", "mlm_N_series");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_R_s_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_R_s", &result))
		make_access_error("SAM_Pvsamv1", "mlm_R_s");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_R_sh0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_R_sh0", &result))
		make_access_error("SAM_Pvsamv1", "mlm_R_sh0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_R_shexp_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_R_shexp", &result))
		make_access_error("SAM_Pvsamv1", "mlm_R_shexp");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_R_shref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_R_shref", &result))
		make_access_error("SAM_Pvsamv1", "mlm_R_shref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_S_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_S_ref", &result))
		make_access_error("SAM_Pvsamv1", "mlm_S_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_c_fa_U0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_T_c_fa_U0", &result))
		make_access_error("SAM_Pvsamv1", "mlm_T_c_fa_U0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_c_fa_U1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_T_c_fa_U1", &result))
		make_access_error("SAM_Pvsamv1", "mlm_T_c_fa_U1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_c_fa_alpha_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_T_c_fa_alpha", &result))
		make_access_error("SAM_Pvsamv1", "mlm_T_c_fa_alpha");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_c_no_mounting_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_T_c_no_mounting", &result))
		make_access_error("SAM_Pvsamv1", "mlm_T_c_no_mounting");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_c_no_standoff_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_T_c_no_standoff", &result))
		make_access_error("SAM_Pvsamv1", "mlm_T_c_no_standoff");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_c_no_tnoct_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_T_c_no_tnoct", &result))
		make_access_error("SAM_Pvsamv1", "mlm_T_c_no_tnoct");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_mode_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_T_mode", &result))
		make_access_error("SAM_Pvsamv1", "mlm_T_mode");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_T_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_T_ref", &result))
		make_access_error("SAM_Pvsamv1", "mlm_T_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_V_mp_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_V_mp_ref", &result))
		make_access_error("SAM_Pvsamv1", "mlm_V_mp_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_V_oc_ref_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_V_oc_ref", &result))
		make_access_error("SAM_Pvsamv1", "mlm_V_oc_ref");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_Width_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_Width", &result))
		make_access_error("SAM_Pvsamv1", "mlm_Width");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_alpha_isc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_alpha_isc", &result))
		make_access_error("SAM_Pvsamv1", "mlm_alpha_isc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_beta_voc_spec_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_beta_voc_spec", &result))
		make_access_error("SAM_Pvsamv1", "mlm_beta_voc_spec");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_groundRelfectionFraction_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_groundRelfectionFraction", &result))
		make_access_error("SAM_Pvsamv1", "mlm_groundRelfectionFraction");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_mu_n_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_mu_n", &result))
		make_access_error("SAM_Pvsamv1", "mlm_mu_n");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_MermoudLejeuneSingleDiodeModel_mlm_n_0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mlm_n_0", &result))
		make_access_error("SAM_Pvsamv1", "mlm_n_0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Inverter_inv_cec_cg_eff_cec_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_cec_cg_eff_cec", &result))
		make_access_error("SAM_Pvsamv1", "inv_cec_cg_eff_cec");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Inverter_inv_cec_cg_paco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_cec_cg_paco", &result))
		make_access_error("SAM_Pvsamv1", "inv_cec_cg_paco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Inverter_inv_ds_eff_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_ds_eff", &result))
		make_access_error("SAM_Pvsamv1", "inv_ds_eff");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Inverter_inv_ds_paco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_ds_paco", &result))
		make_access_error("SAM_Pvsamv1", "inv_ds_paco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Inverter_inv_num_mppt_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_num_mppt", &result))
		make_access_error("SAM_Pvsamv1", "inv_num_mppt");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Inverter_inv_pd_eff_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_pd_eff", &result))
		make_access_error("SAM_Pvsamv1", "inv_pd_eff");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Inverter_inv_pd_paco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_pd_paco", &result))
		make_access_error("SAM_Pvsamv1", "inv_pd_paco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Inverter_inv_snl_eff_cec_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_snl_eff_cec", &result))
		make_access_error("SAM_Pvsamv1", "inv_snl_eff_cec");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Inverter_inv_snl_paco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_snl_paco", &result))
		make_access_error("SAM_Pvsamv1", "inv_snl_paco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Inverter_inverter_count_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inverter_count", &result))
		make_access_error("SAM_Pvsamv1", "inverter_count");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Inverter_inverter_model_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inverter_model", &result))
		make_access_error("SAM_Pvsamv1", "inverter_model");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Inverter_mppt_hi_inverter_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mppt_hi_inverter", &result))
		make_access_error("SAM_Pvsamv1", "mppt_hi_inverter");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Inverter_mppt_low_inverter_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mppt_low_inverter", &result))
		make_access_error("SAM_Pvsamv1", "mppt_low_inverter");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECDatabase_inv_snl_c0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_snl_c0", &result))
		make_access_error("SAM_Pvsamv1", "inv_snl_c0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECDatabase_inv_snl_c1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_snl_c1", &result))
		make_access_error("SAM_Pvsamv1", "inv_snl_c1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECDatabase_inv_snl_c2_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_snl_c2", &result))
		make_access_error("SAM_Pvsamv1", "inv_snl_c2");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECDatabase_inv_snl_c3_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_snl_c3", &result))
		make_access_error("SAM_Pvsamv1", "inv_snl_c3");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECDatabase_inv_snl_paco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_snl_paco", &result))
		make_access_error("SAM_Pvsamv1", "inv_snl_paco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECDatabase_inv_snl_pdco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_snl_pdco", &result))
		make_access_error("SAM_Pvsamv1", "inv_snl_pdco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECDatabase_inv_snl_pnt_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_snl_pnt", &result))
		make_access_error("SAM_Pvsamv1", "inv_snl_pnt");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECDatabase_inv_snl_pso_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_snl_pso", &result))
		make_access_error("SAM_Pvsamv1", "inv_snl_pso");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECDatabase_inv_snl_vdcmax_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_snl_vdcmax", &result))
		make_access_error("SAM_Pvsamv1", "inv_snl_vdcmax");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECDatabase_inv_snl_vdco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_snl_vdco", &result))
		make_access_error("SAM_Pvsamv1", "inv_snl_vdco");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_InverterCECDatabase_inv_tdc_cec_db_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "inv_tdc_cec_db", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inv_tdc_cec_db");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_c0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_cec_cg_c0", &result))
		make_access_error("SAM_Pvsamv1", "inv_cec_cg_c0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_c1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_cec_cg_c1", &result))
		make_access_error("SAM_Pvsamv1", "inv_cec_cg_c1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_c2_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_cec_cg_c2", &result))
		make_access_error("SAM_Pvsamv1", "inv_cec_cg_c2");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_c3_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_cec_cg_c3", &result))
		make_access_error("SAM_Pvsamv1", "inv_cec_cg_c3");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_paco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_cec_cg_paco", &result))
		make_access_error("SAM_Pvsamv1", "inv_cec_cg_paco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_pdco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_cec_cg_pdco", &result))
		make_access_error("SAM_Pvsamv1", "inv_cec_cg_pdco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_pnt_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_cec_cg_pnt", &result))
		make_access_error("SAM_Pvsamv1", "inv_cec_cg_pnt");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_psco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_cec_cg_psco", &result))
		make_access_error("SAM_Pvsamv1", "inv_cec_cg_psco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_vdcmax_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_cec_cg_vdcmax", &result))
		make_access_error("SAM_Pvsamv1", "inv_cec_cg_vdcmax");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_cec_cg_vdco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_cec_cg_vdco", &result))
		make_access_error("SAM_Pvsamv1", "inv_cec_cg_vdco");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_InverterCECCoefficientGenerator_inv_tdc_cec_cg_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "inv_tdc_cec_cg", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inv_tdc_cec_cg");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterDatasheet_inv_ds_eff_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_ds_eff", &result))
		make_access_error("SAM_Pvsamv1", "inv_ds_eff");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterDatasheet_inv_ds_paco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_ds_paco", &result))
		make_access_error("SAM_Pvsamv1", "inv_ds_paco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterDatasheet_inv_ds_pnt_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_ds_pnt", &result))
		make_access_error("SAM_Pvsamv1", "inv_ds_pnt");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterDatasheet_inv_ds_pso_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_ds_pso", &result))
		make_access_error("SAM_Pvsamv1", "inv_ds_pso");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterDatasheet_inv_ds_vdcmax_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_ds_vdcmax", &result))
		make_access_error("SAM_Pvsamv1", "inv_ds_vdcmax");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterDatasheet_inv_ds_vdco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_ds_vdco", &result))
		make_access_error("SAM_Pvsamv1", "inv_ds_vdco");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_InverterDatasheet_inv_tdc_ds_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "inv_tdc_ds", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inv_tdc_ds");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_efficiency_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "inv_pd_efficiency", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inv_pd_efficiency");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_paco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_pd_paco", &result))
		make_access_error("SAM_Pvsamv1", "inv_pd_paco");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_partload_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "inv_pd_partload", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inv_pd_partload");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_pdco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_pd_pdco", &result))
		make_access_error("SAM_Pvsamv1", "inv_pd_pdco");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_pnt_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_pd_pnt", &result))
		make_access_error("SAM_Pvsamv1", "inv_pd_pnt");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_vdcmax_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_pd_vdcmax", &result))
		make_access_error("SAM_Pvsamv1", "inv_pd_vdcmax");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterPartLoadCurve_inv_pd_vdco_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_pd_vdco", &result))
		make_access_error("SAM_Pvsamv1", "inv_pd_vdco");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_InverterPartLoadCurve_inv_tdc_plc_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "inv_tdc_plc", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inv_tdc_plc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_Aux_Loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_Aux_Loss", &result))
		make_access_error("SAM_Pvsamv1", "ond_Aux_Loss");
	});
	return result;
}



SAM_EXPORT const char* SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_CompPMax_sget(SAM_Pvsamv1 ptr, SAM_error *err){
	const char* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_string(ptr, "ond_CompPMax");
	if (!result)
		make_access_error("SAM_Pvsamv1", "ond_CompPMax");
	});
	return result;
}



SAM_EXPORT const char* SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_CompVMax_sget(SAM_Pvsamv1 ptr, SAM_error *err){
	const char* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_string(ptr, "ond_CompVMax");
	if (!result)
		make_access_error("SAM_Pvsamv1", "ond_CompVMax");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_IMaxAC_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_IMaxAC", &result))
		make_access_error("SAM_Pvsamv1", "ond_IMaxAC");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_IMaxDC_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_IMaxDC", &result))
		make_access_error("SAM_Pvsamv1", "ond_IMaxDC");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_INomAC_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_INomAC", &result))
		make_access_error("SAM_Pvsamv1", "ond_INomAC");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_INomDC_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_INomDC", &result))
		make_access_error("SAM_Pvsamv1", "ond_INomDC");
	});
	return result;
}



SAM_EXPORT const char* SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_ModeAffEnum_sget(SAM_Pvsamv1 ptr, SAM_error *err){
	const char* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_string(ptr, "ond_ModeAffEnum");
	if (!result)
		make_access_error("SAM_Pvsamv1", "ond_ModeAffEnum");
	});
	return result;
}



SAM_EXPORT const char* SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_ModeOper_sget(SAM_Pvsamv1 ptr, SAM_error *err){
	const char* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_string(ptr, "ond_ModeOper");
	if (!result)
		make_access_error("SAM_Pvsamv1", "ond_ModeOper");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_NbInputs_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_NbInputs", &result))
		make_access_error("SAM_Pvsamv1", "ond_NbInputs");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_NbMPPT_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_NbMPPT", &result))
		make_access_error("SAM_Pvsamv1", "ond_NbMPPT");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_Night_Loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_Night_Loss", &result))
		make_access_error("SAM_Pvsamv1", "ond_Night_Loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PLim1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_PLim1", &result))
		make_access_error("SAM_Pvsamv1", "ond_PLim1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PLimAbs_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_PLimAbs", &result))
		make_access_error("SAM_Pvsamv1", "ond_PLimAbs");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PMaxDC_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_PMaxDC", &result))
		make_access_error("SAM_Pvsamv1", "ond_PMaxDC");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PMaxOUT_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_PMaxOUT", &result))
		make_access_error("SAM_Pvsamv1", "ond_PMaxOUT");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PNomConv_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_PNomConv", &result))
		make_access_error("SAM_Pvsamv1", "ond_PNomConv");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PNomDC_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_PNomDC", &result))
		make_access_error("SAM_Pvsamv1", "ond_PNomDC");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_PSeuil_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_PSeuil", &result))
		make_access_error("SAM_Pvsamv1", "ond_PSeuil");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_TPLim1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_TPLim1", &result))
		make_access_error("SAM_Pvsamv1", "ond_TPLim1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_TPLimAbs_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_TPLimAbs", &result))
		make_access_error("SAM_Pvsamv1", "ond_TPLimAbs");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_TPMax_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_TPMax", &result))
		make_access_error("SAM_Pvsamv1", "ond_TPMax");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_TPNom_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_TPNom", &result))
		make_access_error("SAM_Pvsamv1", "ond_TPNom");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_VAbsMax_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_VAbsMax", &result))
		make_access_error("SAM_Pvsamv1", "ond_VAbsMax");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_VMPPMax_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_VMPPMax", &result))
		make_access_error("SAM_Pvsamv1", "ond_VMPPMax");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_VMppMin_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_VMppMin", &result))
		make_access_error("SAM_Pvsamv1", "ond_VMppMin");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_VNomEff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "ond_VNomEff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "ond_VNomEff");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_VOutConv_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_VOutConv", &result))
		make_access_error("SAM_Pvsamv1", "ond_VOutConv");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_doAllowOverpower_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_doAllowOverpower", &result))
		make_access_error("SAM_Pvsamv1", "ond_doAllowOverpower");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_doUseTemperatureLimit_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_doUseTemperatureLimit", &result))
		make_access_error("SAM_Pvsamv1", "ond_doUseTemperatureLimit");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_effCurve_Pac_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "ond_effCurve_Pac", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "ond_effCurve_Pac");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_effCurve_Pdc_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "ond_effCurve_Pdc", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "ond_effCurve_Pdc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_effCurve_elements_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_effCurve_elements", &result))
		make_access_error("SAM_Pvsamv1", "ond_effCurve_elements");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_effCurve_eta_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "ond_effCurve_eta", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "ond_effCurve_eta");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_lossRAc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_lossRAc", &result))
		make_access_error("SAM_Pvsamv1", "ond_lossRAc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_InverterMermoudLejeuneModel_ond_lossRDc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ond_lossRDc", &result))
		make_access_error("SAM_Pvsamv1", "ond_lossRDc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_LeadAcid_q10_computed_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "LeadAcid_q10_computed", &result))
		make_access_error("SAM_Pvsamv1", "LeadAcid_q10_computed");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_LeadAcid_q20_computed_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "LeadAcid_q20_computed", &result))
		make_access_error("SAM_Pvsamv1", "LeadAcid_q20_computed");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_LeadAcid_qn_computed_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "LeadAcid_qn_computed", &result))
		make_access_error("SAM_Pvsamv1", "LeadAcid_qn_computed");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_LeadAcid_tn_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "LeadAcid_tn", &result))
		make_access_error("SAM_Pvsamv1", "LeadAcid_tn");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_C_rate_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_C_rate", &result))
		make_access_error("SAM_Pvsamv1", "batt_C_rate");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_Cp_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_Cp", &result))
		make_access_error("SAM_Pvsamv1", "batt_Cp");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_Qexp_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_Qexp", &result))
		make_access_error("SAM_Pvsamv1", "batt_Qexp");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_Qfull_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_Qfull", &result))
		make_access_error("SAM_Pvsamv1", "batt_Qfull");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_Qfull_flow_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_Qfull_flow", &result))
		make_access_error("SAM_Pvsamv1", "batt_Qfull_flow");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_Qnom_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_Qnom", &result))
		make_access_error("SAM_Pvsamv1", "batt_Qnom");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_Vexp_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_Vexp", &result))
		make_access_error("SAM_Pvsamv1", "batt_Vexp");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_Vfull_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_Vfull", &result))
		make_access_error("SAM_Pvsamv1", "batt_Vfull");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_Vnom_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_Vnom", &result))
		make_access_error("SAM_Pvsamv1", "batt_Vnom");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_Vnom_default_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_Vnom_default", &result))
		make_access_error("SAM_Pvsamv1", "batt_Vnom_default");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_ac_dc_efficiency_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_ac_dc_efficiency", &result))
		make_access_error("SAM_Pvsamv1", "batt_ac_dc_efficiency");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_ac_or_dc_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_ac_or_dc", &result))
		make_access_error("SAM_Pvsamv1", "batt_ac_or_dc");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_auto_gridcharge_max_daily_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_auto_gridcharge_max_daily", &result))
		make_access_error("SAM_Pvsamv1", "batt_auto_gridcharge_max_daily");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_calendar_a_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_calendar_a", &result))
		make_access_error("SAM_Pvsamv1", "batt_calendar_a");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_calendar_b_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_calendar_b", &result))
		make_access_error("SAM_Pvsamv1", "batt_calendar_b");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_calendar_c_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_calendar_c", &result))
		make_access_error("SAM_Pvsamv1", "batt_calendar_c");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_calendar_choice_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_calendar_choice", &result))
		make_access_error("SAM_Pvsamv1", "batt_calendar_choice");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_calendar_lifetime_matrix_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "batt_calendar_lifetime_matrix", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_calendar_lifetime_matrix");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_calendar_q0_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_calendar_q0", &result))
		make_access_error("SAM_Pvsamv1", "batt_calendar_q0");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_chem_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_chem", &result))
		make_access_error("SAM_Pvsamv1", "batt_chem");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_computed_bank_capacity_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_computed_bank_capacity", &result))
		make_access_error("SAM_Pvsamv1", "batt_computed_bank_capacity");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_computed_series_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_computed_series", &result))
		make_access_error("SAM_Pvsamv1", "batt_computed_series");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_computed_strings_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_computed_strings", &result))
		make_access_error("SAM_Pvsamv1", "batt_computed_strings");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_current_charge_max_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_current_charge_max", &result))
		make_access_error("SAM_Pvsamv1", "batt_current_charge_max");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_current_choice_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_current_choice", &result))
		make_access_error("SAM_Pvsamv1", "batt_current_choice");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_current_discharge_max_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_current_discharge_max", &result))
		make_access_error("SAM_Pvsamv1", "batt_current_discharge_max");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_custom_dispatch_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_custom_dispatch", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_custom_dispatch");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_cycle_cost_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_cycle_cost", &result))
		make_access_error("SAM_Pvsamv1", "batt_cycle_cost");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_cycle_cost_choice_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_cycle_cost_choice", &result))
		make_access_error("SAM_Pvsamv1", "batt_cycle_cost_choice");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_dc_ac_efficiency_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_dc_ac_efficiency", &result))
		make_access_error("SAM_Pvsamv1", "batt_dc_ac_efficiency");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_dc_dc_efficiency_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_dc_dc_efficiency", &result))
		make_access_error("SAM_Pvsamv1", "batt_dc_dc_efficiency");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_dispatch_auto_can_charge_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_dispatch_auto_can_charge", &result))
		make_access_error("SAM_Pvsamv1", "batt_dispatch_auto_can_charge");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_dispatch_auto_can_clipcharge_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_dispatch_auto_can_clipcharge", &result))
		make_access_error("SAM_Pvsamv1", "batt_dispatch_auto_can_clipcharge");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_dispatch_auto_can_fuelcellcharge_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_dispatch_auto_can_fuelcellcharge", &result))
		make_access_error("SAM_Pvsamv1", "batt_dispatch_auto_can_fuelcellcharge");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_dispatch_auto_can_gridcharge_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_dispatch_auto_can_gridcharge", &result))
		make_access_error("SAM_Pvsamv1", "batt_dispatch_auto_can_gridcharge");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_dispatch_choice_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_dispatch_choice", &result))
		make_access_error("SAM_Pvsamv1", "batt_dispatch_choice");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_dispatch_update_frequency_hours_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_dispatch_update_frequency_hours", &result))
		make_access_error("SAM_Pvsamv1", "batt_dispatch_update_frequency_hours");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_h_to_ambient_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_h_to_ambient", &result))
		make_access_error("SAM_Pvsamv1", "batt_h_to_ambient");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_height_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_height", &result))
		make_access_error("SAM_Pvsamv1", "batt_height");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_initial_SOC_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_initial_SOC", &result))
		make_access_error("SAM_Pvsamv1", "batt_initial_SOC");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_length_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_length", &result))
		make_access_error("SAM_Pvsamv1", "batt_length");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_lifetime_matrix_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "batt_lifetime_matrix", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_lifetime_matrix");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_look_ahead_hours_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_look_ahead_hours", &result))
		make_access_error("SAM_Pvsamv1", "batt_look_ahead_hours");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_loss_choice_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_loss_choice", &result))
		make_access_error("SAM_Pvsamv1", "batt_loss_choice");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_losses_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_losses", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_losses");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_losses_charging_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_losses_charging", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_losses_charging");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_losses_discharging_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_losses_discharging", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_losses_discharging");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_losses_idle_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_losses_idle", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_losses_idle");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_mass_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_mass", &result))
		make_access_error("SAM_Pvsamv1", "batt_mass");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_maximum_SOC_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_maximum_SOC", &result))
		make_access_error("SAM_Pvsamv1", "batt_maximum_SOC");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_meter_position_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_meter_position", &result))
		make_access_error("SAM_Pvsamv1", "batt_meter_position");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_minimum_SOC_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_minimum_SOC", &result))
		make_access_error("SAM_Pvsamv1", "batt_minimum_SOC");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_minimum_modetime_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_minimum_modetime", &result))
		make_access_error("SAM_Pvsamv1", "batt_minimum_modetime");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_power_charge_max_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_power_charge_max", &result))
		make_access_error("SAM_Pvsamv1", "batt_power_charge_max");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_power_discharge_max_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_power_discharge_max", &result))
		make_access_error("SAM_Pvsamv1", "batt_power_discharge_max");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_pv_clipping_forecast_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_pv_clipping_forecast", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_pv_clipping_forecast");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_pv_dc_forecast_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_pv_dc_forecast", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_pv_dc_forecast");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_replacement_capacity_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_replacement_capacity", &result))
		make_access_error("SAM_Pvsamv1", "batt_replacement_capacity");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_replacement_option_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_replacement_option", &result))
		make_access_error("SAM_Pvsamv1", "batt_replacement_option");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_replacement_schedule_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_replacement_schedule", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_replacement_schedule");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_resistance_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_resistance", &result))
		make_access_error("SAM_Pvsamv1", "batt_resistance");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_room_temperature_celsius_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_room_temperature_celsius", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_room_temperature_celsius");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_target_choice_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_target_choice", &result))
		make_access_error("SAM_Pvsamv1", "batt_target_choice");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_target_power_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_target_power", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_target_power");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_target_power_monthly_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_target_power_monthly", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_target_power_monthly");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_voltage_choice_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_voltage_choice", &result))
		make_access_error("SAM_Pvsamv1", "batt_voltage_choice");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_batt_voltage_matrix_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "batt_voltage_matrix", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_voltage_matrix");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_batt_width_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_width", &result))
		make_access_error("SAM_Pvsamv1", "batt_width");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_cap_vs_temp_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "cap_vs_temp", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "cap_vs_temp");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_dispatch_manual_charge_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dispatch_manual_charge", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dispatch_manual_charge");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_dispatch_manual_discharge_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dispatch_manual_discharge", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dispatch_manual_discharge");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_dispatch_manual_gridcharge_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dispatch_manual_gridcharge", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dispatch_manual_gridcharge");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_dispatch_manual_percent_discharge_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dispatch_manual_percent_discharge", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dispatch_manual_percent_discharge");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_dispatch_manual_percent_gridcharge_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dispatch_manual_percent_gridcharge", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dispatch_manual_percent_gridcharge");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_dispatch_manual_sched_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "dispatch_manual_sched", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dispatch_manual_sched");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_dispatch_manual_sched_weekend_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "dispatch_manual_sched_weekend", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dispatch_manual_sched_weekend");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Battery_en_batt_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "en_batt", &result))
		make_access_error("SAM_Pvsamv1", "en_batt");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_load_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "load", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "load");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Battery_om_replacement_cost1_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_replacement_cost1", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "om_replacement_cost1");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Simulation_analysis_period_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "analysis_period", &result))
		make_access_error("SAM_Pvsamv1", "analysis_period");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Simulation_system_use_lifetime_output_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_use_lifetime_output", &result))
		make_access_error("SAM_Pvsamv1", "system_use_lifetime_output");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Common_inverter_model_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inverter_model", &result))
		make_access_error("SAM_Pvsamv1", "inverter_model");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_PV_dcoptimizer_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dcoptimizer_loss", &result))
		make_access_error("SAM_Pvsamv1", "dcoptimizer_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_FuelCell_dispatch_manual_fuelcellcharge_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dispatch_manual_fuelcellcharge", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dispatch_manual_fuelcellcharge");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_FuelCell_fuelcell_power_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "fuelcell_power", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "fuelcell_power");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_ElectricityRate_en_electricity_rates_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "en_electricity_rates", &result))
		make_access_error("SAM_Pvsamv1", "en_electricity_rates");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_ElectricityRate_ur_ec_sched_weekday_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "ur_ec_sched_weekday", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "ur_ec_sched_weekday");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_ElectricityRate_ur_ec_sched_weekend_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "ur_ec_sched_weekend", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "ur_ec_sched_weekend");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_ElectricityRate_ur_ec_tou_mat_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "ur_ec_tou_mat", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "ur_ec_tou_mat");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_EnergyMarket_dispatch_sched_weekday_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "dispatch_sched_weekday", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dispatch_sched_weekday");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_EnergyMarket_dispatch_sched_weekend_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "dispatch_sched_weekend", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dispatch_sched_weekend");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_EnergyMarket_dispatch_tod_factors_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dispatch_tod_factors", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dispatch_tod_factors");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_EnergyMarket_ppa_price_input_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ppa_price_input", &result))
		make_access_error("SAM_Pvsamv1", "ppa_price_input");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_6par_Adj_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_Adj", &result))
		make_access_error("SAM_Pvsamv1", "6par_Adj");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_6par_Il_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_Il", &result))
		make_access_error("SAM_Pvsamv1", "6par_Il");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_6par_Io_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_Io", &result))
		make_access_error("SAM_Pvsamv1", "6par_Io");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_6par_Rs_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_Rs", &result))
		make_access_error("SAM_Pvsamv1", "6par_Rs");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_6par_Rsh_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_Rsh", &result))
		make_access_error("SAM_Pvsamv1", "6par_Rsh");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_6par_a_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "6par_a", &result))
		make_access_error("SAM_Pvsamv1", "6par_a");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_ac_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ac_loss", &result))
		make_access_error("SAM_Pvsamv1", "ac_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_ac_transmission_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "ac_transmission_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "ac_transmission_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_ac_wiring_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "ac_wiring_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "ac_wiring_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_airmass_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "airmass", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "airmass");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_alb_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "alb", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "alb");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_ac_battery_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_battery_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_ac_battery_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_ac_gross_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_gross", &result))
		make_access_error("SAM_Pvsamv1", "annual_ac_gross");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_ac_inv_clip_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_inv_clip_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_ac_inv_clip_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_ac_inv_eff_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_inv_eff_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_ac_inv_eff_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_ac_inv_pnt_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_inv_pnt_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_ac_inv_pnt_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_ac_inv_pso_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_inv_pso_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_ac_inv_pso_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_ac_inv_tdc_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_inv_tdc_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_ac_inv_tdc_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_ac_lifetime_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_lifetime_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_ac_lifetime_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_ac_loss_ond_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_loss_ond", &result))
		make_access_error("SAM_Pvsamv1", "annual_ac_loss_ond");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_ac_perf_adj_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_perf_adj_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_ac_perf_adj_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_ac_wiring_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_wiring_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_ac_wiring_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_ac_wiring_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_wiring_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_ac_wiring_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_battery_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_battery_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_battery_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_diodes_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_diodes_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_diodes_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_diodes_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_diodes_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_diodes_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_gross_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_gross", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_gross");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_invmppt_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_invmppt_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_invmppt_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_lifetime_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_lifetime_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_lifetime_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_loss_ond_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_loss_ond", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_loss_ond");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_mismatch_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_mismatch_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_mismatch_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_mismatch_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_mismatch_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_mismatch_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_module_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_module_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_module_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_mppt_clip_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_mppt_clip_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_mppt_clip_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_nameplate_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_nameplate_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_nameplate_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_nameplate_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_nameplate_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_nameplate_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_net_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_net", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_net");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_nominal_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_nominal", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_nominal");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_optimizer_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_optimizer_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_optimizer_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_optimizer_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_optimizer_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_optimizer_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_perf_adj_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_perf_adj_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_perf_adj_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_snow_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_snow_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_snow_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_tracking_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_tracking_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_tracking_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_tracking_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_tracking_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_tracking_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_wiring_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_wiring_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_wiring_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_dc_wiring_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_dc_wiring_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_dc_wiring_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_energy_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_energy", &result))
		make_access_error("SAM_Pvsamv1", "annual_energy");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_annual_export_to_grid_energy_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "annual_export_to_grid_energy", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "annual_export_to_grid_energy");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_gh_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_gh", &result))
		make_access_error("SAM_Pvsamv1", "annual_gh");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_annual_import_to_grid_energy_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "annual_import_to_grid_energy", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "annual_import_to_grid_energy");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_inv_cliploss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_inv_cliploss", &result))
		make_access_error("SAM_Pvsamv1", "annual_inv_cliploss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_inv_pntloss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_inv_pntloss", &result))
		make_access_error("SAM_Pvsamv1", "annual_inv_pntloss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_inv_psoloss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_inv_psoloss", &result))
		make_access_error("SAM_Pvsamv1", "annual_inv_psoloss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_inv_tdcloss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_inv_tdcloss", &result))
		make_access_error("SAM_Pvsamv1", "annual_inv_tdcloss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_poa_beam_eff_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_poa_beam_eff", &result))
		make_access_error("SAM_Pvsamv1", "annual_poa_beam_eff");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_poa_beam_nom_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_poa_beam_nom", &result))
		make_access_error("SAM_Pvsamv1", "annual_poa_beam_nom");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_poa_cover_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_poa_cover_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_poa_cover_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_poa_eff_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_poa_eff", &result))
		make_access_error("SAM_Pvsamv1", "annual_poa_eff");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_poa_front_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_poa_front", &result))
		make_access_error("SAM_Pvsamv1", "annual_poa_front");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_poa_nom_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_poa_nom", &result))
		make_access_error("SAM_Pvsamv1", "annual_poa_nom");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_poa_rear_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_poa_rear", &result))
		make_access_error("SAM_Pvsamv1", "annual_poa_rear");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_poa_rear_gain_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_poa_rear_gain_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_poa_rear_gain_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_poa_shaded_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_poa_shaded", &result))
		make_access_error("SAM_Pvsamv1", "annual_poa_shaded");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_poa_shaded_soiled_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_poa_shaded_soiled", &result))
		make_access_error("SAM_Pvsamv1", "annual_poa_shaded_soiled");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_poa_shading_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_poa_shading_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_poa_shading_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_poa_soiling_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_poa_soiling_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_poa_soiling_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_snow_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_snow_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_snow_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray1_dc_diodes_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray1_dc_diodes_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray1_dc_diodes_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray1_dc_gross_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray1_dc_gross", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray1_dc_gross");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray1_dc_mismatch_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray1_dc_mismatch_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray1_dc_mismatch_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray1_dc_nameplate_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray1_dc_nameplate_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray1_dc_nameplate_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray1_dc_tracking_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray1_dc_tracking_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray1_dc_tracking_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray1_dc_wiring_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray1_dc_wiring_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray1_dc_wiring_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray2_dc_diodes_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray2_dc_diodes_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray2_dc_diodes_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray2_dc_gross_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray2_dc_gross", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray2_dc_gross");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray2_dc_mismatch_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray2_dc_mismatch_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray2_dc_mismatch_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray2_dc_nameplate_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray2_dc_nameplate_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray2_dc_nameplate_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray2_dc_tracking_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray2_dc_tracking_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray2_dc_tracking_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray2_dc_wiring_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray2_dc_wiring_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray2_dc_wiring_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray3_dc_diodes_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray3_dc_diodes_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray3_dc_diodes_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray3_dc_gross_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray3_dc_gross", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray3_dc_gross");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray3_dc_mismatch_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray3_dc_mismatch_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray3_dc_mismatch_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray3_dc_nameplate_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray3_dc_nameplate_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray3_dc_nameplate_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray3_dc_tracking_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray3_dc_tracking_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray3_dc_tracking_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray3_dc_wiring_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray3_dc_wiring_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray3_dc_wiring_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray4_dc_diodes_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray4_dc_diodes_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray4_dc_diodes_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray4_dc_gross_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray4_dc_gross", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray4_dc_gross");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray4_dc_mismatch_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray4_dc_mismatch_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray4_dc_mismatch_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray4_dc_nameplate_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray4_dc_nameplate_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray4_dc_nameplate_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray4_dc_tracking_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray4_dc_tracking_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray4_dc_tracking_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_subarray4_dc_wiring_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_subarray4_dc_wiring_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_subarray4_dc_wiring_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_transmission_loss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_transmission_loss", &result))
		make_access_error("SAM_Pvsamv1", "annual_transmission_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_transmission_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_transmission_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_transmission_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_annual_xfmr_loss_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_xfmr_loss_percent", &result))
		make_access_error("SAM_Pvsamv1", "annual_xfmr_loss_percent");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_average_battery_conversion_efficiency_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "average_battery_conversion_efficiency", &result))
		make_access_error("SAM_Pvsamv1", "average_battery_conversion_efficiency");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_average_battery_roundtrip_efficiency_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "average_battery_roundtrip_efficiency", &result))
		make_access_error("SAM_Pvsamv1", "average_battery_roundtrip_efficiency");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_DOD_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_DOD", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_DOD");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_I_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_I", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_I");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_SOC_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_SOC", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_SOC");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_annual_charge_energy_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_annual_charge_energy", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_annual_charge_energy");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_annual_charge_from_grid_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_annual_charge_from_grid", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_annual_charge_from_grid");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_annual_charge_from_pv_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_annual_charge_from_pv", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_annual_charge_from_pv");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_annual_discharge_energy_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_annual_discharge_energy", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_annual_discharge_energy");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_annual_energy_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_annual_energy_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_annual_energy_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_annual_energy_system_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_annual_energy_system_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_annual_energy_system_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_batt_bank_installed_capacity_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_bank_installed_capacity", &result))
		make_access_error("SAM_Pvsamv1", "batt_bank_installed_capacity");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_bank_replacement_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_bank_replacement", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_bank_replacement");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_capacity_percent_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_capacity_percent", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_capacity_percent");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_capacity_thermal_percent_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_capacity_thermal_percent", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_capacity_thermal_percent");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_conversion_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_conversion_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_conversion_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_cost_to_cycle_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_cost_to_cycle", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_cost_to_cycle");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_cycles_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_cycles", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_cycles");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_dispatch_sched_mget(SAM_Pvsamv1 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "batt_dispatch_sched", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_dispatch_sched");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_power_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_power", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_power");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_power_target_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_power_target", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_power_target");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_batt_pv_charge_percent_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_pv_charge_percent", &result))
		make_access_error("SAM_Pvsamv1", "batt_pv_charge_percent");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_q0_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_q0", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_q0");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_q1_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_q1", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_q1");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_q2_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_q2", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_q2");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_qmax_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_qmax", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_qmax");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_qmaxI_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_qmaxI", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_qmaxI");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_qmax_thermal_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_qmax_thermal", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_qmax_thermal");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_system_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_system_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_system_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_temperature_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_temperature", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_temperature");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_to_grid_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_to_grid", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_to_grid");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_to_load_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_to_load", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_to_load");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_voltage_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_voltage", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_voltage");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_batt_voltage_cell_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_voltage_cell", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "batt_voltage_cell");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_capacity_factor_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "capacity_factor", &result))
		make_access_error("SAM_Pvsamv1", "capacity_factor");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_capacity_factor_ac_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "capacity_factor_ac", &result))
		make_access_error("SAM_Pvsamv1", "capacity_factor_ac");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_dc_degrade_factor_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dc_degrade_factor", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dc_degrade_factor");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_dc_invmppt_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dc_invmppt_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dc_invmppt_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_dc_net_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dc_net", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dc_net");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_dc_snow_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dc_snow_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dc_snow_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_df_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "df", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "df");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_df_calc_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "df_calc", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "df_calc");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_dn_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dn", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dn");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_dn_calc_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dn_calc", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "dn_calc");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_fuelcell_to_batt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "fuelcell_to_batt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "fuelcell_to_batt");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_gen_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "gen", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "gen");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_gh_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "gh", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "gh");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_gh_calc_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "gh_calc", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "gh_calc");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_grid_power_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "grid_power", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "grid_power");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_grid_power_target_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "grid_power_target", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "grid_power_target");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_grid_to_batt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "grid_to_batt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "grid_to_batt");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_grid_to_load_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "grid_to_load", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "grid_to_load");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_inv_cliploss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "inv_cliploss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inv_cliploss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_inv_eff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "inv_eff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inv_eff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_inv_pntloss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "inv_pntloss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inv_pntloss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_inv_psoloss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "inv_psoloss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inv_psoloss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_inv_tdcloss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "inv_tdcloss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inv_tdcloss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_inv_total_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "inv_total_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inv_total_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_inverterMPPT1_DCVoltage_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "inverterMPPT1_DCVoltage", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inverterMPPT1_DCVoltage");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_inverterMPPT2_DCVoltage_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "inverterMPPT2_DCVoltage", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inverterMPPT2_DCVoltage");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_inverterMPPT3_DCVoltage_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "inverterMPPT3_DCVoltage", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inverterMPPT3_DCVoltage");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_inverterMPPT4_DCVoltage_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "inverterMPPT4_DCVoltage", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "inverterMPPT4_DCVoltage");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_kwh_per_kw_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "kwh_per_kw", &result))
		make_access_error("SAM_Pvsamv1", "kwh_per_kw");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_batt_to_grid_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_batt_to_grid", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_batt_to_grid");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_batt_to_load_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_batt_to_load", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_batt_to_load");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_dc_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_dc", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_dc");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_energy_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_energy", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_energy");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_grid_to_batt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_grid_to_batt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_grid_to_batt");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_grid_to_load_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_grid_to_load", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_grid_to_load");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_poa_beam_eff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_poa_beam_eff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_poa_beam_eff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_poa_beam_nom_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_poa_beam_nom", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_poa_beam_nom");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_poa_eff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_poa_eff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_poa_eff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_poa_front_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_poa_front", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_poa_front");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_poa_nom_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_poa_nom", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_poa_nom");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_poa_rear_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_poa_rear", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_poa_rear");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_pv_to_batt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_pv_to_batt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_pv_to_batt");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_pv_to_grid_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_pv_to_grid", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_pv_to_grid");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_pv_to_load_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_pv_to_load", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_pv_to_load");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_monthly_snow_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_snow_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "monthly_snow_loss");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_nameplate_dc_rating_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "nameplate_dc_rating", &result))
		make_access_error("SAM_Pvsamv1", "nameplate_dc_rating");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_performance_ratio_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "performance_ratio", &result))
		make_access_error("SAM_Pvsamv1", "performance_ratio");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_poa_beam_eff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "poa_beam_eff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "poa_beam_eff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_poa_beam_nom_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "poa_beam_nom", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "poa_beam_nom");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_poa_eff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "poa_eff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "poa_eff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_poa_front_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "poa_front", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "poa_front");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_poa_nom_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "poa_nom", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "poa_nom");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_poa_rear_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "poa_rear", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "poa_rear");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_poa_shaded_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "poa_shaded", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "poa_shaded");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_poa_shaded_soiled_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "poa_shaded_soiled", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "poa_shaded_soiled");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_pv_to_batt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "pv_to_batt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "pv_to_batt");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_pv_to_grid_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "pv_to_grid", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "pv_to_grid");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_pv_to_load_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "pv_to_load", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "pv_to_load");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_shadedb_subarray1_shade_frac_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "shadedb_subarray1_shade_frac", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "shadedb_subarray1_shade_frac");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_shadedb_subarray2_shade_frac_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "shadedb_subarray2_shade_frac", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "shadedb_subarray2_shade_frac");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_shadedb_subarray3_shade_frac_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "shadedb_subarray3_shade_frac", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "shadedb_subarray3_shade_frac");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_shadedb_subarray4_shade_frac_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "shadedb_subarray4_shade_frac", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "shadedb_subarray4_shade_frac");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_snowdepth_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "snowdepth", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "snowdepth");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_sol_alt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "sol_alt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "sol_alt");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_sol_azi_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "sol_azi", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "sol_azi");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_sol_zen_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "sol_zen", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "sol_zen");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_aoi_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_aoi", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_aoi");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_aoi_modifier_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_aoi_modifier", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_aoi_modifier");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_axisrot_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_axisrot", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_axisrot");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_beam_shading_factor_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_beam_shading_factor", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_beam_shading_factor");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_celltemp_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_celltemp", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_celltemp");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_dc_voltage_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_dc_voltage", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_dc_voltage");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_subarray1_dcloss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray1_dcloss", &result))
		make_access_error("SAM_Pvsamv1", "subarray1_dcloss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_idealrot_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_idealrot", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_idealrot");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_isc_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_isc", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_isc");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_linear_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_linear_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_linear_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_modeff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_modeff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_modeff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_poa_eff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_poa_eff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_poa_eff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_poa_eff_beam_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_poa_eff_beam", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_poa_eff_beam");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_poa_eff_diff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_poa_eff_diff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_poa_eff_diff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_poa_front_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_poa_front", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_poa_front");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_poa_nom_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_poa_nom", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_poa_nom");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_poa_rear_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_poa_rear", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_poa_rear");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_poa_shaded_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_poa_shaded", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_poa_shaded");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_poa_shaded_soiled_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_poa_shaded_soiled", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_poa_shaded_soiled");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_snow_coverage_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_snow_coverage", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_snow_coverage");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_snow_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_snow_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_snow_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_soiling_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_soiling_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_soiling_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_ss_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_ss_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_ss_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_ss_diffuse_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_ss_diffuse_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_ss_diffuse_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_ss_reflected_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_ss_reflected_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_ss_reflected_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_surf_azi_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_surf_azi", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_surf_azi");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_surf_tilt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_surf_tilt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_surf_tilt");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray1_voc_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray1_voc", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray1_voc");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_aoi_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_aoi", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_aoi");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_aoi_modifier_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_aoi_modifier", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_aoi_modifier");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_axisrot_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_axisrot", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_axisrot");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_beam_shading_factor_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_beam_shading_factor", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_beam_shading_factor");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_celltemp_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_celltemp", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_celltemp");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_dc_voltage_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_dc_voltage", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_dc_voltage");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_subarray2_dcloss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray2_dcloss", &result))
		make_access_error("SAM_Pvsamv1", "subarray2_dcloss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_idealrot_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_idealrot", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_idealrot");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_isc_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_isc", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_isc");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_linear_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_linear_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_linear_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_modeff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_modeff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_modeff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_poa_eff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_poa_eff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_poa_eff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_poa_eff_beam_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_poa_eff_beam", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_poa_eff_beam");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_poa_eff_diff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_poa_eff_diff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_poa_eff_diff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_poa_front_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_poa_front", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_poa_front");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_poa_nom_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_poa_nom", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_poa_nom");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_poa_rear_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_poa_rear", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_poa_rear");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_poa_shaded_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_poa_shaded", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_poa_shaded");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_poa_shaded_soiled_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_poa_shaded_soiled", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_poa_shaded_soiled");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_snow_coverage_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_snow_coverage", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_snow_coverage");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_snow_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_snow_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_snow_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_soiling_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_soiling_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_soiling_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_ss_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_ss_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_ss_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_ss_diffuse_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_ss_diffuse_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_ss_diffuse_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_ss_reflected_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_ss_reflected_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_ss_reflected_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_surf_azi_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_surf_azi", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_surf_azi");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_surf_tilt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_surf_tilt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_surf_tilt");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray2_voc_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray2_voc", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray2_voc");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_aoi_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_aoi", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_aoi");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_aoi_modifier_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_aoi_modifier", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_aoi_modifier");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_axisrot_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_axisrot", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_axisrot");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_beam_shading_factor_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_beam_shading_factor", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_beam_shading_factor");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_celltemp_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_celltemp", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_celltemp");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_dc_voltage_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_dc_voltage", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_dc_voltage");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_subarray3_dcloss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray3_dcloss", &result))
		make_access_error("SAM_Pvsamv1", "subarray3_dcloss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_idealrot_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_idealrot", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_idealrot");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_isc_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_isc", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_isc");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_linear_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_linear_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_linear_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_modeff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_modeff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_modeff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_poa_eff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_poa_eff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_poa_eff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_poa_eff_beam_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_poa_eff_beam", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_poa_eff_beam");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_poa_eff_diff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_poa_eff_diff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_poa_eff_diff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_poa_front_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_poa_front", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_poa_front");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_poa_nom_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_poa_nom", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_poa_nom");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_poa_rear_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_poa_rear", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_poa_rear");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_poa_shaded_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_poa_shaded", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_poa_shaded");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_poa_shaded_soiled_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_poa_shaded_soiled", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_poa_shaded_soiled");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_snow_coverage_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_snow_coverage", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_snow_coverage");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_snow_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_snow_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_snow_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_soiling_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_soiling_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_soiling_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_ss_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_ss_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_ss_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_ss_diffuse_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_ss_diffuse_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_ss_diffuse_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_ss_reflected_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_ss_reflected_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_ss_reflected_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_surf_azi_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_surf_azi", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_surf_azi");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_surf_tilt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_surf_tilt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_surf_tilt");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray3_voc_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray3_voc", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray3_voc");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_aoi_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_aoi", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_aoi");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_aoi_modifier_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_aoi_modifier", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_aoi_modifier");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_axisrot_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_axisrot", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_axisrot");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_beam_shading_factor_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_beam_shading_factor", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_beam_shading_factor");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_celltemp_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_celltemp", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_celltemp");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_dc_voltage_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_dc_voltage", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_dc_voltage");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_subarray4_dcloss_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "subarray4_dcloss", &result))
		make_access_error("SAM_Pvsamv1", "subarray4_dcloss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_idealrot_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_idealrot", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_idealrot");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_isc_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_isc", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_isc");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_linear_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_linear_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_linear_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_modeff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_modeff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_modeff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_poa_eff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_poa_eff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_poa_eff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_poa_eff_beam_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_poa_eff_beam", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_poa_eff_beam");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_poa_eff_diff_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_poa_eff_diff", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_poa_eff_diff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_poa_front_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_poa_front", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_poa_front");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_poa_nom_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_poa_nom", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_poa_nom");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_poa_rear_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_poa_rear", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_poa_rear");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_poa_shaded_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_poa_shaded", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_poa_shaded");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_poa_shaded_soiled_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_poa_shaded_soiled", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_poa_shaded_soiled");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_snow_coverage_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_snow_coverage", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_snow_coverage");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_snow_loss_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_snow_loss", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_snow_loss");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_soiling_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_soiling_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_soiling_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_ss_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_ss_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_ss_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_ss_diffuse_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_ss_diffuse_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_ss_diffuse_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_ss_reflected_derate_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_ss_reflected_derate", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_ss_reflected_derate");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_surf_azi_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_surf_azi", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_surf_azi");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_surf_tilt_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_surf_tilt", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_surf_tilt");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_subarray4_voc_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "subarray4_voc", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "subarray4_voc");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_sunpos_hour_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "sunpos_hour", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "sunpos_hour");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_sunup_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "sunup", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "sunup");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_tdry_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "tdry", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "tdry");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_ts_shift_hours_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ts_shift_hours", &result))
		make_access_error("SAM_Pvsamv1", "ts_shift_hours");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_wfpoa_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "wfpoa", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "wfpoa");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_wspd_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "wspd", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "wspd");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_xfmr_ll_ts_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "xfmr_ll_ts", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "xfmr_ll_ts");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_xfmr_ll_year1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "xfmr_ll_year1", &result))
		make_access_error("SAM_Pvsamv1", "xfmr_ll_year1");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_xfmr_loss_ts_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "xfmr_loss_ts", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "xfmr_loss_ts");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_xfmr_loss_year1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "xfmr_loss_year1", &result))
		make_access_error("SAM_Pvsamv1", "xfmr_loss_year1");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvsamv1_Outputs_xfmr_nll_ts_aget(SAM_Pvsamv1 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "xfmr_nll_ts", length);
	if (!result)
		make_access_error("SAM_Pvsamv1", "xfmr_nll_ts");
	});
	return result;
}



SAM_EXPORT float SAM_Pvsamv1_Outputs_xfmr_nll_year1_fget(SAM_Pvsamv1 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "xfmr_nll_year1", &result))
		make_access_error("SAM_Pvsamv1", "xfmr_nll_year1");
	});
	return result;
}



