#region Local Var
	int iLocal_0 = 0;
	auto uLocal_1 = 0;
	auto uLocal_2 = 5;
	auto uLocal_3 = 0;
	auto uLocal_4 = 0;
	auto uLocal_5 = 0;
	auto uLocal_6 = 0;
	auto uLocal_7 = 0;
	auto uLocal_8 = 0;
	auto uLocal_9 = 0;
	auto uLocal_10 = 0;
	auto uLocal_11 = 0;
	auto uLocal_12 = 0;
	auto uLocal_13 = 0;
	auto uLocal_14 = 0;
	auto uLocal_15 = 0;
	auto uLocal_16 = 0;
	auto uLocal_17 = 0;
	auto uLocal_18 = 5;
	auto uLocal_19 = 0;
	auto uLocal_20 = 0;
	auto uLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
#endregion

void main()
{
	if (_get_number_of_instances_of_streamed_script(joaat("wp_partyboombox")) > 1)
	{
		terminate_this_thread();
	}
	if (has_force_cleanup_occurred(18))
	{
		func_1();
	}
	while (true)
	{
		wait(false);
		if (!is_world_point_within_brain_activation_range())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (get_clock_hours() >= 22 || get_clock_hours() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!is_ipl_active("ID2_21_G_Night"))
				{
					request_ipl("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!is_new_load_scene_active() && !is_player_switch_in_progress())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (is_ipl_active("ID2_21_G_Night"))
	{
		remove_ipl("ID2_21_G_Night");
	}
	terminate_this_thread();
}

