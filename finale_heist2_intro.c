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
	auto uLocal_27 = 0;
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	auto uLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
#endregion

void main()
{
	auto uVar0;
	int iVar1;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_19();
	}
	set_mission_flag(1);
	func_18(0);
	func_17();
	_begin_enumerating_scripts();
	while (!iVar1)
	{
		uVar0 = _get_id_of_next_script_in_enumeration();
		if (GAMEPLAY::ARE_STRINGS_EQUAL(_get_thread_name(uVar0), "heist_ctrl_finale"))
		{
			iVar1 = true;
		}
	}
	_0x8D9DF6ECA8768583(uVar0);
	func_16();
	func_1(96.7f, -1288.1f, 28.1f, 104.5f, -1301f, 30f, 2f, 118.3f, -1309.7f, 29f, 120f, 1, 1, 1, 0, 0);
	func_19();
}

void func_1(Vector3 vParam0, Vector3 vParam1, float fParam2, Vector3 vParam3, Vector3 fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_2(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, iParam11, iParam12, iParam13, iParam14, iParam15);
}

void func_2(Vector3 vParam0, Vector3 vParam1, float fParam2, Vector3 vParam3, Vector3 fParam4, Vector3 vParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (iParam15)
	{
		iParam15 = false;
	}
	iVar2 = true;
	iVar3 = 0;
	iVar0 = get_players_last_vehicle();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!is_entity_a_mission_entity(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, 0);
			iVar3 = 1;
		}
		if (is_vehicle_driveable(iVar0, 0))
		{
			if (iParam18)
			{
				func_15(iVar0);
			}
			if (is_entity_in_angled_area(iVar0, vParam0, vParam3, fParam6, 0, true, 0))
			{
				iVar1 = true;
			}
			else
			{
				vVar10 = {ENTITY::GET_ENTITY_COORDS(iVar0, 1)};
				if ((vVar10.z > vParam0.z && vVar10.z < vParam3.z) || (vVar10.z > vParam3.z && vVar10.z < vParam0.z))
				{
					if (func_12(iVar0, vParam0, vParam3, fParam6))
					{
						iVar1 = true;
					}
				}
			}
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (is_vehicle_model(iVar0, joaat("taxi")))
				{
					if (get_ped_in_vehicle_seat(iVar0, -1) != PLAYER::PLAYER_PED_ID() && get_ped_in_vehicle_seat(iVar0, -1) != 0)
					{
						if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vParam0 + vParam3 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 20f)
						{
							iVar1 = true;
							iVar2 = false;
						}
					}
				}
			}
			if (iParam16)
			{
				if (func_4(iVar0, func_6(), 1))
				{
					iVar1 = false;
				}
			}
			if (iVar1)
			{
				if (!func_3(vParam11))
				{
					if (is_vehicle_driveable(iVar0, 0))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar0);
						_0xDF7E3EEB29642C38(iVar0, &vVar4, &vVar7);
						if (is_this_model_a_heli(iVar13))
						{
							vParam11.x += 3f;
							vParam11.y += 3f;
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							vParam11 = {vParam11 * Vector(1.1f, 1.1f, 1.1f)};
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							vParam11 = {vParam11 * Vector(1.2f, 1.2f, 1.2f)};
						}
						if (vVar7.x - vVar4.x > vParam11.x)
						{
							iVar2 = false;
						}
						else if (vVar7.y - vVar4.y > vParam11.y)
						{
							iVar2 = false;
						}
						else if (vVar7.z - vVar4.z > vParam11.z)
						{
							iVar2 = false;
						}
					}
				}
				if (is_vehicle_driveable(iVar0, 0))
				{
					if (iVar2)
					{
						clear_area_of_vehicles(vParam7, 5f, 0, 0, 0, 0, false);
						set_entity_heading(iVar0, fParam10);
						set_entity_coords(iVar0, vParam7, 1, false, 0, 1);
						set_vehicle_on_ground_properly(iVar0);
						if (iParam17)
						{
							set_vehicle_engine_on(iVar0, false, 1, 0);
							set_vehicle_doors_shut(iVar0, 1);
						}
					}
					else
					{
						if (!is_entity_a_mission_entity(iVar0) || !does_entity_belong_to_this_script(iVar0, 1))
						{
							set_entity_as_mission_entity(iVar0, true, 1);
						}
						if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
						{
							set_entity_coords(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1, false, 0, 1);
						}
						delete_vehicle(&iVar0);
					}
				}
			}
			if (iParam14)
			{
				clear_angled_area_of_vehicles(vParam0, vParam3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (is_entity_a_mission_entity(iVar0))
					{
						set_vehicle_as_no_longer_needed(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!is_entity_a_mission_entity(iVar0))
			{
				set_entity_as_mission_entity(iVar0, true, 0);
			}
			iVar14 = get_ped_in_vehicle_seat(iVar0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
			{
				set_entity_coords(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, false, 0, 1);
			}
			iVar15 = _get_vehicle_model_max_number_of_passengers(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = get_ped_in_vehicle_seat(iVar0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					set_entity_coords(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, false, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = get_ped_in_vehicle_seat(iVar0, true);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					set_entity_coords(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, false, 0, 1);
				}
				iVar14 = get_ped_in_vehicle_seat(iVar0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					set_entity_coords(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, false, 0, 1);
				}
			}
			delete_vehicle(&iVar0);
		}
	}
}

bool func_3(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_4(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_5(iParam1, iVar0, &sVar1, &uVar9))
	{
		if (!iParam2 || GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[uVar9], false))
		{
			if (is_vehicle_in_garage_area(&sVar1, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_5(int iParam0, int iParam1, char* sParam2, auto uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

auto func_6()
{
	func_7();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_7()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_11(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_10(PLAYER::PLAYER_PED_ID());
			if (func_9(iVar0) && (!func_8(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_9(Global_101154.f_1826.f_539.f_3549))
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

int func_8(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_12(int iParam0, Vector3 vParam1, Vector3 vParam2, float fParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	Vector3 vVar15;
	Vector3[] vVar18 = new Vector3[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		vParam1.z = vParam4.z;
		vVar0 = {func_14(vParam1 - vParam4)};
		vVar3 = {vVar0};
		vVar0.x = -vVar3.y;
		vVar0.y = vVar3.x;
		vVar0.z = 0f;
		vVar6 = {vParam1 - vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar9 = {vParam1 + vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar12 = {vParam4 - vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar15 = {vParam4 + vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iParam0), &Var31, &Var34);
		vVar18[0 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var31, Var31.f_1, 0f)};
		vVar18[1 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var31, Var34.f_1, 0f)};
		vVar18[2 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var34, Var31.f_1, 0f)};
		vVar18[3 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var34, Var34.f_1, 0f)};
		if (((((((((((((((func_13(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) || func_13(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15)) || func_13(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15)) || func_13(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12)) || func_13(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9)) || func_13(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15)) || func_13(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15)) || func_13(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12)) || func_13(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9)) || func_13(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15)) || func_13(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15)) || func_13(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12)) || func_13(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9)) || func_13(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15)) || func_13(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15)) || func_13(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12))
		{
			return true;
		}
	}
	return false;
}

bool func_13(struct<2> Param0, auto uParam1, struct<2> Param2, auto uParam3, struct<2> Param4, auto uParam5, struct<2> Param6, auto uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param3;
	fVar3 = Param3.f_1;
	fVar4 = Param6;
	fVar5 = Param6.f_1;
	fVar6 = Param9;
	fVar7 = Param9.f_1;
	fVar8 = fVar2 - fVar0;
	fVar9 = fVar3 - fVar1;
	fVar10 = fVar6 - fVar4;
	fVar11 = fVar7 - fVar5;
	fVar12 = -fVar9 * fVar0 - fVar4 + fVar8 * fVar1 - fVar5 / -fVar10 * fVar9 + fVar8 * fVar11;
	fVar13 = fVar10 * fVar1 - fVar5 - fVar11 * fVar0 - fVar4 / -fVar10 * fVar9 + fVar8 * fVar11;
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return true;
	}
	return false;
}

Vector3 func_14(Vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * Vector(fVar1, fVar1, fVar1)};
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_15(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (get_vehicle_engine_health(iParam0) <= 200f)
			{
				set_vehicle_engine_health(iParam0, 500f);
			}
			if (get_vehicle_petrol_tank_health(iParam0) <= 700f)
			{
				set_vehicle_engine_health(iParam0, 900f);
			}
			if (get_entity_health(iParam0) < 200)
			{
				set_vehicle_engine_health(iParam0, 500f);
			}
		}
	}
}

void func_16()
{
	Global_100178 = 1;
}

void func_17()
{
	int iVar0;
	
	iVar0 = func_6();
	switch (iVar0)
	{
		case 0:
			_request_cutscene_2("BS_2A_2B_INT", 12, 8);
			break;
		
		case 1:
			_request_cutscene_2("BS_2A_2B_INT", 14, 8);
			break;
		
		case 2:
			request_cutscene("BS_2A_2B_INT", 8);
			break;
	}
	while (!has_this_cutscene_loaded("BS_2A_2B_INT"))
	{
		wait(0);
	}
}

void func_18(int iParam0)
{
	Global_68319.f_138 = iParam0;
}

void func_19()
{
	func_24(24, 1);
	func_20(1, 0);
	terminate_this_thread();
}

void func_20(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	auto uVar2;
	
	if (!Global_55751)
	{
		Global_55751 = iParam1;
	}
	if (iParam0)
	{
		if ((func_23(0) && Global_69735.f_1 == 1) && func_22(Global_69735))
		{
		}
		else
		{
			Global_55749 = 1;
		}
	}
	if (Global_101154.f_7775 || func_23(0))
	{
		iVar0 = func_21();
		uVar1 = Global_82363[iVar0 /*5*/];
		uVar2 = Global_69758.f_109[uVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101154.f_7775)
			{
			}
			return;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_82363[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_82363[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		GAMEPLAY::SET_BIT(&(Global_82363[iVar0 /*5*/].f_1), 4);
		GAMEPLAY::SET_BIT(&Global_69737, true);
		Global_69753 = uVar2;
		Global_69754 = GAMEPLAY::GET_GAME_TIMER();
	}
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_82363[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_22(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return true;
			break;
		
		case 86:
			return true;
			break;
		
		case 91:
			return true;
			break;
		
		default:
			return false;
			break;
	}
	return false;
}

int func_23(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_24(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_101154.f_7775.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_101154.f_7775.f_99.f_58[iParam0] = iParam1;
}

