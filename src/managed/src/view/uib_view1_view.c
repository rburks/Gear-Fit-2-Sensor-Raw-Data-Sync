
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and everytime you save your project.
* Do not hand edit this file.
********************************************************************************/
		#include "g_inc_uib.h"
#include "uib_views.h"
#include "uib_views_inc.h"
#include "uib_app_manager.h"


/* event handler declarations */
void view1_start_stop_onclicked(uib_view1_view_context*, Evas_Object*, void*);
void stop_onclicked(uib_view1_view_context*, Evas_Object*, void*);

uib_view_context* uib_view_view1_create(Evas_Object* parent, void* create_callback_param) {
	uib_view1_view_context* vc = calloc(1, sizeof(uib_view1_view_context));
	vc->parent = parent;
	vc->view_name = "view1";
	vc->indicator_state = ELM_WIN_INDICATOR_SHOW;
	vc->is_user_view = false;
	uib_app_manager_get_instance()->add_view_context((uib_view_context*)vc);
	if (!vc->box1) {
		vc->box1= elm_box_add(parent);
		vc->root_container = vc->box1;	}
	uib_views_get_instance()->set_targeted_view((uib_view_context*)vc);

	//bind event handler
	evas_object_smart_callback_add(vc->start_stop, "clicked", (Evas_Smart_Cb)view1_start_stop_onclicked, vc);
	evas_object_smart_callback_add(vc->stop_button, "clicked", (Evas_Smart_Cb)stop_onclicked, vc);


	evas_object_data_set(vc->root_container, KEY_VIEW_CONTEXT, vc);
	uib_views_create_callback(vc, evas_object_evas_get(vc->root_container), vc->root_container, create_callback_param);
	evas_object_event_callback_add(vc->root_container, EVAS_CALLBACK_DEL, (Evas_Object_Event_Cb)uib_views_destroy_callback, vc);

	return (uib_view_context*)vc;
}
void uib_view1_config_SQUARE_320x320_portrait() {
	uib_app_manager_st* uib_app_manager = uib_app_manager_get_instance();
	uib_view1_view_context* vc = (uib_view1_view_context*)uib_app_manager->find_view_context("view1");
	if(!vc) {
		return;
	}
	if(vc->box1) {
		elm_win_alpha_set(vc->box1, EINA_FALSE);
		elm_box_homogeneous_set(vc->box1, EINA_FALSE);
		elm_box_horizontal_set(vc->box1, EINA_FALSE);
		elm_box_padding_set(vc->box1,0,0);
		evas_object_size_hint_align_set(vc->box1, -1.0, -1.0);
		evas_object_size_hint_weight_set(vc->box1, 1.0, 1.0);
		if (!vc->hrm_data) {
			vc->hrm_data = elm_label_add(vc->box1);
		}
		if(vc->hrm_data) {
			evas_object_size_hint_align_set(vc->hrm_data, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->hrm_data, 1.0, 1.0);			elm_object_text_set(vc->hrm_data,_UIB_LOCALE("<font=Tizen:style=Regular font_size=3>hrm</font/>"));
			elm_label_line_wrap_set(vc->hrm_data, (Elm_Wrap_Type)ELM_WRAP_NONE);
			elm_label_wrap_width_set(vc->hrm_data,0);
			elm_label_ellipsis_set(vc->hrm_data, EINA_TRUE);
			evas_object_show(vc->hrm_data);
		}
		if (!vc->ppg_green) {
			vc->ppg_green = elm_label_add(vc->box1);
		}
		if(vc->ppg_green) {
			evas_object_size_hint_align_set(vc->ppg_green, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->ppg_green, 1.0, 1.0);			elm_object_text_set(vc->ppg_green,_UIB_LOCALE("<font=Tizen:style=Regular font_size=3>ppg</font/>"));
			elm_label_line_wrap_set(vc->ppg_green, (Elm_Wrap_Type)ELM_WRAP_NONE);
			elm_label_wrap_width_set(vc->ppg_green,0);
			elm_label_ellipsis_set(vc->ppg_green, EINA_TRUE);
			evas_object_show(vc->ppg_green);
		}
		if (!vc->file_size) {
			vc->file_size = elm_label_add(vc->box1);
		}
		if(vc->file_size) {
			evas_object_size_hint_align_set(vc->file_size, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->file_size, 1.0, 1.0);			elm_object_text_set(vc->file_size,_UIB_LOCALE("<font=Tizen:style=Regular font_size=15>FileInfo</font/>"));
			elm_label_line_wrap_set(vc->file_size, (Elm_Wrap_Type)ELM_WRAP_NONE);
			elm_label_wrap_width_set(vc->file_size,0);
			elm_label_ellipsis_set(vc->file_size, EINA_TRUE);
			evas_object_show(vc->file_size);
		}
		if (!vc->start_stop) {
			vc->start_stop = elm_button_add(vc->box1);
		}
		if (vc->start_stop) {
			evas_object_size_hint_align_set(vc->start_stop, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->start_stop, 1.0, .1);			elm_object_text_set(vc->start_stop,_UIB_LOCALE("Start"));
			elm_object_style_set(vc->start_stop,"default");
			evas_object_show(vc->start_stop);
		}
		if (!vc->stop_button) {
			vc->stop_button = elm_button_add(vc->box1);
		}
		if (vc->stop_button) {
			evas_object_size_hint_align_set(vc->stop_button, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->stop_button, 1.0, .1);			elm_object_text_set(vc->stop_button,_UIB_LOCALE("Stop"));
			elm_object_style_set(vc->stop_button,"default");
			evas_object_show(vc->stop_button);
		}
		elm_box_pack_end(vc->box1, vc->hrm_data);
		elm_box_pack_end(vc->box1, vc->ppg_green);
		elm_box_pack_end(vc->box1, vc->file_size);
		elm_box_pack_end(vc->box1, vc->start_stop);
		elm_box_pack_end(vc->box1, vc->stop_button);
		evas_object_show(vc->box1);
	}
}

