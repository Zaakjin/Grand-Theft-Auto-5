#region Local Var
	auto uLocal_0 = 0;
	auto uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	auto uLocal_12 = 0;
	auto uLocal_13 = 0;
	float fLocal_14 = 0;
	auto uLocal_15 = 0;
	auto uLocal_16 = 0;
	int iLocal_17 = 0;
	auto uLocal_18 = 0;
	auto uLocal_19 = 0;
	char* sLocal_20 = 0;
	float fLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	Vector3[] vLocal_39 = new Vector3[70];
	float fLocal_250 = 0;
	Vector3 vLocal_251 = 0;
	Vector3 vLocal_254 = 0;
	Vector3 vLocal_257 = 0;
	Vector3 vLocal_260 = 0;
	float fLocal_263 = 0;
	Vector3 vLocal_264 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	struct<2> Local_269 = 0;
	auto uLocal_271 = 0;
	auto uLocal_272 = 0;
	auto uLocal_273 = 0;
	auto uLocal_274 = 0;
	auto uLocal_275 = 0;
	auto uLocal_276 = 0;
	auto uLocal_277 = 0;
	auto uLocal_278 = 0;
	auto uLocal_279 = 0;
	auto uLocal_280 = 0;
	auto uLocal_281 = 0;
	auto uLocal_282 = 0;
	auto uLocal_283 = 0;
	auto uLocal_284 = 0;
	auto uLocal_285 = 0;
	auto uLocal_286 = 5;
	auto uLocal_287 = 0;
	auto uLocal_288 = 0;
	auto uLocal_289 = 0;
	auto uLocal_290 = 0;
	auto uLocal_291 = 0;
#endregion

void main()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_250 = 40000f;
	vLocal_264 = {Local_269.f_1[0 /*3*/]};
	if (has_force_cleanup_occurred(34))
	{
		terminate_this_thread();
	}
	if ((func_52(13) || func_52(14)) || func_51(0))
	{
		terminate_this_thread();
	}
	func_29();
	func_28();
	func_25();
	func_24();
	while (true)
	{
		wait(0);
		func_23();
		func_16();
		if (is_world_point_within_brain_activation_range())
		{
			if (is_player_playing(player_id()))
			{
				func_15();
				switch (iLocal_27)
				{
					case 0:
						if (!is_ped_injured(player_ped_id()))
						{
							if (vdist2(get_entity_coords(player_ped_id(), 0), vLocal_39[iLocal_31 /*3*/]) < fLocal_250)
							{
								if (is_ped_in_any_heli(player_ped_id()) || is_ped_in_any_plane(player_ped_id()))
								{
									if ((((((((((((((iLocal_31 == 33 || iLocal_31 == 34) || iLocal_31 == 35) || iLocal_31 == 36) || iLocal_31 == 50) || iLocal_31 == 51) || iLocal_31 == 52) || iLocal_31 == 53) || iLocal_31 == 54) || iLocal_31 == 55) || iLocal_31 == 56) || iLocal_31 == 57) || iLocal_31 == 58) || iLocal_31 == 59) || iLocal_31 == 60)
									{
										iLocal_38 = true;
									}
									else
									{
										iLocal_38 = false;
									}
									if (is_vehicle_driveable(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
									{
										if (func_14())
										{
											if (is_entity_in_angled_area(player_ped_id(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0))
											{
												iLocal_33 = true;
												iLocal_27 = 1;
											}
											if (is_entity_in_angled_area(player_ped_id(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
											{
												iLocal_34 = true;
												iLocal_27 = 1;
											}
										}
									}
								}
							}
						}
						settimera(0);
						break;
					
					case 1:
						if (!is_ped_injured(player_ped_id()))
						{
							if (!is_ped_in_any_heli(player_ped_id()) && !is_ped_in_any_plane(player_ped_id()))
							{
								func_13();
							}
							else if (!is_vehicle_driveable(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
							{
								func_13();
							}
							else if (!is_entity_in_air(get_vehicle_ped_is_in(player_ped_id(), 0)))
							{
								func_13();
							}
							if (iLocal_33)
							{
								if (iLocal_37)
								{
									if (iLocal_36)
									{
										if (!is_entity_in_angled_area(player_ped_id(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !is_entity_in_angled_area(player_ped_id(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
										{
											func_13();
											func_1();
											_0x293220DA1B46CEBC(3f, 2f, 3);
										}
									}
									else if (!is_entity_in_angled_area(player_ped_id(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && is_entity_in_angled_area(player_ped_id(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
									{
										iLocal_36 = 1;
									}
									else if (!is_entity_in_angled_area(player_ped_id(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !is_entity_in_angled_area(player_ped_id(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
									{
										func_13();
									}
								}
								else if (is_entity_in_angled_area(player_ped_id(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && is_entity_in_angled_area(player_ped_id(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
								{
									iLocal_37 = 1;
								}
								else if (!is_entity_in_angled_area(player_ped_id(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !is_entity_in_angled_area(player_ped_id(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
								{
									func_13();
								}
							}
							else if (iLocal_34)
							{
								if (iLocal_37)
								{
									if (iLocal_35)
									{
										if (!is_entity_in_angled_area(player_ped_id(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !is_entity_in_angled_area(player_ped_id(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
										{
											func_13();
											func_1();
											_0x293220DA1B46CEBC(3f, 2f, 3);
										}
									}
									else if (is_entity_in_angled_area(player_ped_id(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !is_entity_in_angled_area(player_ped_id(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
									{
										iLocal_35 = 1;
									}
									else if (!is_entity_in_angled_area(player_ped_id(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !is_entity_in_angled_area(player_ped_id(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
									{
										func_13();
									}
								}
								else if (is_entity_in_angled_area(player_ped_id(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && is_entity_in_angled_area(player_ped_id(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
								{
									iLocal_37 = 1;
								}
								else if (!is_entity_in_angled_area(player_ped_id(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !is_entity_in_angled_area(player_ped_id(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
								{
									func_13();
								}
							}
						}
						break;
					}
			}
		}
		else if (iLocal_28 == 0)
		{
			terminate_this_thread();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_31 < 32)
	{
		iVar0 = is_bit_set(Global_101154.f_8739.f_96, iLocal_31);
	}
	else if (iLocal_31 < 64)
	{
		iVar0 = is_bit_set(Global_101154.f_8739.f_97, iLocal_31 - 32);
	}
	else
	{
		iVar0 = is_bit_set(Global_101154.f_8739.f_98, iLocal_31 - 64);
	}
	if (iVar0)
	{
	}
	else
	{
		if (!iLocal_267)
		{
			if (iLocal_38)
			{
				stat_increment(joaat("sp_knife_flights_count"), 1f);
			}
			else
			{
				stat_increment(joaat("sp_under_the_bridge_count"), 1f);
			}
			func_3(func_8(), 5, 3);
			func_2();
		}
		if (iLocal_31 < 32)
		{
			set_bit(&(Global_101154.f_8739.f_96), iLocal_31);
		}
		else if (iLocal_31 < 64)
		{
			set_bit(&(Global_101154.f_8739.f_97), iLocal_31 - 32);
		}
		else
		{
			set_bit(&(Global_101154.f_8739.f_98), iLocal_31 - 64);
		}
		Global_88056 = 1;
		func_29();
		iLocal_29 = 1;
	}
}

bool func_2()
{
	if (func_51(0))
	{
		return false;
	}
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return false;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return false;
	}
	Global_91317.f_10++;
	return true;
}

void func_3(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_101154.f_1826.f_539.f_1475[iParam1 /*4*/][iParam0] += iParam2;
			break;
		
		case 3:
			iVar1 = 3949;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 3949)
			{
				iVar0 = func_7(iVar1, -1, 0);
				iVar0 += iParam2;
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_4(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

int func_5(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

auto func_6()
{
	return Global_1312747;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_5(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

auto func_8()
{
	func_9();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_9()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_12(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_11(player_ped_id());
			if (func_10(iVar0) && (!func_52(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_10(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

int func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_13()
{
	iLocal_33 = false;
	iLocal_34 = false;
	iLocal_35 = 0;
	iLocal_36 = 0;
	iLocal_37 = 0;
	iLocal_27 = 0;
}

bool func_14()
{
	if (iLocal_38)
	{
		if (is_ped_in_any_plane(player_ped_id()))
		{
			if (get_entity_upright_value(get_vehicle_ped_is_in(player_ped_id(), 0)) > -0.6f && get_entity_upright_value(get_vehicle_ped_is_in(player_ped_id(), 0)) < 0.6f)
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_15()
{
	if (get_game_timer() - iLocal_268 > 500)
	{
		if (iLocal_31 == 29)
		{
			if (is_bit_set(Global_101154.f_8739.f_96, iLocal_31))
			{
				iLocal_267 = true;
			}
		}
		iLocal_268 = get_game_timer();
	}
}

void func_16()
{
	switch (iLocal_28)
	{
		case 0:
			if (iLocal_29 && !iLocal_267)
			{
				if (!func_22())
				{
					iLocal_30 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
					while (!has_scaleform_movie_loaded(iLocal_30))
					{
						wait(0);
					}
					_push_scaleform_movie_function(iLocal_30, "SHOW_BRIDGES_KNIVES_PROGRESS");
					if (iLocal_38)
					{
						func_21("FU_KNIFE");
						_push_scaleform_movie_function_parameter_int(15);
					}
					else
					{
						func_21("FU_TITLE");
						_push_scaleform_movie_function_parameter_int(50);
					}
					func_21("FU_PASS");
					if (iLocal_38)
					{
						func_21("FU_CHALL_KN");
					}
					else
					{
						func_21("FU_CHALLENGE");
					}
					_push_scaleform_movie_function_parameter_int(func_29());
					_pop_scaleform_movie_function_void();
					iLocal_32 = func_29();
					Global_25351 = iLocal_32;
					settimerb(0);
					play_sound_frontend(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
				}
				iLocal_28 = 1;
			}
			break;
		
		case 1:
			if ((((((timerb() > 3750 || is_screen_faded_out()) || !is_player_playing(player_id())) || func_22()) || !is_player_control_on(player_id())) || func_20()) || func_19())
			{
				_push_scaleform_movie_function(iLocal_30, "SHARD_ANIM_OUT");
				_push_scaleform_movie_function_parameter_int(true);
				_push_scaleform_movie_function_parameter_float(0.33f);
				_pop_scaleform_movie_function_void();
				settimerb(0);
				iLocal_28 = 2;
			}
			else
			{
				func_18();
				if (Global_25351 > iLocal_32)
				{
					iLocal_28 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((timerb() > 500 || is_screen_faded_out()) || !is_player_playing(player_id())) || func_22()) || !is_player_control_on(player_id())) || func_20()) || func_19())
			{
				iLocal_28 = 3;
			}
			else
			{
				func_18();
				if (Global_25351 > iLocal_32)
				{
					iLocal_28 = 3;
				}
			}
			break;
		
		case 3:
			func_17();
			iLocal_29 = 0;
			func_25();
			iLocal_267 = true;
			iLocal_28 = 0;
			break;
	}
}

void func_17()
{
	if (has_scaleform_movie_loaded(iLocal_30))
	{
		set_scaleform_movie_as_no_longer_needed(&iLocal_30);
	}
}

void func_18()
{
	if (!func_22())
	{
		if (has_scaleform_movie_loaded(iLocal_30))
		{
			draw_scaleform_movie(iLocal_30, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_19()
{
	if (Global_35711 == 9 || Global_35711 == 10)
	{
		return Global_99806;
	}
	Global_99806 = 0;
	return 0;
}

bool func_20()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

void func_21(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

bool func_22()
{
	if (Global_69749)
	{
		return true;
	}
	else if (Global_55743 && !Global_55749)
	{
		return true;
	}
	return false;
}

void func_23()
{
}

void func_24()
{
}

void func_25()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (func_27(vLocal_264, vLocal_39[iVar0 /*3*/], 1056964608, 0))
		{
			if (iVar0 == 65 || iVar0 == 66)
			{
				fLocal_250 = 490000f;
				iLocal_31 = 29;
			}
			else
			{
				iLocal_31 = iVar0;
			}
		}
		iVar0++;
	}
	if (iLocal_31 < 32)
	{
		if (is_bit_set(Global_101154.f_8739.f_96, iLocal_31))
		{
			iLocal_267 = true;
		}
	}
	else if (iLocal_31 < 64)
	{
		if (is_bit_set(Global_101154.f_8739.f_97, iLocal_31 - 32))
		{
			iLocal_267 = true;
		}
	}
	else if (is_bit_set(Global_101154.f_8739.f_98, iLocal_31 - 64))
	{
		iLocal_267 = true;
	}
	if (iLocal_267)
	{
	}
	else
	{
		func_26(iLocal_31);
	}
}

void func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vLocal_251 = {1103.014f, -233.0374f, 56.13004f};
			vLocal_254 = {1073.191f, -214.8478f, 66.0593f};
			fLocal_263 = 30f;
			vLocal_257 = {1093.589f, -248.5926f, 56.88639f};
			vLocal_260 = {1063.774f, -230.1425f, 66.67847f};
			break;
		
		case 1:
			vLocal_251 = {1044.182f, -324.5904f, 49.33408f};
			vLocal_254 = {1016.71f, -307.7383f, 64.81343f};
			fLocal_263 = 30f;
			vLocal_257 = {1007.983f, -320.6159f, 48.4543f};
			vLocal_260 = {1036.007f, -337.4204f, 64.4808f};
			break;
		
		case 2:
			vLocal_251 = {916.599f, -419.8782f, 35.62748f};
			vLocal_254 = {910.3793f, -383.8826f, 47.54339f};
			fLocal_263 = 7f;
			vLocal_257 = {912.1362f, -420.5161f, 35.38034f};
			vLocal_260 = {906.8952f, -384.6779f, 47.24926f};
			break;
		
		case 3:
			vLocal_251 = {757.7189f, -472.924f, 19.2535f};
			vLocal_254 = {696.5936f, -420.2115f, 35.46084f};
			fLocal_263 = 20.75f;
			vLocal_257 = {744.9114f, -480.7373f, 19.06514f};
			vLocal_260 = {682.5614f, -429.5533f, 37.0266f};
			break;
		
		case 4:
			vLocal_251 = {680.3677f, -581.1792f, 14.2145f};
			vLocal_254 = {599.8101f, -528.3059f, 33.40958f};
			fLocal_263 = 45f;
			vLocal_257 = {667.3692f, -610.5356f, 13.85401f};
			vLocal_260 = {582.8433f, -556.7818f, 33.40335f};
			break;
		
		case 5:
			vLocal_251 = {644.2497f, -844.7504f, 12.36707f};
			vLocal_254 = {526.8608f, -845.2521f, 35.9896f};
			fLocal_263 = 25f;
			vLocal_257 = {644.3659f, -859.3878f, 12.59677f};
			vLocal_260 = {526.8615f, -857.5208f, 36.32857f};
			break;
		
		case 6:
			vLocal_251 = {634.972f, -1011.64f, 10.92594f};
			vLocal_254 = {539.6501f, -1024.017f, 35.95852f};
			fLocal_263 = 25f;
			vLocal_257 = {634.9612f, -1029.123f, 10.61846f};
			vLocal_260 = {543.4893f, -1038.261f, 35.9593f};
			break;
		
		case 7:
			vLocal_251 = {645.7223f, -1191.215f, 10.45198f};
			vLocal_254 = {524.3018f, -1197.167f, 39.61172f};
			fLocal_263 = 50f;
			vLocal_257 = {645.7223f, -1228.966f, 10.98015f};
			vLocal_260 = {521.9379f, -1217.607f, 39.47172f};
			break;
		
		case 8:
			vLocal_251 = {642.1216f, -1295.73f, 9.005976f};
			vLocal_254 = {568.1702f, -1375.351f, 20.12989f};
			fLocal_263 = 7f;
			vLocal_257 = {644.7772f, -1298.168f, 9.128529f};
			vLocal_260 = {571.6342f, -1378.644f, 20.35802f};
			break;
		
		case 9:
			vLocal_251 = {686.5675f, -1444.71f, 9.065001f};
			vLocal_254 = {598.9328f, -1444.438f, 25.68846f};
			fLocal_263 = 25f;
			vLocal_257 = {682.3027f, -1429.872f, 9.890836f};
			vLocal_260 = {593.8217f, -1432.995f, 25.60072f};
			break;
		
		case 10:
			vLocal_251 = {718.7617f, -1734.313f, 9.082874f};
			vLocal_254 = {615.0017f, -1725.897f, 27.54585f};
			fLocal_263 = 30f;
			vLocal_257 = {717.5355f, -1748.646f, 9.363478f};
			vLocal_260 = {614.218f, -1734.848f, 27.35708f};
			break;
		
		case 11:
			vLocal_251 = {694.3165f, -2049.806f, 0.009695f};
			vLocal_254 = {618.6845f, -2040.014f, 25.83412f};
			fLocal_263 = 30f;
			vLocal_257 = {693.1836f, -2063.225f, 0.429037f};
			vLocal_260 = {607.5944f, -2055.326f, 26.91816f};
			break;
		
		case 12:
			vLocal_251 = {642.6671f, -2494.551f, 0.468485f};
			vLocal_254 = {570.1807f, -2513.959f, 11.78794f};
			fLocal_263 = 20f;
			vLocal_257 = {647.0339f, -2506.202f, 0.583701f};
			vLocal_260 = {571.1415f, -2522.975f, 10.45045f};
			break;
		
		case 13:
			vLocal_251 = {691.8235f, -2558.219f, 0.363352f};
			vLocal_254 = {645.8863f, -2600.311f, 9.898791f};
			fLocal_263 = 10.25f;
			vLocal_257 = {695.7928f, -2561.034f, 0.346731f};
			vLocal_260 = {656.3919f, -2601.972f, 9.643657f};
			break;
		
		case 14:
			vLocal_251 = {723.6254f, -2562.171f, 0.255647f};
			vLocal_254 = {720.752f, -2619.77f, 15.73211f};
			fLocal_263 = 20f;
			vLocal_257 = {735.765f, -2561.935f, 0.311182f};
			vLocal_260 = {736.1214f, -2618.767f, 15.79061f};
			break;
		
		case 15:
			vLocal_251 = {891.4387f, -2603.12f, 0f};
			vLocal_254 = {704.4932f, -2634.793f, 45f};
			fLocal_263 = 20f;
			vLocal_257 = {893.2578f, -2616.235f, 0f};
			vLocal_260 = {707.7261f, -2647.696f, 45f};
			break;
		
		case 16:
			vLocal_251 = {-2669.587f, 2491.96f, 2.043799f};
			vLocal_254 = {-2617.765f, 2841.595f, 14.0822f};
			fLocal_263 = 26.5f;
			vLocal_257 = {-2687.606f, 2494.868f, 2.608733f};
			vLocal_260 = {-2637.085f, 2846.875f, 14.15988f};
			break;
		
		case 17:
			vLocal_251 = {-1986.173f, 4521.799f, 0f};
			vLocal_254 = {-1809.903f, 4699.551f, 53.5088f};
			fLocal_263 = 17f;
			vLocal_257 = {-1995.668f, 4531.259f, 0f};
			vLocal_260 = {-1817.543f, 4708.395f, 53.50917f};
			break;
		
		case 18:
			vLocal_251 = {-526.0265f, 4472.442f, 0f};
			vLocal_254 = {-505.5714f, 4335.725f, 86.73311f};
			fLocal_263 = 10f;
			vLocal_257 = {-519.9281f, 4476.346f, 0f};
			vLocal_260 = {-500.7313f, 4336.389f, 86.71289f};
			break;
		
		case 19:
			vLocal_251 = {98.1615f, 3384.489f, 45.45169f};
			vLocal_254 = {154.974f, 3350.694f, 30.03358f};
			fLocal_263 = 8f;
			vLocal_257 = {152.6802f, 3346.793f, 45.02156f};
			vLocal_260 = {95.57188f, 3380.091f, 30.43284f};
			break;
		
		case 20:
			vLocal_251 = {147.8606f, 3406.796f, 38.03672f};
			vLocal_254 = {126.1329f, 3416.927f, 30.02987f};
			fLocal_263 = 14.5f;
			vLocal_257 = {130.0916f, 3425.417f, 38.05672f};
			vLocal_260 = {151.8703f, 3415.391f, 30.0578f};
			break;
		
		case 21:
			vLocal_251 = {2830.972f, 4967.14f, 34.56013f};
			vLocal_254 = {2818.719f, 4992.298f, 51.2909f};
			fLocal_263 = 10f;
			vLocal_257 = {2826.767f, 4964.185f, 34.10636f};
			vLocal_260 = {2814.216f, 4989.983f, 51.21849f};
			break;
		
		case 22:
			vLocal_251 = {-151.5764f, 4264.417f, 31.04735f};
			vLocal_254 = {-193.1962f, 4224.604f, 43.87255f};
			fLocal_263 = 10f;
			vLocal_257 = {-148.3842f, 4261.071f, 31.57409f};
			vLocal_260 = {-190.4719f, 4222.076f, 43.95443f};
			break;
		
		case 23:
			vLocal_251 = {-426.6919f, 2964.272f, 14.848f};
			vLocal_254 = {-396.2298f, 2959.278f, 23.50637f};
			fLocal_263 = 7f;
			vLocal_257 = {-425.0283f, 2967.861f, 15.22699f};
			vLocal_260 = {-395.6073f, 2962.607f, 24.38079f};
			break;
		
		case 24:
			vLocal_251 = {-192.3414f, 2864.916f, 30.72595f};
			vLocal_254 = {-170.1509f, 2857.128f, 43.94182f};
			fLocal_263 = 10f;
			vLocal_257 = {-192.0129f, 2871.603f, 29.99943f};
			vLocal_260 = {-169.5957f, 2863.838f, 44.03251f};
			break;
		
		case 25:
			vLocal_251 = {2539.185f, 2228.772f, 18.6102f};
			vLocal_254 = {2574.373f, 2169.401f, 27.26598f};
			fLocal_263 = 10f;
			vLocal_257 = {2543.708f, 2231.402f, 18.331f};
			vLocal_260 = {2578.079f, 2171.584f, 27.26057f};
			break;
		
		case 26:
			vLocal_251 = {2954.087f, 815.7209f, 0.037901f};
			vLocal_254 = {2933.189f, 796.4688f, 12.98392f};
			fLocal_263 = 35f;
			vLocal_257 = {2966.123f, 806.8889f, 0.544056f};
			vLocal_260 = {2950.801f, 786.7816f, 11.74596f};
			break;
		
		case 27:
			vLocal_251 = {2329.673f, -459.6648f, 70.24277f};
			vLocal_254 = {2413.384f, -361.2188f, 91.77886f};
			fLocal_263 = 12f;
			vLocal_257 = {2324.752f, -455.5238f, 70.25145f};
			vLocal_260 = {2407.409f, -356.2003f, 91.43083f};
			break;
		
		case 28:
			vLocal_251 = {1943.428f, -753.251f, 80.17905f};
			vLocal_254 = {1850.365f, -760.9587f, 93.02522f};
			fLocal_263 = 7f;
			vLocal_257 = {1943.366f, -758.287f, 80.32291f};
			vLocal_260 = {1851.354f, -765.1807f, 92.93546f};
			break;
		
		case 29:
			vLocal_251 = {-655.1467f, -2138.094f, -0.339008f};
			vLocal_254 = {-146.0279f, -2493.724f, 54.67567f};
			fLocal_263 = 47.75f;
			vLocal_257 = {-672.2213f, -2162.675f, -0.082912f};
			vLocal_260 = {-163.5556f, -2519.058f, 54.72249f};
			break;
		
		case 30:
			vLocal_251 = {-1483f, 2691.428f, -10f};
			vLocal_254 = {-1377.168f, 2600.769f, 15.95528f};
			fLocal_263 = 12f;
			vLocal_257 = {-1478.152f, 2696.688f, -10f};
			vLocal_260 = {-1378.503f, 2608.698f, 15.60924f};
			break;
		
		case 31:
			vLocal_251 = {222.1519f, -2343.487f, 0.039199f};
			vLocal_254 = {222.6849f, -2297.407f, 7.088753f};
			fLocal_263 = 12f;
			vLocal_257 = {216.959f, -2343.487f, 0.207734f};
			vLocal_260 = {216.602f, -2295.445f, 7.424279f};
			break;
		
		case 32:
			vLocal_251 = {346.4622f, -2244.374f, 0.159779f};
			vLocal_254 = {346.8347f, -2389.591f, 7.852059f};
			fLocal_263 = 20f;
			vLocal_257 = {359.609f, -2244.468f, 0.129684f};
			vLocal_260 = {355.4054f, -2390.258f, 7.080691f};
			break;
		
		case 33:
			vLocal_251 = {-1859.68f, -322.6357f, 56.16368f};
			vLocal_254 = {-1836.614f, -335.4141f, 96.1161f};
			fLocal_263 = 7.5f;
			vLocal_257 = {-1860.27f, -327.8634f, 57.543f};
			vLocal_260 = {-1837.271f, -339.2227f, 95.69325f};
			break;
		
		case 34:
			vLocal_251 = {-680.2632f, -600.818f, 69.11289f};
			vLocal_254 = {-706.6613f, -600.7515f, 30.47604f};
			fLocal_263 = 31.5f;
			vLocal_257 = {-680.6077f, -618.3658f, 69.27496f};
			vLocal_260 = {-706.3596f, -618.2385f, 30.31235f};
			break;
		
		case 35:
			vLocal_251 = {-1468.096f, -591.7158f, 67.05518f};
			vLocal_254 = {-1454.7f, -573.4518f, 29.56736f};
			fLocal_263 = 11.75f;
			vLocal_257 = {-1474.903f, -591.1215f, 67.08091f};
			vLocal_260 = {-1457.173f, -568.1316f, 29.44059f};
			break;
		
		case 36:
			vLocal_251 = {-1544.958f, -537.1475f, 72.44347f};
			vLocal_254 = {-1564.616f, -551.1829f, 32.86163f};
			fLocal_263 = 11.75f;
			vLocal_257 = {-1541.008f, -541.5494f, 71.61972f};
			vLocal_260 = {-1561.219f, -555.868f, 32.9279f};
			break;
		
		case 37:
			vLocal_251 = {333.2108f, -2727.274f, 20.71663f};
			vLocal_254 = {333.4297f, -2791.609f, 41.99023f};
			fLocal_263 = 20f;
			vLocal_257 = {343.1127f, -2727.236f, 20.23613f};
			vLocal_260 = {343.6678f, -2791.602f, 41.37928f};
			break;
		
		case 38:
			vLocal_251 = {1928.071f, 6228.355f, 43.49398f};
			vLocal_254 = {2039.882f, 6167.397f, 55.46405f};
			fLocal_263 = 13f;
			vLocal_257 = {1931.82f, 6235.634f, 43.37382f};
			vLocal_260 = {2039.598f, 6176.525f, 55.25597f};
			break;
		
		case 39:
			vLocal_251 = {-736.4309f, -1590.921f, 10.80892f};
			vLocal_254 = {-710.811f, -1516.349f, -0.098598f};
			fLocal_263 = 15f;
			vLocal_257 = {-727.2307f, -1585.221f, 11.78027f};
			vLocal_260 = {-700.0201f, -1511.783f, -0.341655f};
			break;
		
		case 40:
			vLocal_251 = {-686.3775f, -1548.553f, 12.33747f};
			vLocal_254 = {-669.329f, -1507.063f, -0.788618f};
			fLocal_263 = 25f;
			vLocal_257 = {-654.203f, -1536.146f, 9.191055f};
			vLocal_260 = {-645.9954f, -1500.219f, -2.406948f};
			break;
		
		case 41:
			vLocal_251 = {-624.2344f, -1537.045f, 12.60193f};
			vLocal_254 = {-622.1749f, -1472.877f, -0.292606f};
			fLocal_263 = 8f;
			vLocal_257 = {-615.4003f, -1536.65f, 12.40271f};
			vLocal_260 = {-619.7385f, -1472.937f, -0.243267f};
			break;
		
		case 42:
			vLocal_251 = {-492.5057f, -1632.457f, 24.3307f};
			vLocal_254 = {-418.2088f, -1487.452f, 0f};
			fLocal_263 = 25f;
			vLocal_257 = {-486.2016f, -1636.095f, 24.20805f};
			vLocal_260 = {-398.7648f, -1490.44f, 0f};
			break;
		
		case 43:
			vLocal_251 = {-359.3541f, -1639.693f, 13.13455f};
			vLocal_254 = {-388.4955f, -1690.945f, -0.183164f};
			fLocal_263 = 25f;
			vLocal_257 = {-378.1518f, -1705.66f, 12.47196f};
			vLocal_260 = {-348.9591f, -1654.411f, 0.193478f};
			break;
		
		case 44:
			vLocal_251 = {-243.4436f, -1814.623f, 25.69465f};
			vLocal_254 = {-183.9987f, -1780.645f, -0.085802f};
			fLocal_263 = 25f;
			vLocal_257 = {-235.1319f, -1822.094f, 25.86542f};
			vLocal_260 = {-175.5105f, -1788.275f, -0.506062f};
			break;
		
		case 45:
			vLocal_251 = {84.55537f, -2046.159f, 13.30767f};
			vLocal_254 = {17.93164f, -2045.152f, -0.031946f};
			fLocal_263 = 25f;
			vLocal_257 = {17.90788f, -2035.773f, 12.62706f};
			vLocal_260 = {84.57207f, -2034.184f, 0.048385f};
			break;
		
		case 46:
			vLocal_251 = {-3064.973f, 780.1677f, 18.70642f};
			vLocal_254 = {-3093.958f, 757.2886f, 29.19696f};
			fLocal_263 = 5f;
			vLocal_257 = {-3063.054f, 778.0165f, 18.67167f};
			vLocal_260 = {-3092.175f, 754.9156f, 29.1458f};
			break;
		
		case 47:
			vLocal_251 = {-1471.517f, 2406.815f, 2.485338f};
			vLocal_254 = {-1489.422f, 2404.39f, 21.76938f};
			fLocal_263 = 15f;
			vLocal_257 = {-1468.889f, 2400.668f, 2.60396f};
			vLocal_260 = {-1487.055f, 2398.087f, 21.83768f};
			break;
		
		case 48:
			vLocal_251 = {2326.57f, 1096.031f, 76.31458f};
			vLocal_254 = {2290.332f, 1136.131f, 58.85706f};
			fLocal_263 = 21f;
			vLocal_257 = {2334.453f, 1103.067f, 76.26603f};
			vLocal_260 = {2297.846f, 1142.897f, 58.84243f};
			break;
		
		case 49:
			vLocal_251 = {2379.442f, 1150.776f, 58.79632f};
			vLocal_254 = {2327.658f, 1212.366f, 72.8333f};
			fLocal_263 = 12f;
			vLocal_257 = {2374.064f, 1146.282f, 58.83331f};
			vLocal_260 = {2320.895f, 1209.596f, 72.79299f};
			break;
		
		case 50:
			vLocal_251 = {-1179.405f, -355.2554f, 56.53003f};
			vLocal_254 = {-1198.064f, -357.8363f, 35.35551f};
			fLocal_263 = 12.5f;
			vLocal_257 = {-1178.385f, -361.8784f, 56.15081f};
			vLocal_260 = {-1197.104f, -364.7004f, 36.49475f};
			break;
		
		case 51:
			vLocal_251 = {-921.3846f, -384.94f, 137.0181f};
			vLocal_254 = {-912.4324f, -429.229f, 36.70113f};
			fLocal_263 = 16f;
			vLocal_257 = {-914.1658f, -387.9444f, 137.0794f};
			vLocal_260 = {-906.2534f, -424.691f, 47.11882f};
			break;
		
		case 52:
			vLocal_251 = {-740.2564f, 246.4529f, 132.2922f};
			vLocal_254 = {-718.3602f, 201.0042f, 80.95571f};
			fLocal_263 = 20f;
			vLocal_257 = {-726.6429f, 253.0676f, 132.3319f};
			vLocal_260 = {-705.5858f, 210.4336f, 78.70573f};
			break;
		
		case 53:
			vLocal_251 = {-771.2068f, 268.2729f, 132.1689f};
			vLocal_254 = {-778.3417f, 313.1148f, 84.27054f};
			fLocal_263 = 16f;
			vLocal_257 = {-770.8035f, 310.8625f, 137.4161f};
			vLocal_260 = {-763.0681f, 269.044f, 83.31474f};
			break;
		
		case 54:
			vLocal_251 = {259.2205f, 135.4146f, 136.7083f};
			vLocal_254 = {279.2396f, 128.1379f, 100.8233f};
			fLocal_263 = 16f;
			vLocal_257 = {261.9694f, 142.9676f, 136.6889f};
			vLocal_260 = {281.7203f, 134.9551f, 100.7704f};
			break;
		
		case 55:
			vLocal_251 = {393.548f, -30.87166f, 152.6635f};
			vLocal_254 = {369.9622f, -23.88461f, 88.35776f};
			fLocal_263 = 8f;
			vLocal_257 = {390.5358f, -36.08882f, 152.7813f};
			vLocal_260 = {368.1275f, -28.81888f, 88.69447f};
			break;
		
		case 56:
			vLocal_251 = {114.3139f, -648.4297f, 261.8488f};
			vLocal_254 = {131.0782f, -733.7684f, 39.34393f};
			fLocal_263 = 20f;
			vLocal_257 = {124.8467f, -646.6575f, 261.8488f};
			vLocal_260 = {140.0502f, -737.427f, 39.3493f};
			break;
		
		case 57:
			vLocal_251 = {-215.919f, -823.8436f, 126.0224f};
			vLocal_254 = {-193.2237f, -761.7781f, 27.91382f};
			fLocal_263 = 20f;
			vLocal_257 = {-225.397f, -820.3937f, 126.0812f};
			vLocal_260 = {-202.9433f, -758.257f, 27.47734f};
			break;
		
		case 58:
			vLocal_251 = {-296.4725f, -802.0815f, 95.40108f};
			vLocal_254 = {-278.1352f, -747.7841f, 50.40046f};
			fLocal_263 = 20f;
			vLocal_257 = {-305.4602f, -798.8369f, 95.48194f};
			vLocal_260 = {-285.7376f, -745.0959f, 49.57651f};
			break;
		
		case 59:
			vLocal_251 = {-292.3034f, -823.3569f, 95.37621f};
			vLocal_254 = {-258.5991f, -835.5632f, 27.97946f};
			fLocal_263 = 20f;
			vLocal_257 = {-288.9206f, -814.022f, 95.37556f};
			vLocal_260 = {-255.2116f, -826.256f, 27.7375f};
			break;
		
		case 60:
			vLocal_251 = {-256.3589f, -714.7838f, 110.1617f};
			vLocal_254 = {-212.9054f, -730.532f, 32.21946f};
			fLocal_263 = 20f;
			vLocal_257 = {-253.7723f, -705.6632f, 110.1736f};
			vLocal_260 = {-210.0588f, -722.6748f, 32.46536f};
			break;
		
		case 61:
			vLocal_251 = {1808.214f, 1949.246f, 71.73707f};
			vLocal_254 = {1837.906f, 2127.283f, 52.80491f};
			fLocal_263 = 9.75f;
			vLocal_257 = {1802.786f, 1950.262f, 71.74002f};
			vLocal_260 = {1831.994f, 2127.433f, 52.83893f};
			break;
		
		case 62:
			vLocal_251 = {2388.733f, 2931.941f, 46.62681f};
			vLocal_254 = {2426.681f, 2883.066f, 36.21524f};
			fLocal_263 = 10f;
			vLocal_257 = {2392.547f, 2934.867f, 46.6268f};
			vLocal_260 = {2430.333f, 2885.908f, 36.28148f};
			break;
		
		case 63:
			vLocal_251 = {2700.056f, 4836.381f, 42.07854f};
			vLocal_254 = {2685.673f, 4893.38f, 30.90867f};
			fLocal_263 = 20.75f;
			vLocal_257 = {2685.672f, 4821.653f, 42.18471f};
			vLocal_260 = {2672.812f, 4880.356f, 31.13311f};
			break;
		
		case 64:
			vLocal_251 = {-1053.446f, 4766.245f, 234.3251f};
			vLocal_254 = {-1040.263f, 4737.157f, 204.4916f};
			fLocal_263 = 5f;
			vLocal_257 = {-1051.414f, 4767.193f, 234.4293f};
			vLocal_260 = {-1037.954f, 4738.354f, 204.5282f};
			break;
		
		case 67:
			vLocal_251 = {1001.145f, -987.1138f, 42.62456f};
			vLocal_254 = {1078.645f, -963.7435f, 28.93338f};
			fLocal_263 = 14f;
			vLocal_257 = {1002.864f, -992.8986f, 42.62456f};
			vLocal_260 = {1080.484f, -969.9034f, 28.88377f};
			break;
		
		case 68:
			vLocal_251 = {952.5042f, -847.6615f, 43.01844f};
			vLocal_254 = {1021.093f, -844.5063f, 29.71967f};
			fLocal_263 = 20f;
			vLocal_257 = {945.5494f, -835.9777f, 43.15658f};
			vLocal_260 = {1016.364f, -835.3861f, 29.7297f};
			break;
		
		case 69:
			vLocal_251 = {1212.477f, -1183.013f, 46.4739f};
			vLocal_254 = {1267.189f, -1161.997f, 32.48297f};
			fLocal_263 = 40f;
			vLocal_257 = {1206.01f, -1157.063f, 47.93699f};
			vLocal_260 = {1258.374f, -1140.68f, 32.42903f};
			break;
	}
}

bool func_27(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!iParam7)
	{
		if (absf(vParam0.x - vParam3.x) <= fParam6)
		{
			if (absf(vParam0.y - vParam3.y) <= fParam6)
			{
				if (absf(vParam0.z - vParam3.z) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (absf(vParam0.x - vParam3.x) <= fParam6)
	{
		if (absf(vParam0.y - vParam3.y) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_28()
{
	vLocal_39[0 /*3*/] = {1083f, -231f, 60f};
	vLocal_39[1 /*3*/] = {1024f, -325f, 60f};
	vLocal_39[2 /*3*/] = {910f, -401f, 43f};
	vLocal_39[3 /*3*/] = {721f, -457f, 26f};
	vLocal_39[4 /*3*/] = {643f, -579f, 26f};
	vLocal_39[5 /*3*/] = {590f, -851f, 26f};
	vLocal_39[6 /*3*/] = {590f, -1023f, 16f};
	vLocal_39[7 /*3*/] = {582f, -1205f, 24f};
	vLocal_39[8 /*3*/] = {608f, -1335f, 16f};
	vLocal_39[9 /*3*/] = {640f, -1434f, 16f};
	vLocal_39[10 /*3*/] = {671f, -1742f, 20f};
	vLocal_39[11 /*3*/] = {651f, -2046f, 16f};
	vLocal_39[12 /*3*/] = {603f, -2505f, 9f};
	vLocal_39[13 /*3*/] = {673f, -2582f, 4f};
	vLocal_39[14 /*3*/] = {728f, -2594f, 10f};
	vLocal_39[15 /*3*/] = {794f, -2624f, 27f};
	vLocal_39[16 /*3*/] = {-2663f, 2594f, 7.5f};
	vLocal_39[17 /*3*/] = {-1902f, 4617f, 30f};
	vLocal_39[18 /*3*/] = {-513f, 4427f, 40f};
	vLocal_39[19 /*3*/] = {126f, 3366f, 40f};
	vLocal_39[20 /*3*/] = {143f, 3418f, 36f};
	vLocal_39[21 /*3*/] = {2822f, 4978f, 40f};
	vLocal_39[22 /*3*/] = {-162f, 4249f, 40f};
	vLocal_39[23 /*3*/] = {-408f, 2964f, 20f};
	vLocal_39[24 /*3*/] = {-181f, 2862f, 38f};
	vLocal_39[25 /*3*/] = {2558f, 2201f, 24f};
	vLocal_39[26 /*3*/] = {2950f, 803f, 8f};
	vLocal_39[27 /*3*/] = {2369f, -409f, 80f};
	vLocal_39[28 /*3*/] = {1906f, -755f, 84f};
	vLocal_39[29 /*3*/] = {-403f, -2333f, 40f};
	vLocal_39[30 /*3*/] = {-1429f, 2649f, 10f};
	vLocal_39[31 /*3*/] = {219f, -2315f, 5f};
	vLocal_39[32 /*3*/] = {350f, -2315f, 5f};
	vLocal_39[33 /*3*/] = {-1848f, -333f, 75f};
	vLocal_39[34 /*3*/] = {-693f, -608f, 69f};
	vLocal_39[35 /*3*/] = {-1461f, -582f, 53f};
	vLocal_39[36 /*3*/] = {-1553f, -546f, 59f};
	vLocal_39[37 /*3*/] = {338f, -2758f, 23f};
	vLocal_39[38 /*3*/] = {1985f, 6201f, 53f};
	vLocal_39[39 /*3*/] = {-713f, -1538f, 13f};
	vLocal_39[40 /*3*/] = {-659f, -1518f, 13f};
	vLocal_39[41 /*3*/] = {-620f, -1502f, 16f};
	vLocal_39[42 /*3*/] = {-445f, -1575f, 26f};
	vLocal_39[43 /*3*/] = {-373f, -1680f, 19f};
	vLocal_39[44 /*3*/] = {-212f, -1805f, 29f};
	vLocal_39[45 /*3*/] = {47f, -2040f, 18f};
	vLocal_39[46 /*3*/] = {-3080f, 766f, 25f};
	vLocal_39[47 /*3*/] = {-1478f, 2400f, 20f};
	vLocal_39[48 /*3*/] = {2308f, 1124f, 78f};
	vLocal_39[49 /*3*/] = {2349f, 1174f, 79f};
	vLocal_39[50 /*3*/] = {-1186f, -365f, 46f};
	vLocal_39[51 /*3*/] = {-916f, -407f, 93f};
	vLocal_39[52 /*3*/] = {-726f, 235f, 105f};
	vLocal_39[53 /*3*/] = {-774f, 286f, 112f};
	vLocal_39[54 /*3*/] = {271f, 134f, 125f};
	vLocal_39[55 /*3*/] = {377f, -28f, 125f};
	vLocal_39[56 /*3*/] = {121f, -703f, 150f};
	vLocal_39[57 /*3*/] = {-204f, -784f, 74f};
	vLocal_39[58 /*3*/] = {-287f, -774f, 72f};
	vLocal_39[59 /*3*/] = {-272f, -824f, 71f};
	vLocal_39[60 /*3*/] = {-230f, -723f, 80f};
	vLocal_39[61 /*3*/] = {1822f, 2044f, 62f};
	vLocal_39[62 /*3*/] = {2410f, 2907f, 44f};
	vLocal_39[63 /*3*/] = {2686f, 4858f, 36f};
	vLocal_39[64 /*3*/] = {-1046f, 4751f, 244f};
	vLocal_39[65 /*3*/] = {-213f, -2463f, 38f};
	vLocal_39[66 /*3*/] = {-597f, -2192f, 38f};
	vLocal_39[67 /*3*/] = {1036f, -980f, 41f};
	vLocal_39[68 /*3*/] = {980f, -837f, 42f};
	vLocal_39[69 /*3*/] = {1208f, -1173f, 38f};
}

int func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_50();
	iVar1 = func_48();
	if (iVar2 + iVar1 > 0)
	{
		func_47(32, iVar2 + iVar1);
	}
	if (iLocal_38)
	{
		iVar0 = iVar1;
		if (iVar1 >= 8)
		{
			func_43(291, 0, 0);
		}
	}
	else
	{
		iVar0 = iVar2;
		if (iVar2 >= 50)
		{
			_0x11FF1C80276097ED(joaat("sp0_water_cannon_deaths"), 100, 0);
		}
		else if (iVar2 >= 38)
		{
			_0x11FF1C80276097ED(joaat("sp0_water_cannon_deaths"), 75, 0);
		}
		else if (iVar2 >= 25)
		{
			func_43(290, 0, 0);
			_0x11FF1C80276097ED(joaat("sp0_water_cannon_deaths"), 50, 0);
		}
		else if (iVar2 >= 13)
		{
			_0x11FF1C80276097ED(joaat("sp0_water_cannon_deaths"), 25, 0);
		}
	}
	if (iVar1 == 15 && iVar2 == 50)
	{
		func_30(32, 1);
	}
	return iVar0;
}

int func_30(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_31(iParam0, iParam1);
}

bool func_31(int iParam0, int iParam1)
{
	if (func_52(14) && !func_42(iParam0))
	{
		return false;
	}
	if (has_achievement_been_passed(iParam0) && iParam1 == 1)
	{
		return false;
	}
	if (Global_25366 != 0 && !Global_69489)
	{
		return false;
	}
	if (func_41(&Global_2563627))
	{
		if (func_39(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_32(&Global_2563627, iParam0))
		{
			return true;
		}
	}
	else
	{
		if (!give_achievement_to_player(iParam0))
		{
			return false;
		}
		if (has_achievement_been_passed(iParam0))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_32(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_52(14) && !func_42(iParam1))
	{
		return false;
	}
	if (func_39(uParam0, iParam1))
	{
		return false;
	}
	if (func_38(uParam0) < 0f)
	{
		func_37(uParam0, 0);
	}
	func_35(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_33(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_33(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_52(14) && !func_42(iParam1))
	{
		return false;
	}
	if (func_39(uParam0, iParam1))
	{
		return false;
	}
	if (func_38(uParam0) < 0f)
	{
		func_37(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_34(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_34(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_35(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_36(uParam0, iVar0);
		iVar0++;
	}
	func_37(uParam0, Global_2563626 - 0.5f);
}

void func_36(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_37(auto uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		*uParam0.f_72 = 0f;
	}
	else
	{
		*uParam0.f_72 = fParam1;
	}
}

auto func_38(auto uParam0)
{
	return *uParam0.f_72;
}

int func_39(auto uParam0, int iParam1)
{
	return func_40(uParam0, iParam1) != -1;
}

int func_40(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_41(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_42(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
		
		default:
	}
	return false;
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_46(891 + iParam0, 1, -1, 1);
	}
	iVar0 = true;
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101154.f_8884[iParam0 /*12*/].f_6 == 11 || Global_101154.f_8884[iParam0 /*12*/].f_6 == 12)
		{
			iVar0 = false;
		}
	}
	else
	{
		Global_101154.f_8884[iParam0 /*12*/].f_5 = 1;
		Global_101154.f_8884[iParam0 /*12*/].f_10 = iParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (iVar0)
	{
		func_44();
	}
}

void func_44()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	Vector3 fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_100890 = 0;
	Global_100891 = 0;
	Global_100892 = 0;
	Global_100893 = 0;
	Global_100894 = 0;
	Global_100895 = 0;
	Global_100896 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101154.f_8884.f_3853;
	Global_101154.f_8884.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101154.f_8884[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101154.f_8884[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100890++;
					fVar1 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 3:
					Global_100891++;
					fVar2 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 5:
					Global_100892++;
					fVar3 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 7:
					Global_100893++;
					fVar4 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 9:
					Global_100894++;
					fVar5 += Global_101154.f_8884[iVar0 /*12*/].f_4 * 4f;
					break;
				
				case 11:
					Global_100895++;
					fVar6 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 13:
					Global_100896++;
					fVar7 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100873 > 0)
	{
		if (Global_100890 == Global_100873)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100874 > 0)
	{
		if (Global_100891 == Global_100874)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100875 > 0)
	{
		if (Global_100892 == Global_100875)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100876 > 0)
	{
		if (Global_100893 == Global_100876)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100877 > 0)
	{
		if (((Global_100894 == Global_100877 || Global_100877 * 10 / Global_100894 < 41) || Global_100894 > Global_100880) || Global_100894 == Global_100880)
		{
			if (!is_bit_set(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_100877, 0);
					set_bit(&(Global_101154.f_8884.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100878 > 0)
	{
		if (Global_100895 == Global_100878)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100879 > 0)
	{
		if (Global_100896 == Global_100879)
		{
			fVar7 = 5f;
		}
	}
	Global_101154.f_8884.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_100894 > Global_100880 || Global_100894 == Global_100880)
	{
		iVar9 = Global_100880;
	}
	else
	{
		iVar9 = Global_100894;
	}
	stat_set_int(joaat("num_missions_completed"), Global_100890, 1);
	stat_set_int(joaat("num_missions_available"), Global_100873, 1);
	stat_set_int(joaat("num_minigames_completed"), Global_100891, 1);
	stat_set_int(joaat("num_minigames_available"), Global_100874, 1);
	stat_set_int(joaat("num_oddjobs_completed"), Global_100892, 1);
	stat_set_int(joaat("num_oddjobs_available"), Global_100875, 1);
	stat_set_int(joaat("num_rndpeople_completed"), Global_100893, 1);
	stat_set_int(joaat("num_rndpeople_available"), Global_100876, 1);
	stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stat_set_int(joaat("num_rndevents_available"), Global_100880, 1);
	stat_set_int(joaat("num_misc_completed"), Global_100896 + Global_100895, 1);
	stat_set_int(joaat("num_misc_available"), Global_100879 + Global_100878, 1);
	Global_100897 = Global_100890 * 100 / Global_100873;
	Global_100899 = Global_100892 + Global_100891 * 100 / Global_100875 + Global_100874;
	Global_100898 = Global_100893 + iVar9 * 100 / Global_100876 + Global_100880;
	Global_100900 = Global_100895 + Global_100896 * 100 / Global_100878 + Global_100879;
	stat_set_float(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	stat_set_int(joaat("percent_story_missions"), Global_100897, 1);
	stat_set_int(joaat("percent_ambient_missions"), Global_100898, 1);
	stat_set_int(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_101154.f_8884.f_3853))
	{
		func_47(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_45() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_2();
				}
			}
		}
	}
}

auto func_45()
{
	return Global_25120;
}

int func_46(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = _0x80C75307B1C42837(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - _0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stat_set_bool_masked(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = _0x80C75307B1C42837(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - _0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stat_set_bool_masked(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = _0x80C75307B1C42837(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - _0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stat_set_bool_masked(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = _0x80C75307B1C42837(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - _0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stat_set_bool_masked(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = _0xC4BB08EE7907471E(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - _0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stat_set_bool_masked(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = _0xC4BB08EE7907471E(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - _0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stat_set_bool_masked(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = _0xBA52FF538ED2BC71(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - _0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stat_set_bool_masked(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = _0xBA52FF538ED2BC71(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - _0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stat_set_bool_masked(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = _0xBA52FF538ED2BC71(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - _0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stat_set_bool_masked(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = _0xBA52FF538ED2BC71(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - _0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stat_set_bool_masked(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = _0xBA52FF538ED2BC71(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - _0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stat_set_bool_masked(iVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_47(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return _0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		if (is_bit_set(Global_101154.f_8739.f_96, iVar1))
		{
			if (func_49(iVar1))
			{
				iVar0++;
			}
		}
		if (is_bit_set(Global_101154.f_8739.f_97, iVar1))
		{
			if (func_49(iVar1 + 32))
			{
				iVar0++;
			}
		}
		if (is_bit_set(Global_101154.f_8739.f_98, iVar1))
		{
			if (func_49(iVar1 + 64))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_49(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
			return true;
			break;
	}
	return false;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		if (is_bit_set(Global_101154.f_8739.f_96, iVar1))
		{
			if (!func_49(iVar1))
			{
				iVar0++;
			}
		}
		if (is_bit_set(Global_101154.f_8739.f_97, iVar1))
		{
			if (!func_49(iVar1 + 32))
			{
				iVar0++;
			}
		}
		if (is_bit_set(Global_101154.f_8739.f_98, iVar1))
		{
			if (!func_49(iVar1 + 64))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_51(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

int func_52(int iParam0)
{
	return Global_35711 == iParam0;
}

