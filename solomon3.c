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
	auto uLocal_30 = -1;
	auto uLocal_31 = 0;
	auto uLocal_32 = 0;
	auto uLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 1000;
	auto uLocal_38 = 1000;
	auto uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	float fLocal_51 = 0;
	float fLocal_52 = 0;
	float fLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	auto uLocal_56 = 0;
	auto uLocal_57 = 0;
	float fLocal_58 = 0;
	float fLocal_59 = 0;
	float fLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	auto uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	float[] fLocal_109 = new float[175];
	float[] fLocal_285 = new float[175];
	float[] fLocal_461 = new float[175];
	float[] fLocal_637 = new float[175];
	float[] fLocal_813 = new float[175];
	float fLocal_989 = 0;
	float fLocal_990 = 0;
	float fLocal_991 = 0;
	float fLocal_992 = 0;
	float[] fLocal_993 = new float[35];
	float[] fLocal_1029 = new float[35];
	float[] fLocal_1065 = new float[35];
	float[] fLocal_1101 = new float[35];
	float[] fLocal_1137 = new float[35];
	float[] fLocal_1173 = new float[35];
	float[] fLocal_1209 = new float[15];
	float[] fLocal_1225 = new float[15];
	float[] fLocal_1241 = new float[15];
	float[] fLocal_1257 = new float[15];
	Vector3 fLocal_1273 = 0;
	Vector3 fLocal_1274 = 0;
	Vector3 fLocal_1275 = 0;
	float fLocal_1276 = 0;
	float fLocal_1277 = 0;
	float fLocal_1278 = 0;
	Vector3 fLocal_1279 = 0;
	float fLocal_1280 = 0;
	float fLocal_1281 = 0;
	float fLocal_1282 = 0;
	float fLocal_1283 = 0;
	float fLocal_1284 = 0;
	float fLocal_1285 = 0;
	float fLocal_1286 = 0;
	float fLocal_1287 = 0;
	float fLocal_1288 = 0;
	Vector3 fLocal_1289 = 0;
	Vector3 fLocal_1290 = 0;
	float fLocal_1291 = 0;
	float fLocal_1292 = 0;
	float fLocal_1293 = 0;
	int[] iLocal_1294 = new int[175];
	int[] iLocal_1470 = new int[175];
	int[] iLocal_1646 = new int[175];
	int[] iLocal_1822 = new int[35];
	int[] iLocal_1858 = new int[35];
	int[] iLocal_1894 = new int[35];
	int[] iLocal_1930 = new int[15];
	int iLocal_1946 = 0;
	int iLocal_1947 = 0;
	int iLocal_1948 = 0;
	int iLocal_1949 = 0;
	int iLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	int iLocal_1953 = 0;
	int iLocal_1954 = 0;
	int iLocal_1955 = 0;
	int iLocal_1956 = 0;
	int iLocal_1957 = 0;
	int iLocal_1958 = 0;
	int iLocal_1959 = 0;
	int iLocal_1960 = 0;
	int iLocal_1961 = 0;
	int iLocal_1962 = 0;
	Vector3[] vLocal_1963 = new Vector3[175];
	Vector3[] vLocal_2489 = new Vector3[15];
	Vector3[] vLocal_2535 = new Vector3[35];
	Vector3 vLocal_2641 = 0;
	Vector3 vLocal_2644 = 0;
	Vector3 vLocal_2647 = 0;
	Vector3 vLocal_2650 = 0;
	Vector3 vLocal_2653 = 0;
	Vector3 vLocal_2656 = 0;
	Vector3 vLocal_2659 = 0;
	Vector3 vLocal_2662 = 0;
	Vector3 vLocal_2665 = 0;
	char[64] cLocal_2668 = 0;
	int iLocal_2684 = 0;
	int[] iLocal_2685 = new int[175];
	int[] iLocal_2861 = new int[15];
	int[] iLocal_2877 = new int[35];
	int iLocal_2913 = 0;
	int iLocal_2914 = 0;
	int iLocal_2915 = 0;
	int[] iLocal_2916 = new int[175];
	int[] iLocal_3092 = new int[12];
	int[] iLocal_3105 = new int[15];
	int[] iLocal_3121 = new int[35];
	int[] iLocal_3157 = new int[6];
	int iLocal_3164 = 0;
	int iLocal_3165 = 0;
	int iLocal_3166 = 0;
	auto uLocal_3167 = 12;
	auto uLocal_3168 = 0;
	auto uLocal_3169 = 0;
	auto uLocal_3170 = 0;
	auto uLocal_3171 = 0;
	auto uLocal_3172 = 0;
	auto uLocal_3173 = 0;
	auto uLocal_3174 = 0;
	auto uLocal_3175 = 0;
	auto uLocal_3176 = 0;
	auto uLocal_3177 = 0;
	auto uLocal_3178 = 0;
	auto uLocal_3179 = 0;
	int iLocal_3180 = 0;
	int iLocal_3181 = 0;
	int iLocal_3182 = 0;
	int iLocal_3183 = 0;
	int iLocal_3184 = 0;
	int iLocal_3185 = 0;
	int iLocal_3186 = 0;
	int iLocal_3187 = 0;
	int iLocal_3188 = 0;
	int iLocal_3189 = 0;
	int iLocal_3190 = 0;
	int iLocal_3191 = 0;
	int iLocal_3192 = 0;
	int iLocal_3193 = 0;
	int iLocal_3194 = 0;
	int iLocal_3195 = 0;
	int iLocal_3196 = 0;
	int iLocal_3197 = 0;
	int iLocal_3198 = 0;
	int iLocal_3199 = 0;
	int iLocal_3200 = 0;
	int iLocal_3201 = 0;
	int iLocal_3202 = 0;
	int iLocal_3203 = 0;
	int iLocal_3204 = 0;
	int iLocal_3205 = 0;
	int iLocal_3206 = 0;
	int iLocal_3207 = 0;
	int iLocal_3208 = 0;
	int iLocal_3209 = 0;
	int iLocal_3210 = 0;
	int iLocal_3211 = 0;
	int iLocal_3212 = 0;
	int iLocal_3213 = 0;
	int iLocal_3214 = 0;
	int iLocal_3215 = 0;
	int iLocal_3216 = 0;
	int iLocal_3217 = 0;
	int iLocal_3218 = 0;
	int iLocal_3219 = 0;
	int iLocal_3220 = 0;
	int iLocal_3221 = 0;
	int iLocal_3222 = 0;
	int[] iLocal_3223 = new int[4];
	int iLocal_3228 = 0;
	var[] uLocal_3229 = new var[3];
	int[] iLocal_3233 = new int[11];
	int iLocal_3245 = 0;
	int iLocal_3246 = 0;
	int iLocal_3247 = 0;
	int iLocal_3248 = 0;
	int iLocal_3249 = 0;
	int iLocal_3250 = 0;
	int[] iLocal_3251 = new int[2];
	int[] iLocal_3254 = new int[2];
	int iLocal_3257 = 0;
	int iLocal_3258 = 0;
	int iLocal_3259 = 0;
	int[] iLocal_3260 = new int[2];
	int iLocal_3263 = 0;
	int iLocal_3264 = 0;
	int iLocal_3265 = 0;
	int iLocal_3266 = 0;
	int iLocal_3267 = 0;
	int[] iLocal_3268 = new int[2];
	int iLocal_3271 = 0;
	int[] iLocal_3272 = new int[2];
	int iLocal_3275 = 0;
	int iLocal_3276 = 0;
	int iLocal_3277 = 0;
	int iLocal_3278 = 0;
	int[] iLocal_3279 = new int[2];
	int iLocal_3282 = 0;
	int iLocal_3283 = 0;
	int iLocal_3284 = 0;
	int iLocal_3285 = 0;
	int iLocal_3286 = 0;
	int iLocal_3287 = 0;
	int iLocal_3288 = 0;
	int iLocal_3289 = 0;
	int iLocal_3290 = 0;
	int iLocal_3291 = 0;
	int iLocal_3292 = 0;
	int iLocal_3293 = 0;
	Vector3 vLocal_3294 = 0;
	Vector3 vLocal_3297 = 0;
	Vector3 vLocal_3300 = 0;
	Vector3 vLocal_3303 = 0;
	auto uLocal_3306 = 0;
	auto uLocal_3307 = 0;
	auto uLocal_3308 = 0;
	auto uLocal_3309 = 0;
	auto uLocal_3310 = 0;
	auto uLocal_3311 = 0;
	Vector3 vLocal_3312 = 0;
	Vector3 vLocal_3315 = 0;
	Vector3 vLocal_3318 = 0;
	Vector3 fLocal_3321 = 0;
	Vector3 fLocal_3322 = 0;
	float fLocal_3323 = 0;
	float fLocal_3324 = 0;
	Vector3 fLocal_3325 = 0;
	float fLocal_3326 = 0;
	int iLocal_3327 = 0;
	int iLocal_3328 = 0;
	auto uLocal_3329 = 0;
	int iLocal_3330 = 0;
	int iLocal_3331 = 0;
	int iLocal_3332 = 0;
	int iLocal_3333 = 0;
	int iLocal_3334 = 0;
	int iLocal_3335 = 0;
	int iLocal_3336 = 0;
	int iLocal_3337 = 0;
	int iLocal_3338 = 0;
	int iLocal_3339 = 0;
	int iLocal_3340 = 0;
	int iLocal_3341 = 0;
	int iLocal_3342 = 0;
	int iLocal_3343 = 0;
	int iLocal_3344 = 0;
	int iLocal_3345 = 0;
	int iLocal_3346 = 0;
	int iLocal_3347 = 0;
	int iLocal_3348 = 0;
	int iLocal_3349 = 0;
	int iLocal_3350 = 0;
	int iLocal_3351 = 0;
	int iLocal_3352 = 0;
	int iLocal_3353 = 0;
	int iLocal_3354 = 0;
	int iLocal_3355 = 0;
	int iLocal_3356 = 0;
	int iLocal_3357 = 0;
	int iLocal_3358 = 0;
	int iLocal_3359 = 0;
	int iLocal_3360 = 0;
	int iLocal_3361 = 0;
	int iLocal_3362 = 0;
	int iLocal_3363 = 0;
	int iLocal_3364 = 0;
	int[] iLocal_3365 = new int[3];
	int[] iLocal_3369 = new int[2];
	int iLocal_3372 = 0;
	int iLocal_3373 = 0;
	int iLocal_3374 = 0;
	int iLocal_3375 = 0;
	int iLocal_3376 = 0;
	int iLocal_3377 = 0;
	int iLocal_3378 = 0;
	int iLocal_3379 = 0;
	int iLocal_3380 = 0;
	int iLocal_3381 = 0;
	int iLocal_3382 = 0;
	int iLocal_3383 = 0;
	int iLocal_3384 = 0;
	int iLocal_3385 = 0;
	int iLocal_3386 = 0;
	int iLocal_3387 = 0;
	int iLocal_3388 = 0;
	int iLocal_3389 = 0;
	int iLocal_3390 = 0;
	int iLocal_3391 = 0;
	int iLocal_3392 = 0;
	int iLocal_3393 = 0;
	int iLocal_3394 = 0;
	int iLocal_3395 = 0;
	int iLocal_3396 = 0;
	int iLocal_3397 = 0;
	int iLocal_3398 = 0;
	int iLocal_3399 = 0;
	auto uLocal_3400 = 0;
	int iLocal_3401 = 0;
	int iLocal_3402 = 0;
	int iLocal_3403 = 0;
	int[] iLocal_3404 = new int[25];
	int iLocal_3430 = 0;
	int iLocal_3431 = 0;
	int iLocal_3432 = 0;
	int iLocal_3433 = 0;
	int iLocal_3434 = 0;
	int iLocal_3435 = 0;
	int iLocal_3436 = 0;
	int iLocal_3437 = 0;
	int iLocal_3438 = 0;
	int iLocal_3439 = 0;
	int iLocal_3440 = 0;
	int iLocal_3441 = 0;
	int iLocal_3442 = 0;
	int iLocal_3443 = 0;
	int iLocal_3444 = 0;
	int[] iLocal_3445 = new int[19];
	int iLocal_3465 = 0;
	int iLocal_3466 = 0;
	int iLocal_3467 = 0;
	int iLocal_3468 = 0;
	int iLocal_3469 = 0;
	int iLocal_3470 = 0;
	int iLocal_3471 = 0;
	int iLocal_3472 = 0;
	int iLocal_3473 = 0;
	int iLocal_3474 = 0;
	int iLocal_3475 = 0;
	int iLocal_3476 = 0;
	int iLocal_3477 = 0;
	int iLocal_3478 = 0;
	int iLocal_3479 = 0;
	int[] iLocal_3480 = new int[2];
	int[] iLocal_3483 = new int[2];
	int iLocal_3486 = 0;
	int iLocal_3487 = 0;
	int iLocal_3488 = 0;
	int iLocal_3489 = 0;
	int[] iLocal_3490 = new int[7];
	int[] iLocal_3498 = new int[7];
	int iLocal_3506 = 0;
	int iLocal_3507 = 0;
	int iLocal_3508 = 0;
	int iLocal_3509 = 0;
	int iLocal_3510 = 0;
	int iLocal_3511 = 0;
	int iLocal_3512 = 0;
	int iLocal_3513 = 0;
	int iLocal_3514 = 0;
	int iLocal_3515 = 0;
	int[] iLocal_3516 = new int[3];
	int[] iLocal_3520 = new int[2];
	int iLocal_3523 = 0;
	int[] iLocal_3524 = new int[4];
	int iLocal_3529 = 0;
	int iLocal_3530 = 0;
	int iLocal_3531 = 0;
	int iLocal_3532 = 0;
	int iLocal_3533 = 0;
	int iLocal_3534 = 0;
	int iLocal_3535 = 0;
	int iLocal_3536 = 0;
	int iLocal_3537 = 0;
	int iLocal_3538 = 0;
	int iLocal_3539 = 0;
	int iLocal_3540 = 0;
	int iLocal_3541 = 0;
	int iLocal_3542 = 0;
	int[] iLocal_3543 = new int[3];
	int[] iLocal_3547 = new int[3];
	int iLocal_3551 = 0;
	int iLocal_3552 = 0;
	int iLocal_3553 = 0;
	int iLocal_3554 = 0;
	int iLocal_3555 = 0;
	int iLocal_3556 = 0;
	int iLocal_3557 = 0;
	int iLocal_3558 = 0;
	int iLocal_3559 = 0;
	int iLocal_3560 = 0;
	int iLocal_3561 = 0;
	int iLocal_3562 = 0;
	int iLocal_3563 = 0;
	int iLocal_3564 = 0;
	int iLocal_3565 = 0;
	int iLocal_3566 = 0;
	int iLocal_3567 = 0;
	int iLocal_3568 = 0;
	int iLocal_3569 = 0;
	int iLocal_3570 = 0;
	int[] iLocal_3571 = new int[4];
	int iLocal_3576 = 0;
	char* sLocal_3577 = 0;
	auto uLocal_3578 = 16;
	auto uLocal_3579 = 0;
	auto uLocal_3580 = 0;
	auto uLocal_3581 = 0;
	auto uLocal_3582 = 0;
	auto uLocal_3583 = 0;
	auto uLocal_3584 = 0;
	auto uLocal_3585 = 0;
	auto uLocal_3586 = 0;
	auto uLocal_3587 = 0;
	auto uLocal_3588 = 0;
	auto uLocal_3589 = 0;
	auto uLocal_3590 = 0;
	auto uLocal_3591 = 0;
	auto uLocal_3592 = 0;
	auto uLocal_3593 = 0;
	auto uLocal_3594 = 0;
	auto uLocal_3595 = 0;
	auto uLocal_3596 = 0;
	auto uLocal_3597 = 0;
	auto uLocal_3598 = 0;
	auto uLocal_3599 = 0;
	auto uLocal_3600 = 0;
	auto uLocal_3601 = 0;
	auto uLocal_3602 = 0;
	auto uLocal_3603 = 0;
	auto uLocal_3604 = 0;
	auto uLocal_3605 = 0;
	auto uLocal_3606 = 0;
	auto uLocal_3607 = 0;
	auto uLocal_3608 = 0;
	auto uLocal_3609 = 0;
	auto uLocal_3610 = 0;
	auto uLocal_3611 = 0;
	auto uLocal_3612 = 0;
	auto uLocal_3613 = 0;
	auto uLocal_3614 = 0;
	auto uLocal_3615 = 0;
	auto uLocal_3616 = 0;
	auto uLocal_3617 = 0;
	auto uLocal_3618 = 0;
	auto uLocal_3619 = 0;
	auto uLocal_3620 = 0;
	auto uLocal_3621 = 0;
	auto uLocal_3622 = 0;
	auto uLocal_3623 = 0;
	auto uLocal_3624 = 0;
	auto uLocal_3625 = 0;
	auto uLocal_3626 = 0;
	auto uLocal_3627 = 0;
	auto uLocal_3628 = 0;
	auto uLocal_3629 = 0;
	auto uLocal_3630 = 0;
	auto uLocal_3631 = 0;
	auto uLocal_3632 = 0;
	auto uLocal_3633 = 0;
	auto uLocal_3634 = 0;
	auto uLocal_3635 = 0;
	auto uLocal_3636 = 0;
	auto uLocal_3637 = 0;
	auto uLocal_3638 = 0;
	auto uLocal_3639 = 0;
	auto uLocal_3640 = 0;
	auto uLocal_3641 = 0;
	auto uLocal_3642 = 0;
	auto uLocal_3643 = 0;
	auto uLocal_3644 = 0;
	auto uLocal_3645 = 0;
	auto uLocal_3646 = 0;
	auto uLocal_3647 = 0;
	auto uLocal_3648 = 0;
	auto uLocal_3649 = 0;
	auto uLocal_3650 = 0;
	auto uLocal_3651 = 0;
	auto uLocal_3652 = 0;
	auto uLocal_3653 = 0;
	auto uLocal_3654 = 0;
	auto uLocal_3655 = 0;
	auto uLocal_3656 = 0;
	auto uLocal_3657 = 0;
	auto uLocal_3658 = 0;
	auto uLocal_3659 = 0;
	auto uLocal_3660 = 0;
	auto uLocal_3661 = 0;
	auto uLocal_3662 = 0;
	auto uLocal_3663 = 0;
	auto uLocal_3664 = 0;
	auto uLocal_3665 = 0;
	auto uLocal_3666 = 0;
	auto uLocal_3667 = 0;
	auto uLocal_3668 = 0;
	auto uLocal_3669 = 0;
	auto uLocal_3670 = 0;
	auto uLocal_3671 = 0;
	auto uLocal_3672 = 0;
	auto uLocal_3673 = 0;
	auto uLocal_3674 = 0;
	auto uLocal_3675 = 0;
	auto uLocal_3676 = 0;
	auto uLocal_3677 = 0;
	auto uLocal_3678 = 0;
	auto uLocal_3679 = 0;
	auto uLocal_3680 = 0;
	auto uLocal_3681 = 0;
	auto uLocal_3682 = 0;
	auto uLocal_3683 = 0;
	auto uLocal_3684 = 0;
	auto uLocal_3685 = 0;
	auto uLocal_3686 = 0;
	auto uLocal_3687 = 0;
	auto uLocal_3688 = 0;
	auto uLocal_3689 = 0;
	auto uLocal_3690 = 0;
	auto uLocal_3691 = 0;
	auto uLocal_3692 = 0;
	auto uLocal_3693 = 0;
	auto uLocal_3694 = 0;
	auto uLocal_3695 = 0;
	auto uLocal_3696 = 0;
	auto uLocal_3697 = 0;
	auto uLocal_3698 = 0;
	auto uLocal_3699 = 0;
	auto uLocal_3700 = 0;
	auto uLocal_3701 = 0;
	auto uLocal_3702 = 0;
	auto uLocal_3703 = 0;
	auto uLocal_3704 = 0;
	auto uLocal_3705 = 0;
	auto uLocal_3706 = 0;
	auto uLocal_3707 = 0;
	auto uLocal_3708 = 0;
	auto uLocal_3709 = 0;
	auto uLocal_3710 = 0;
	auto uLocal_3711 = 0;
	auto uLocal_3712 = 0;
	auto uLocal_3713 = 0;
	auto uLocal_3714 = 0;
	auto uLocal_3715 = 0;
	auto uLocal_3716 = 0;
	auto uLocal_3717 = 0;
	auto uLocal_3718 = 0;
	auto uLocal_3719 = 0;
	auto uLocal_3720 = 0;
	auto uLocal_3721 = 0;
	auto uLocal_3722 = 0;
	auto uLocal_3723 = 0;
	auto uLocal_3724 = 0;
	auto uLocal_3725 = 0;
	auto uLocal_3726 = 0;
	auto uLocal_3727 = 0;
	auto uLocal_3728 = 0;
	auto uLocal_3729 = 0;
	auto uLocal_3730 = 0;
	auto uLocal_3731 = 0;
	auto uLocal_3732 = 0;
	auto uLocal_3733 = 0;
	auto uLocal_3734 = 0;
	auto uLocal_3735 = 0;
	auto uLocal_3736 = 0;
	auto uLocal_3737 = 0;
	auto uLocal_3738 = 0;
	auto uLocal_3739 = 0;
	auto uLocal_3740 = 0;
	auto uLocal_3741 = 0;
	auto uLocal_3742 = 0;
	auto uLocal_3743 = 0;
	auto uLocal_3744 = 0;
	auto uLocal_3745 = 0;
	auto uLocal_3746 = 0;
	auto uLocal_3747 = 0;
	auto uLocal_3748 = 0;
	auto uLocal_3749 = 0;
	auto uLocal_3750 = 21;
	auto uLocal_3751 = 6;
	auto uLocal_3752 = 0;
	auto uLocal_3753 = 0;
	auto uLocal_3754 = 0;
	int[] iLocal_3755 = new int[3];
	int iLocal_3759 = 0;
	int iLocal_3760 = 0;
	int iLocal_3761 = 0;
	int iLocal_3762 = 0;
	int iLocal_3763 = 0;
	int iLocal_3764 = 0;
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
	iLocal_55 = 3;
	fLocal_58 = 80f;
	fLocal_59 = 140f;
	fLocal_60 = 180f;
	iLocal_66 = 1;
	iLocal_67 = 65;
	iLocal_68 = 49;
	iLocal_69 = 64;
	iLocal_73 = _0x4A9923385BDB9DAD();
	iLocal_74 = _get_blip_info_id_iterator();
	iLocal_78 = true;
	iLocal_85 = true;
	iLocal_107 = true;
	fLocal_1273 = 120f;
	fLocal_1274 = 0f;
	fLocal_1276 = 1f;
	fLocal_1277 = 0f;
	fLocal_1278 = 1f;
	fLocal_1279 = 30f;
	fLocal_1281 = 1f;
	fLocal_1282 = 5f;
	fLocal_1283 = 1f;
	fLocal_1284 = 1f;
	fLocal_1285 = 100f;
	fLocal_1286 = 100f;
	fLocal_1287 = 0f;
	fLocal_1288 = 7000f;
	fLocal_1289 = 0f;
	fLocal_1290 = 0f;
	fLocal_1291 = 0.3f;
	fLocal_1292 = 0.5f;
	fLocal_1293 = 50f;
	iLocal_1949 = -1;
	iLocal_1957 = -1;
	iLocal_1958 = -1;
	vLocal_3294 = {-1024.1f, -485.3321f, 35.9816f};
	vLocal_3297 = {-428.0263f, -2153.577f, 9.2997f};
	vLocal_3300 = {-498.7f, -2136.5f, 8.4f};
	vLocal_3312 = {-272.8615f, -2186.932f, 9.3174f};
	fLocal_3321 = 209.7233f;
	fLocal_3322 = 90.947f;
	fLocal_3325 = 46.7161f;
	if (func_393(0))
	{
		func_386(24, 0);
	}
	register_script_with_audio(0);
	_set_weather_type_over_time("EXTRASUNNY", 20f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_384(PLAYER::PLAYER_PED_ID(), 0);
		trigger_music_event("TRV4_FAIL");
		func_382();
		func_380();
	}
	func_379(1);
	set_mission_flag(1);
	iLocal_3181 = 0;
	iLocal_3180 = 0;
	while (true)
	{
		_0x208784099002BC30("M_LegalTrouble", 0);
		if (iLocal_3207 > GAMEPLAY::GET_GAME_TIMER())
		{
			_0xAF66DCEE6609B148();
		}
		func_375();
		func_374();
		func_372();
		func_368();
		func_367();
		switch (iLocal_3180)
		{
			case 0:
				func_363();
				break;
			
			case 1:
				func_318();
				break;
			
			case 2:
				func_312();
				break;
			
			case 3:
				func_309();
				break;
			
			case 4:
				func_220();
				break;
			
			case 5:
				func_208();
				break;
			
			case 6:
				func_202();
				break;
			
			case 7:
				func_192();
				break;
			
			case 8:
				func_5();
				break;
			
			case 9:
				break;
			
			case 10:
				break;
			
			case 11:
				break;
		}
		wait(false);
		func_1();
	}
}

void func_1()
{
	if (iLocal_3443 == 0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_4(PLAYER::PLAYER_PED_ID(), 476);
			iLocal_3443 = 1;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_3444 == 0)
			{
				iLocal_3275 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
				{
					if (is_vehicle_driveable(iLocal_3275, 0))
					{
						func_3(iLocal_3275, -1);
						func_4(iLocal_3275, 479);
						iLocal_3444 = 1;
					}
				}
			}
		}
		else
		{
			func_4(0, 479);
			func_3(0, -1);
			if (iLocal_3444 == 1)
			{
				iLocal_3444 = 0;
			}
		}
	}
	if (iLocal_3445[0] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3229[0]))
		{
			if (PED::IS_PED_INJURED(uLocal_3229[0]))
			{
				iLocal_3191++;
				iLocal_3445[0] = 1;
			}
		}
	}
	if (iLocal_3445[1] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3229[1]))
		{
			if (PED::IS_PED_INJURED(uLocal_3229[1]))
			{
				iLocal_3191++;
				iLocal_3445[1] = 1;
			}
		}
	}
	if (iLocal_3445[2] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3229[2]))
		{
			if (PED::IS_PED_INJURED(uLocal_3229[2]))
			{
				iLocal_3191++;
				iLocal_3445[2] = 1;
			}
		}
	}
	if (iLocal_3445[3] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_3233[0]))
			{
				iLocal_3191++;
				iLocal_3445[3] = 1;
			}
		}
	}
	if (iLocal_3445[4] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_3233[1]))
			{
				iLocal_3191++;
				iLocal_3445[4] = 1;
			}
		}
	}
	if (iLocal_3445[5] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[2]))
		{
			if (PED::IS_PED_INJURED(iLocal_3233[2]))
			{
				iLocal_3191++;
				iLocal_3445[5] = 1;
			}
		}
	}
	if (iLocal_3445[6] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[3]))
		{
			if (PED::IS_PED_INJURED(iLocal_3233[3]))
			{
				iLocal_3191++;
				iLocal_3445[6] = 1;
			}
		}
	}
	if (iLocal_3445[7] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[4]))
		{
			if (PED::IS_PED_INJURED(iLocal_3233[4]))
			{
				iLocal_3191++;
				iLocal_3445[7] = 1;
			}
		}
	}
	if (iLocal_3445[8] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[5]))
		{
			if (PED::IS_PED_INJURED(iLocal_3233[5]))
			{
				iLocal_3191++;
				iLocal_3445[8] = 1;
			}
		}
	}
	if (iLocal_3445[9] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[6]))
		{
			if (PED::IS_PED_INJURED(iLocal_3233[6]))
			{
				iLocal_3191++;
				iLocal_3445[9] = 1;
			}
		}
	}
	if (iLocal_3445[10] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[7]))
		{
			if (PED::IS_PED_INJURED(iLocal_3233[7]))
			{
				iLocal_3191++;
				iLocal_3445[10] = 1;
			}
		}
	}
	if (iLocal_3445[11] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[8]))
		{
			if (PED::IS_PED_INJURED(iLocal_3233[8]))
			{
				iLocal_3191++;
				iLocal_3445[11] = 1;
			}
		}
	}
	if (iLocal_3445[12] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[9]))
		{
			if (PED::IS_PED_INJURED(iLocal_3233[9]))
			{
				iLocal_3191++;
				iLocal_3445[12] = 1;
			}
		}
	}
	if (iLocal_3445[13] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[10]))
		{
			if (PED::IS_PED_INJURED(iLocal_3233[10]))
			{
				iLocal_3191++;
				iLocal_3445[13] = 1;
			}
		}
	}
	if (iLocal_3445[14] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3248))
		{
			if (PED::IS_PED_INJURED(iLocal_3248))
			{
				iLocal_3191++;
				iLocal_3445[14] = 1;
			}
		}
	}
	if (iLocal_3445[15] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3249))
		{
			if (PED::IS_PED_INJURED(iLocal_3249))
			{
				iLocal_3191++;
				iLocal_3445[15] = 1;
			}
		}
	}
	if (iLocal_3445[16] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250))
		{
			if (PED::IS_PED_INJURED(iLocal_3250))
			{
				iLocal_3191++;
				iLocal_3445[16] = 1;
			}
		}
	}
	if (iLocal_3445[17] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3251[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_3251[0]))
			{
				iLocal_3191++;
				iLocal_3445[17] = 1;
			}
		}
	}
	if (iLocal_3180 == 8)
	{
		if (get_player_wanted_level(player_id()) != 0)
		{
			if (iLocal_3465 == 0)
			{
				func_2(482, 0);
				iLocal_3465 = 1;
			}
		}
	}
}

void func_2(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55759 = iParam0;
	if (!Global_55757)
	{
		Global_55757 = 1;
	}
	if (iParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_67845[iVar0 /*9*/] == iParam0)
			{
				Global_67845[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_3(int iParam0, int iParam1)
{
	Global_55760 = iParam0;
	Global_55761 = iParam1;
}

void func_4(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55762 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (iParam1 == -1 || Global_67845[iVar0 /*9*/] == iParam1)
		{
			if (Global_67845[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67845[iVar0 /*9*/].f_6 = iParam0;
				Global_67845[iVar0 /*9*/].f_7 = 1;
				Global_67845[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_5()
{
	if (is_screen_faded_out())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267))
		{
			set_vehicle_door_open(iLocal_3267, false, 0, 1);
		}
	}
	if (iLocal_3181 > 0)
	{
		func_190();
	}
	if (iLocal_3181 == 0)
	{
		if (iLocal_3345 == 1)
		{
			func_104();
			iLocal_3345 = 0;
		}
		func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_3374 = 0;
		iLocal_3375 = 0;
		iLocal_3376 = 0;
		iLocal_3346 = 0;
		iLocal_3347 = 0;
		iLocal_3348 = 0;
		iLocal_3430 = 0;
		iLocal_3431 = 0;
		iLocal_3432 = 0;
		iLocal_3469 = 0;
		iLocal_3470 = 0;
		iLocal_3474 = 0;
		iLocal_3477 = 0;
		iLocal_3185 = 0;
		request_anim_dict("Misssolomon_3");
		STREAMING::REQUEST_MODEL(joaat("oracle2"));
		STREAMING::REQUEST_MODEL(joaat("baller2"));
		if (does_blip_exist(iLocal_3285))
		{
			remove_blip(&iLocal_3285);
		}
		if (get_is_waypoint_recording_loaded("Trev4_5"))
		{
			use_waypoint_recording_as_assisted_movement_route("Trev4_5", 0, 1f, 1f);
			remove_waypoint_recording("Trev4_5");
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
		{
			set_vehicle_as_no_longer_needed(&iLocal_3259);
		}
		settimera(false);
		if (is_screen_faded_out())
		{
			if (!func_24())
			{
				load_scene(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			func_21(0, -1, 1);
		}
		if (!is_screen_faded_in())
		{
			do_screen_fade_in(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3228))
		{
			if (!PED::IS_PED_INJURED(iLocal_3228))
			{
				set_ped_can_be_targetted(iLocal_3228, true);
				set_blocking_of_non_temporary_events(iLocal_3228, false);
			}
		}
		trigger_music_event("TRV4_LOSE_COPS");
		if (!is_audio_scene_active("SOL_3_LOSE_COPS"))
		{
			start_audio_scene("SOL_3_LOSE_COPS");
		}
		clear_prints();
		func_20("TRV4_END1", 7500, 1);
		if (is_audio_scene_active("SOL_3_ENGINE_DEATH_SCENE"))
		{
			stop_audio_scene("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2))
		{
			func_18(2, 0);
		}
		iLocal_3221 = add_navmesh_blocking_object(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, 0, 7);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
		{
			if (is_vehicle_driveable(iLocal_3266, 0))
			{
				_0x21115BCD6E44656A(iLocal_3266, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267))
		{
			if (is_vehicle_driveable(iLocal_3267, 0))
			{
				_0x21115BCD6E44656A(iLocal_3267, 0);
			}
		}
		set_max_wanted_level(5);
		set_player_wanted_level(player_id(), 3, 0);
		set_player_wanted_level_now(player_id(), 0);
		func_17(&uLocal_3578, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		set_audio_flag("PoliceScannerDisabled", 0);
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3469 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3279[0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("oracle2")))
				{
					iLocal_3279[0] = create_vehicle(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, 1, true);
					set_entity_load_collision_flag(iLocal_3279[0], true);
					set_vehicle_on_ground_properly(iLocal_3279[0]);
					set_model_as_no_longer_needed(joaat("oracle2"));
					iLocal_3469 = 1;
				}
			}
		}
		if (iLocal_3470 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3279[1]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("baller2")))
				{
					iLocal_3279[1] = create_vehicle(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, 1, true);
					set_entity_load_collision_flag(iLocal_3279[1], true);
					set_vehicle_on_ground_properly(iLocal_3279[1]);
					set_model_as_no_longer_needed(joaat("baller2"));
					iLocal_3470 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3279[0]))
		{
			if (is_vehicle_driveable(iLocal_3279[0], 0))
			{
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_3279[0], 0))
				{
					if (!is_audio_scene_active("SOL_3_LOSE_COPS_VEHICLE"))
					{
						start_audio_scene("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3279[0], 1) > 200f || is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_3279[0], 0))
			{
				set_vehicle_as_no_longer_needed(&(iLocal_3279[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3279[1]))
		{
			if (is_vehicle_driveable(iLocal_3279[1], 0))
			{
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_3279[1], 0))
				{
					if (!is_audio_scene_active("SOL_3_LOSE_COPS_VEHICLE"))
					{
						start_audio_scene("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3279[1], 1) > 200f || is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_3279[1], 0))
			{
				set_vehicle_as_no_longer_needed(&(iLocal_3279[1]));
			}
		}
		if (iLocal_3430 == 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_3233[0]))
			{
				func_14(iLocal_3233[0], "SURROUNDED", 24);
				iLocal_3430 = 1;
			}
		}
		if (iLocal_3374 == 0)
		{
			if (timera() > 8000)
			{
				if (is_vehicle_driveable(iLocal_3268[0], 0))
				{
					start_playback_recorded_vehicle(iLocal_3268[0], 68, "BB_Chase", 1);
					_0x796A877E459B99EA(iLocal_3268[0], 0f, 0f, 0.15f);
				}
				if (is_vehicle_driveable(iLocal_3268[1], 0))
				{
					start_playback_recorded_vehicle(iLocal_3268[1], 69, "BB_Chase", 1);
					_0x796A877E459B99EA(iLocal_3268[1], 0f, 0f, 0.15f);
				}
				iLocal_3374 = 1;
			}
		}
		else
		{
			if (is_vehicle_driveable(iLocal_3268[0], 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_3268[0]))
				{
					if (get_time_position_in_recording(iLocal_3268[0]) > 5000f)
					{
						if (is_vehicle_stopped(iLocal_3268[0]))
						{
							stop_playback_recorded_vehicle(iLocal_3268[0]);
						}
					}
				}
				else if (iLocal_3375 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_3233[6]))
					{
						set_blocking_of_non_temporary_events(iLocal_3233[6], false);
					}
					if (!PED::IS_PED_INJURED(iLocal_3233[7]))
					{
						set_blocking_of_non_temporary_events(iLocal_3233[7], false);
					}
					iLocal_3375 = 1;
				}
			}
			if (is_vehicle_driveable(iLocal_3268[1], 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_3268[1]))
				{
					if (get_time_position_in_recording(iLocal_3268[1]) > 5000f)
					{
						if (is_vehicle_stopped(iLocal_3268[1]))
						{
							stop_playback_recorded_vehicle(iLocal_3268[1]);
						}
					}
				}
				else if (iLocal_3376 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_3233[8]))
					{
						set_blocking_of_non_temporary_events(iLocal_3233[8], false);
					}
					if (!PED::IS_PED_INJURED(iLocal_3233[9]))
					{
						set_blocking_of_non_temporary_events(iLocal_3233[9], false);
					}
					iLocal_3376 = 1;
				}
			}
		}
		func_12();
		if (iLocal_3474 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267))
			{
				if (is_vehicle_driveable(iLocal_3267, 0))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_3267, 0))
					{
						trigger_music_event("TRV4_JET_ENTERED");
						if (!is_audio_scene_active("SOL_3_LOSE_COPS_PLANE"))
						{
							start_audio_scene("SOL_3_LOSE_COPS_PLANE");
						}
						_0x293220DA1B46CEBC(4f, 15f, 4);
						set_vehicle_as_no_longer_needed(&iLocal_3267);
						iLocal_3474 = 1;
					}
					else if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3267, 1) > 200f)
					{
						set_vehicle_as_no_longer_needed(&iLocal_3267);
					}
				}
			}
		}
		if (iLocal_3474 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267))
			{
				if (is_vehicle_driveable(iLocal_3267, 0))
				{
					if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_3267, 0))
					{
						if (is_audio_scene_active("SOL_3_LOSE_COPS_PLANE"))
						{
							stop_audio_scene("SOL_3_LOSE_COPS_PLANE");
						}
						trigger_music_event("TRV4_LOSE_COPS");
						iLocal_3474 = 0;
					}
				}
			}
		}
		if (get_player_wanted_level(player_id()) == 0)
		{
			if (iLocal_3477 == 0)
			{
				iLocal_3193 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_3477 = 1;
			}
		}
		if (iLocal_3477 == 1)
		{
			if (get_player_wanted_level(player_id()) == 0)
			{
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3193 + 3500)
				{
					if (is_audio_scene_active("SOL_3_LOSE_COPS_PLANE"))
					{
						stop_audio_scene("SOL_3_LOSE_COPS_PLANE");
					}
					if (is_audio_scene_active("SOL_3_LOSE_COPS"))
					{
						stop_audio_scene("SOL_3_LOSE_COPS");
					}
					if (is_audio_scene_active("SOL_3_LOSE_COPS_VEHICLE"))
					{
						stop_audio_scene("SOL_3_LOSE_COPS_VEHICLE");
					}
					trigger_music_event("TRV4_COPS_LOST");
					func_11(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_3477 = 0;
			}
		}
	}
}

void func_6()
{
	func_10(481, iLocal_3191, 0);
	func_7(0, 0);
	func_380();
}

void func_7(int iParam0, int iParam1)
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
		if ((func_393(0) && Global_69735.f_1 == 1) && func_9(Global_69735))
		{
		}
		else
		{
			Global_55749 = 1;
		}
	}
	if (Global_101154.f_7775 || func_393(0))
	{
		iVar0 = func_8();
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

int func_8()
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

bool func_9(int iParam0)
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

void func_10(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (Global_67845[iVar0 /*9*/] == iParam0)
		{
			if (iParam2)
			{
				Global_67845[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67845[iVar0 /*9*/].f_1 += iParam1;
			}
			return;
		}
		iVar0++;
	}
	if (Global_67845[iVar0 /*9*/] != -1)
	{
		if (Global_55974[Global_67845[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67845[iVar0 /*9*/].f_1 > 1)
			{
				Global_67845[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67845[iVar0 /*9*/].f_1 < 0)
			{
				Global_67845[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55757)
	{
	}
	Global_55757 = 0;
	if (iParam0)
	{
		Global_55758 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_55974[Global_67845[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67845[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_67845[iVar0 /*9*/] > 0)
			{
				if (Global_67845[iVar0 /*9*/] == iParam1)
				{
					Global_67845[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12()
{
	iLocal_3189 = 0;
	while (iLocal_3189 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[iLocal_3189]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3233[iLocal_3189]))
			{
				if (!is_ped_in_any_vehicle(iLocal_3233[iLocal_3189], 0))
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3233[iLocal_3189]) > 200f)
						{
							AI::CLEAR_PED_TASKS(iLocal_3233[iLocal_3189]);
							set_ped_as_no_longer_needed(&(iLocal_3233[iLocal_3189]));
						}
						else if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3233[iLocal_3189]) > 20f)
						{
							if (AI::GET_SCRIPT_TASK_STATUS(iLocal_3233[iLocal_3189], -1207174364) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_3233[iLocal_3189], -1207174364) != 0)
							{
								task_go_to_entity_while_aiming_at_entity(iLocal_3233[iLocal_3189], PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, 1, 15f, 20f, 0, 0, -687903391);
							}
						}
						else if (AI::GET_SCRIPT_TASK_STATUS(iLocal_3233[iLocal_3189], 780511057) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_3233[iLocal_3189], 780511057) != 0)
						{
							task_combat_ped(iLocal_3233[iLocal_3189], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_3233[iLocal_3189], 50, true);
						}
					}
					else if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3233[iLocal_3189]) > 200f)
					{
						set_ped_as_no_longer_needed(&(iLocal_3233[iLocal_3189]));
					}
					else if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3233[iLocal_3189]) > 5f)
					{
						if (AI::GET_SCRIPT_TASK_STATUS(iLocal_3233[iLocal_3189], -1207174364) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_3233[iLocal_3189], -1207174364) != 0)
						{
							task_go_to_entity_while_aiming_at_entity(iLocal_3233[iLocal_3189], PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, 1, 15f, 20f, 0, 0, -687903391);
						}
					}
					else if (AI::GET_SCRIPT_TASK_STATUS(iLocal_3233[iLocal_3189], 780511057) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_3233[iLocal_3189], 780511057) != 0)
					{
						task_combat_ped(iLocal_3233[iLocal_3189], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_3233[iLocal_3189], 50, true);
					}
				}
			}
		}
		iLocal_3189++;
	}
	if (iLocal_3374 == 1)
	{
		if (iLocal_3346 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3268[0]))
			{
				if (is_vehicle_driveable(iLocal_3268[0], 0))
				{
					if (is_playback_going_on_for_vehicle(iLocal_3268[0]))
					{
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[6]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3233[6]))
							{
								set_blocking_of_non_temporary_events(iLocal_3233[6], false);
								AI::CLEAR_PED_TASKS(iLocal_3233[6]);
								open_sequence_task(&iLocal_3292);
								task_leave_vehicle(false, iLocal_3268[0], 256);
								task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
								close_sequence_task(iLocal_3292);
								task_perform_sequence(iLocal_3233[6], iLocal_3292);
								clear_sequence_task(&iLocal_3292);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[7]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3233[7]))
							{
								set_blocking_of_non_temporary_events(iLocal_3233[7], false);
								AI::CLEAR_PED_TASKS(iLocal_3233[7]);
								open_sequence_task(&iLocal_3292);
								task_leave_vehicle(false, iLocal_3268[0], 256);
								task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
								close_sequence_task(iLocal_3292);
								task_perform_sequence(iLocal_3233[7], iLocal_3292);
								clear_sequence_task(&iLocal_3292);
							}
						}
						iLocal_3346 = 1;
					}
				}
			}
		}
		else if (iLocal_3431 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3268[0]))
			{
				if (is_vehicle_driveable(iLocal_3268[0], 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[6]))
					{
						if (!PED::IS_PED_INJURED(iLocal_3233[6]))
						{
							if (!is_ped_in_vehicle(iLocal_3233[6], iLocal_3268[0], 0))
							{
								if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3233[6]) < 20f)
								{
									func_14(iLocal_3233[6], "DRAW_GUN", 24);
									iLocal_3431 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3347 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3268[1]))
			{
				if (is_vehicle_driveable(iLocal_3268[1], 0))
				{
					if (is_playback_going_on_for_vehicle(iLocal_3268[1]))
					{
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[8]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3233[8]))
							{
								set_blocking_of_non_temporary_events(iLocal_3233[8], false);
								AI::CLEAR_PED_TASKS(iLocal_3233[8]);
								open_sequence_task(&iLocal_3292);
								task_leave_vehicle(false, iLocal_3268[1], 256);
								task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
								close_sequence_task(iLocal_3292);
								task_perform_sequence(iLocal_3233[8], iLocal_3292);
								clear_sequence_task(&iLocal_3292);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[9]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3233[9]))
							{
								set_blocking_of_non_temporary_events(iLocal_3233[9], false);
								AI::CLEAR_PED_TASKS(iLocal_3233[9]);
								open_sequence_task(&iLocal_3292);
								task_leave_vehicle(false, iLocal_3268[1], 256);
								task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
								close_sequence_task(iLocal_3292);
								task_perform_sequence(iLocal_3233[9], iLocal_3292);
								clear_sequence_task(&iLocal_3292);
							}
						}
						iLocal_3347 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3348 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[10]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3233[10]))
			{
				if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3233[10]) > 200f)
				{
					set_ped_as_no_longer_needed(&(iLocal_3233[iLocal_3189]));
					remove_anim_dict("misssolomon_3");
				}
				else if (has_anim_dict_loaded("misssolomon_3"))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, false, true, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_3233[10]))
						{
							AI::CLEAR_PED_TASKS(iLocal_3233[10]);
							open_sequence_task(&iLocal_3292);
							AI::TASK_PLAY_ANIM(false, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0, 0, 0, 0);
							task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
							close_sequence_task(iLocal_3292);
							task_perform_sequence(iLocal_3233[10], iLocal_3292);
							clear_sequence_task(&iLocal_3292);
							iLocal_3348 = 1;
						}
					}
				}
			}
		}
	}
}

auto func_13(int iParam0, int iParam1)
{
	return func_16(iParam0, iParam1, 1);
}

void func_14(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_15(iParam2), 1);
}

int func_15(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

auto func_16(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	}
	else
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0)};
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
	}
	else
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 0)};
	}
	return INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar0, vVar3, iParam2);
}

void func_17(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
	}
	*uParam0[iParam1 /*10*/] = iParam2;
	StringCopy(uParam0[iParam1 /*10*/].f_1, sParam3, 24);
	*(uParam0[iParam1 /*10*/]).f_7 = 1;
	*(uParam0[iParam1 /*10*/]).f_8 = iParam4;
	*(uParam0[iParam1 /*10*/]).f_9 = iParam5;
	if (!Global_69489)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_8 == 0)
			{
				set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else
			{
				set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_9 == 0)
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

void func_18(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_25277, iParam0))
	{
		if (!iParam1)
		{
			GAMEPLAY::CLEAR_BIT(&Global_25277, iParam0);
			StringCopy(&(Global_25278[iParam0 /*6*/]), "NULL", 24);
			Global_25333[iParam0] = iParam1;
		}
	}
}

bool func_19(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_25277, iParam0))
	{
		return true;
	}
	return false;
}

void func_20(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	if (func_23() && func_24())
	{
		while (Global_91273 != 6)
		{
			wait(false);
		}
		set_game_paused(false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				clear_ped_wetness(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (is_vehicle_driveable(iParam0, 0))
					{
						if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							set_ped_into_vehicle(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							set_gameplay_cam_relative_pitch(0f, 1f);
							set_gameplay_cam_relative_heading(0f);
							wait(false);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (is_player_playing(player_id()))
			{
				set_player_control(player_id(), true, 0);
			}
		}
		_stop_all_screen_effects();
		func_22(0);
	}
}

void func_22(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&(Global_91278.f_20), 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 13);
	}
}

bool func_23()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return true;
	}
	return false;
}

int func_24()
{
	return GAMEPLAY::IS_BIT_SET(Global_91278.f_20, 13);
}

void func_25(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[8] cVar3;
	int iVar5;
	auto uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!GAMEPLAY::ARE_STRINGS_EQUAL("FinaleC2", get_this_script_name()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_91315)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91315)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_103(1);
		if (iParam0 <= Global_91315)
		{
		}
		iVar1 = func_101(get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_101154.f_7775.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_99(iVar1);
			cVar3 = {Global_82399[iVar1 /*34*/].f_8};
			if (iVar1 == 90)
			{
				switch (Global_101154.f_7775.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			playstats_mission_checkpoint(&cVar3, iVar2, Global_91315, iParam0);
		}
		else
		{
			iVar5 = func_94(get_this_script_name(), 1);
			if (iVar5 != -1)
			{
				Global_101154.f_17264[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_93(iVar5)}, 4);
				playstats_mission_checkpoint(&uVar6, 0, Global_91315, iParam0);
			}
			else
			{
				iVar10 = func_92(&(Global_91278.f_3));
				if (iVar10 > -1)
				{
					Global_101154.f_29511.f_4[iVar10] = 0;
				}
			}
		}
		Global_85789 = iParam2;
		Global_91315 = iParam0;
		func_26(iParam0, sParam1, iParam4, iParam5);
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91315)
	{
	}
}

void func_26(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	func_27(&Global_95496, get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

void func_27(auto uParam0, char* sParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_91();
	*uParam0.f_1 = func_80();
	GAMEPLAY::_GET_WEATHER_TYPE_TRANSITION(uParam0.f_6, uParam0.f_7, uParam0.f_8);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_65(uParam0.f_2305, 0);
		func_64(PLAYER::PLAYER_PED_ID());
		func_58(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), uParam0.f_2, 1);
		if (*uParam0.f_2 == 0 || *uParam0.f_2 == joaat("object"))
		{
			*uParam0.f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		*uParam0.f_17[iVar1] = Global_101154.f_1826.f_539.f_294[iVar1];
		if (iVar1 == func_55())
		{
			func_48(PLAYER::PLAYER_PED_ID(), uParam0.f_616[iVar1 /*65*/], 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				*(uParam0.f_616[iVar1 /*65*/])[iVar0] = Global_91068[iVar1 /*65*/][iVar0];
				*(uParam0.f_616[iVar1 /*65*/].f_13)[iVar0] = Global_91068[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			*(uParam0.f_616[iVar1 /*65*/]).f_59 = Global_91068[iVar1 /*65*/].f_59;
			*(uParam0.f_616[iVar1 /*65*/]).f_60 = Global_91068[iVar1 /*65*/].f_60;
			*(uParam0.f_616[iVar1 /*65*/]).f_61 = Global_91068[iVar1 /*65*/].f_61;
			*(uParam0.f_616[iVar1 /*65*/]).f_62 = Global_91068[iVar1 /*65*/].f_62;
			*(uParam0.f_616[iVar1 /*65*/]).f_63 = Global_91068[iVar1 /*65*/].f_63;
			*(uParam0.f_616[iVar1 /*65*/]).f_64 = Global_91068[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				*(uParam0.f_616[iVar1 /*65*/].f_39)[iVar0] = Global_91068[iVar1 /*65*/].f_39[iVar0];
				*(uParam0.f_616[iVar1 /*65*/].f_49)[iVar0] = Global_91068[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			*(uParam0.f_812[iVar1 /*284*/][iVar0 /*3*/]) = {Global_101154.f_1826.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			*(uParam0.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/]) = {Global_101154.f_1826.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
		}
		*uParam0.f_9[iVar1] = Global_101154.f_25089.f_233[iVar1 /*69*/].f_1;
		*uParam0.f_13[iVar1] = Global_52923[iVar1];
		*(uParam0.f_25[0 /*295*/][iVar1 /*98*/]) = {Global_101154.f_1826.f_539.f_1635[0 /*295*/][iVar1 /*98*/]};
		*(uParam0.f_25[1 /*295*/][iVar1 /*98*/]) = {Global_101154.f_1826.f_539.f_1635[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			*(uParam0.f_2259[iVar1 /*15*/])[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/][iVar0];
			*(uParam0.f_2259[iVar1 /*15*/].f_5)[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_5[iVar0];
			*(uParam0.f_2259[iVar1 /*15*/].f_10)[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			*(uParam0.f_1766[iVar1 /*164*/])[iVar0] = Global_101154.f_1826[iVar1 /*164*/][iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_4)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_4[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_8)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_8[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_12)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_12[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_16)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_16[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_20)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_20[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_24)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_24[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_28)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_28[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_32)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_32[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_36)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_36[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_40)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_40[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_44)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_44[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_48)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_48[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_52)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_52[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_56)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_56[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_60)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_60[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_64)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_64[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_68)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_68[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_72)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_72[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_76)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_76[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_80)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_80[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_84)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_84[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_88)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_88[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_92)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_92[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_96)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_96[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_100)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_100[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_104)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_104[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_108)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_108[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_112)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_112[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_116)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_116[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_120)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_120[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_124)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_124[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_128)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_128[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_132)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_132[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_136)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_136[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_140)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_140[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_144)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_144[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_148)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_148[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_152)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_152[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_156)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_156[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_160)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), uParam0.f_1762[0], -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), uParam0.f_1762[1], -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), uParam0.f_1762[2], -1);
	*uParam0.f_5 = 145;
	if (iParam4 == 1)
	{
		func_29(uParam0.f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_28(uParam0.f_2401);
	uParam3 = uParam3;
	uParam2 = uParam2;
}

bool func_28(auto uParam0)
{
	*uParam0 = Global_87460;
	*uParam0.f_1 = Global_87461;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	return true;
}

void func_29(auto uParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		*uParam1.f_5 = func_46(iParam2);
	}
	if (func_43(iParam2, &iVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (is_vehicle_model(iVar0, joaat("skylift")) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				func_30(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

bool func_30(auto uParam0, auto uParam1, int iParam2, int iParam3)
{
	if (is_vehicle_driveable(iParam2, 0))
	{
		func_32(uParam0, iParam2, iParam3);
		*uParam1.f_4 = iParam2;
		if (func_31(iParam2))
		{
			*uParam1.f_3 = 1;
		}
		else
		{
			*uParam1.f_3 = 0;
		}
		return true;
	}
	return false;
}

bool func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91278.f_22[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_32(auto uParam0, int iParam1, int iParam2)
{
	func_39(iParam1, uParam0.f_12);
	*uParam0.f_7 = func_35(iParam1, 145, 0);
	*uParam0.f_11 = func_34(iParam1);
	if (!*uParam0.f_7)
	{
		if (!*uParam0.f_10)
		{
			*uParam0.f_10 = func_33(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
		*uParam0.f_6 = get_entity_heading(iParam1);
		*uParam0.f_3 = {ENTITY::GET_ENTITY_VELOCITY(iParam1)};
		if (is_entity_in_angled_area(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			*uParam0.f_6 = 305.6424f;
		}
		if (Global_69224 == iParam1)
		{
			*uParam0.f_9 = 1;
		}
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		*uParam0.f_8 = 1;
	}
	else
	{
		*uParam0.f_8 = 0;
	}
}

bool func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]))
		{
			if (iParam0 == Global_68319.f_484[iVar0])
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_34(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_35(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88952[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_36(iParam1, iParam2))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_36(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_38(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_37(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	
	*uParam1.f_88 = 1;
	*uParam1.f_84 = 255;
	*uParam1.f_85 = 255;
	*uParam1.f_86 = 255;
	*uParam1.f_97 = 1;
	*uParam1.f_3 = 1000;
	*uParam1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101154.f_7775.f_99.f_58[128] && !Global_101154.f_7775.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 3f;
					*uParam1.f_4 = 0;
					*uParam1.f_9 = 1;
					*uParam1.f_11[0] = 1;
					StringCopy(uParam1.f_27, "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 14.9f;
					*uParam1.f_5 = 43;
					*uParam1.f_6 = 43;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					*uParam1.f_9 = 0;
					StringCopy(uParam1.f_27, "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 14f;
					*uParam1.f_5 = 32;
					*uParam1.f_6 = 0;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					StringCopy(uParam1.f_27, "BETTY 32", 16);
					if (Global_101154.f_7775.f_99.f_58[119])
					{
						*uParam1.f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_101154.f_7775.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 6f;
					*uParam1.f_5 = 53;
					*uParam1.f_6 = 0;
					*uParam1.f_7 = 59;
					*uParam1.f_8 = 156;
					StringCopy(uParam1.f_27, "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 0f;
					*uParam1.f_5 = 111;
					*uParam1.f_6 = 111;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					*uParam1.f_10 = 1;
					StringCopy(uParam1.f_27, "FC1988", 16);
					*uParam1.f_11[0] = 1;
					*uParam1.f_11[1] = 1;
					*uParam1.f_11[2] = 1;
					*uParam1.f_11[3] = 1;
					*uParam1.f_11[4] = 1;
					*uParam1.f_11[5] = 1;
					*uParam1.f_11[6] = 1;
					*uParam1.f_11[7] = 1;
					*uParam1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_38(int iParam0)
{
	return iParam0 < 3;
}

void func_39(int iParam0, auto uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_42(uParam1);
		*uParam1.f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(uParam1.f_1, get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = get_vehicle_number_plate_text_index(iParam0);
		get_vehicle_colours(iParam0, uParam1.f_5, uParam1.f_6);
		get_vehicle_extra_colours(iParam0, uParam1.f_7, uParam1.f_8);
		get_vehicle_tyre_smoke_color(iParam0, uParam1.f_62, uParam1.f_63, uParam1.f_64);
		*uParam1.f_65 = get_vehicle_window_tint(iParam0);
		*uParam1.f_67 = get_vehicle_livery(iParam0);
		*uParam1.f_69 = get_vehicle_wheel_type(iParam0);
		*uParam1.f_70 = get_vehicle_door_lock_status(iParam0);
		get_vehicle_custom_secondary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		_get_vehicle_neon_lights_colour(iParam0, uParam1.f_74, uParam1.f_75, uParam1.f_76);
		if (_is_vehicle_neon_light_enabled(iParam0, 2))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 31);
		}
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			*uParam1.f_65 = 0;
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			*uParam1.f_68 = get_convertible_roof_state(iParam0);
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (_0x4198AB0022B15F87(iParam0))
			{
				switch (_get_vehicle_landing_gear(iParam0))
				{
					case 2:
					case 0:
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 23);
						GAMEPLAY::SET_BIT(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 23);
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 22);
						break;
					
					case 4:
						GAMEPLAY::SET_BIT(uParam1.f_77, 23);
						break;
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 13);
			get_vehicle_custom_primary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 12);
		}
		func_41(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, func_40(iVar0 + 1));
			}
			iVar0++;
		}
		if (_does_vehicle_have_decal(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 11);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 27);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam1.f_77, 27);
		}
	}
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

bool func_41(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			*uParam1[iVar0] = 0;
			if (is_toggle_mod_on(*iParam0, iVar1))
			{
				*uParam1[iVar0] = 1;
			}
		}
		else
		{
			*uParam1[iVar0] = get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				*uParam2[0] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				*uParam2[1] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return true;
}

void func_42(auto uParam0)
{
	int iVar0;
	
	*uParam0.f_66 = 0;
	*uParam0.f_77 = 0;
	*uParam0.f_65 = 0;
	*uParam0.f_62 = 0;
	*uParam0.f_63 = 0;
	*uParam0.f_64 = 0;
	*uParam0.f_74 = 0;
	*uParam0.f_75 = 0;
	*uParam0.f_76 = 0;
	*uParam0 = 0;
	StringCopy(uParam0.f_1, "", 16);
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		*uParam0.f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		*uParam0.f_59[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 1;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
	*uParam0.f_73 = 0;
}

bool func_43(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = get_players_last_vehicle();
			}
			else
			{
				*uParam1 = get_vehicle_ped_is_in(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (is_vehicle_driveable(*uParam1, 0))
				{
					if (iParam2 == 0 || INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f)
					{
						if (is_vehicle_model(*uParam1, joaat("taxi")))
						{
							if (get_ped_in_vehicle_seat(*uParam1, -1) != iParam0 && get_ped_in_vehicle_seat(*uParam1, -1) != 0)
							{
								return false;
							}
						}
						if (func_44(*uParam1, func_91(), 1))
						{
							sVar0 = get_this_script_name();
							if (!GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return false;
							}
							else if (!is_ped_in_any_vehicle(iParam0, 1))
							{
								return false;
							}
						}
						if (iParam3 == 1)
						{
							if (decor_exist_on(*uParam1, "IgnoredByQuickSave"))
							{
								if (decor_get_bool(*uParam1, "IgnoredByQuickSave"))
								{
									return false;
								}
							}
						}
						else if (is_vehicle_model(*uParam1, joaat("blimp")))
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_45(iParam1, iVar0, &sVar1, &uVar9))
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

bool func_45(int iParam0, int iParam1, char* sParam2, auto uParam3)
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

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_38(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_48(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_46(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_54(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_53(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_38(iVar0))
		{
			*uParam1.f_59 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_59;
			*uParam1.f_60 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_60;
			*uParam1.f_61 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_61;
			*uParam1.f_62 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_62;
			*uParam1.f_63 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_63;
			*uParam1.f_64 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_52(161, -1))
			{
				*uParam1.f_59 = func_49(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_49(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_49(746, Global_69309, 0);
			*uParam1.f_61 = func_49(747, Global_69309, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_52(161, -1))
			{
				*uParam1.f_59 = func_49(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_49(745, Global_69309, 0);
			}
		}
	}
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_50(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
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

auto func_51()
{
	return Global_1312747;
}

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_50(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_53(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = get_ped_prop_index(iParam0, iParam1);
		*uParam3 = get_ped_prop_texture_index(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (is_ped_wearing_helmet(iParam0) && _0x451294E859ECC018(iParam0) != -1)
				{
					*uParam2 = _0x451294E859ECC018(iParam0);
					*uParam3 = _0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_54(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = get_ped_drawable_variation(iParam0, iParam1);
		*uParam3 = get_ped_texture_variation(iParam0, iParam1);
		*uParam4 = get_ped_palette_variation(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

auto func_55()
{
	func_56();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_56()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_47(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_46(PLAYER::PLAYER_PED_ID());
			if (func_38(iVar0) && (!func_57(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_38(Global_101154.f_1826.f_539.f_3549))
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

int func_57(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_58(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_46(iParam0);
	if (func_38(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_59(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= 8 - 1)
			{
				Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] = _0xA13E93403F26C812(iVar2);
				if (iParam1)
				{
					iVar1 = _0xA48931185F0536FE();
					if (Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_101154.f_1826.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			get_player_parachute_pack_tint_index(player_id(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_59(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 44 - 1)
		{
			*(uParam1[iVar0 /*3*/]).f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 44 - 1)
		{
			iVar3 = func_63(iVar0);
			if (iVar3 != 0)
			{
				vVar4.x = get_ped_weapontype_in_slot(iParam0, func_63(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed"))
				{
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute"))
					{
						vVar4.y = 1;
					}
					GAMEPLAY::SET_BIT(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1[iVar0 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					iVar2 = func_61(vVar4.x, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, vVar4.x, iVar2))
						{
							GAMEPLAY::SET_BIT(&(vVar4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_61(vVar4.x, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = {vVar4};
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50 - 1)
		{
			*(uParam1.f_133[iVar0 /*3*/]).f_1 = 0;
			iVar0++;
		}
		iVar8 = get_num_dlc_weapons();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((get_dlc_weapon_data(iVar7, &Var9) && !func_60(Var9.f_1)) && iVar70 < 50)
			{
				if (!_is_dlc_data_empty(Var9))
				{
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						GAMEPLAY::SET_BIT(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else
					{
						GAMEPLAY::SET_BIT(&(vVar4.f_2), 20);
					}
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1.f_133[iVar70 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					while (iVar1 < get_num_dlc_weapon_components(iVar7))
					{
						if (get_dlc_weapon_component_data(iVar7, iVar1, &Var48))
						{
							if (has_ped_got_weapon_component(iParam0, vVar4.x, Var48.f_3))
							{
								GAMEPLAY::SET_BIT(&(vVar4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (vVar4.x != 0)
				{
					if (!has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						vVar4.x = false;
						vVar4.y = 0;
					}
				}
				*(uParam1.f_133[iVar70 /*3*/]) = {vVar4};
				iVar70++;
			}
			iVar7++;
		}
	}
}

bool func_60(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return false;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return false;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return false;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return false;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return false;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return false;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return false;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return false;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return false;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
				return true;
				break;
			}
	}
	return false;
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_62(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < get_num_dlc_weapon_components(iVar1))
					{
						if (get_dlc_weapon_component_data(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_62(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (get_dlc_weapon_data(iVar0, uParam1))
		{
			if (*uParam1.f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (func_38(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_65(auto uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	auto uVar4;
	int iVar5;
	
	*uParam0 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
	*uParam0.f_3 = get_entity_heading(PLAYER::PLAYER_PED_ID());
	*uParam0.f_5 = get_ped_parachute_state(PLAYER::PLAYER_PED_ID());
	if (is_player_playing(player_id()))
	{
		*uParam0.f_4 = get_player_wanted_level(player_id());
	}
	if (vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = {301.2162f, 202.1357f, 103.3797f};
		*uParam0.f_3 = 156.5144f;
	}
	else if (vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = {394.2567f, -713.5439f, 28.2853f};
		*uParam0.f_3 = 276.6273f;
	}
	else if (vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = {-1423.472f, -214.2539f, 45.5004f};
		*uParam0.f_3 = 353.8757f;
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("finale_choice")) > 0)
	{
		*uParam0 = {4.2587f, 525.0214f, 173.6281f};
		*uParam0.f_3 = 203.6746f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 4))
	{
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		*uParam0.f_3 = 78.9858f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 5))
	{
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		*uParam0.f_3 = 261.747f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 6))
	{
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		*uParam0.f_3 = 271.8208f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 7))
	{
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		*uParam0.f_3 = 316.8879f;
	}
	else if (get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		*uParam0.f_3 = 204.1703f;
	}
	else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = {-601.59f, 2099.197f, 128.8928f};
		*uParam0.f_3 = 204.7498f;
	}
	else if (vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = {-1018.376f, -483.9436f, 36.0964f};
		*uParam0.f_3 = 114.7664f;
	}
	else if (vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = {497.7238f, -1310.932f, 28.2372f};
		*uParam0.f_3 = 289.3663f;
	}
	else if (vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = {2316.93f, 2594.153f, 45.7199f};
		*uParam0.f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_69(&iVar0))
		{
			if (func_67(iVar0, &vVar1, &uVar4))
			{
				vVar1.z++;
				*uParam0 = {vVar1};
				*uParam0.f_3 = uVar4;
			}
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_91();
			if (iVar5 == 0)
			{
				*uParam0 = {-65.1234f, 81.2517f, 70.5644f};
				*uParam0.f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = {-68.5531f, -1824.377f, 25.9424f};
				*uParam0.f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = {-220.8189f, -1162.302f, 22.0242f};
				*uParam0.f_3 = 70.2711f;
			}
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			*uParam0.f_3 = 213.6273f;
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			*uParam0.f_3 = 305.6424f;
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			*uParam0.f_3 = 186.6814f;
		}
		else if (func_66(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			*uParam0.f_3 = 48.8028f;
		}
	}
}

bool func_66(Vector3 vParam0, char* sParam1, Vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!_are_coords_colliding_with_exterior(vParam0))
	{
		iVar0 = get_interior_at_coords_with_type(vParam4, sParam3);
		if (!is_valid_interior(iVar0))
		{
			return false;
		}
		iVar1 = get_interior_from_collision(vParam0);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_67(int iParam0, auto uParam1, auto uParam2)
{
	*uParam1 = {0f, 0f, 0f};
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = {-829.842f, -191.7454f, 36.4386f};
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = {129.8484f, -1716.528f, 28.0702f};
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = {-1296.913f, -1120.999f, 5.3951f};
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = {1938.028f, 3718.736f, 31.3154f};
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = {1197.866f, -469.3809f, 65.0885f};
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = {-32.2161f, -135.8212f, 56.0532f};
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = {-287.7696f, 6238.081f, 30.2902f};
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = {99.2876f, -1395.16f, 28.2759f};
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = {1679.445f, 4819.056f, 41.0035f};
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = {411.3063f, -809.1863f, 28.1554f};
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = {-1088.054f, 2699.167f, 19.2748f};
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = {1194.163f, 2695.644f, 36.9225f};
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = {-821.2829f, -1088.027f, 10.0499f};
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = {-3.3416f, 6521.303f, 30.2961f};
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = {-1208.417f, -785.9635f, 16.0139f};
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = {623.1845f, 2739.191f, 40.9588f};
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = {130.9555f, -198.2084f, 53.41f};
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = {-3164.065f, 1067.317f, 19.6778f};
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = {-713.2797f, -174.2767f, 35.8962f};
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = {-147.0616f, -306.4322f, 37.7912f};
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = {-1461.355f, -230.6092f, 48.3064f};
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = {-1347.739f, -1278.573f, 3.8952f};
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = {325.6833f, 164.3263f, 102.4425f};
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = {1858.774f, 3742.393f, 32.0779f};
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = {-286.3272f, 6202.802f, 30.3323f};
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = {-1161.596f, -1417.7f, 3.712f};
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = {1308.952f, -1660.611f, 50.2362f};
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = {-3161.585f, 1074.214f, 19.6847f};
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = {28.423f, -1110.814f, 28.2848f};
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = {1704.966f, 3749.709f, 33.0188f};
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = {223.949f, -38.7894f, 68.6483f};
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = {837.7854f, -1017.963f, 26.3045f};
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = {-313.1914f, 6093.351f, 30.4625f};
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = {-663.4631f, -952.8069f, 20.3143f};
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = {-1323.06f, -392.8577f, 35.4596f};
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = {-1106.102f, 2684.35f, 18.0953f};
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = {-3157.932f, 1081.309f, 19.6953f};
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = {2562.882f, 312.8641f, 107.4612f};
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = {822.48f, -2142.875f, 27.8496f};
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = {-1137.053f, -1993.916f, 12.1677f};
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = {717.8107f, -1084.081f, 21.3094f};
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = {-387.6789f, -128.2568f, 37.6796f};
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = {117.8835f, 6599.415f, 31.0134f};
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = {1201.709f, 2664.813f, 36.8102f};
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = {-200.1521f, -1297.502f, 30.296f};
			*uParam2 = 269.0687f;
			break;
	}
	return !func_68(*uParam1, 0f, 0f, 0f, 0);
}

int func_68(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_69(auto uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_79())
		{
			*uParam0 = func_75(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 5, -1, 0, 1, -1);
			if (func_74(*uParam0) && !func_70(*uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_70(int iParam0)
{
	return func_71(iParam0, 0, 1);
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_73() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_49(func_72(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

auto func_73()
{
	return Global_25120;
}

int func_74(int iParam0)
{
	return func_71(iParam0, 5, 1);
}

int func_75(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_78(iVar0))
		{
			if (!iParam5 || func_77(iVar0))
			{
				fVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vParam0, func_76(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_76(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (iParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_77(int iParam0)
{
	return func_71(iParam0, 0, 0);
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

int func_79()
{
	return Global_91330.f_296 > 0;
}

auto func_80()
{
	auto uVar0;
	
	func_90(&uVar0, get_clock_seconds());
	func_89(&uVar0, get_clock_minutes());
	func_88(&uVar0, TIME::GET_CLOCK_HOURS());
	func_83(&uVar0, get_clock_day_of_month());
	func_82(&uVar0, get_clock_month());
	func_81(&uVar0, get_clock_year());
	return uVar0;
}

void func_81(auto uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 -= *uParam0 & 2080374784;
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left(2011 - iParam1, 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left(iParam1 - 2011, 26));
		*uParam0 -= *uParam0 & -2147483648;
	}
}

void func_82(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_83(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_87(*uParam0);
	iVar1 = func_85(*uParam0);
	if (iParam1 < 1 || iParam1 > func_84(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_84(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if (iParam1 % 4 == 0)
			{
				if (iParam1 % 100 != 0)
				{
					return 29;
				}
				else if (iParam1 % 400 == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

auto func_85(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_86(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_86(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_87(int iParam0)
{
	return (iParam0 && 15);
}

void func_88(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_89(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_90(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

auto func_91()
{
	func_56();
	return Global_101154.f_1826.f_539.f_3549;
}

int func_92(char* sParam0)
{
	if (GAMEPLAY::ARE_STRINGS_EQUAL("BailBond1", sParam0))
	{
		return 0;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_93(int iParam0)
{
	char[8] cVar0;
	
	StringCopy(&cVar0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&cVar0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&cVar0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&cVar0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&cVar0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&cVar0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&cVar0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&cVar0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&cVar0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&cVar0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&cVar0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&cVar0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&cVar0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&cVar0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&cVar0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&cVar0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&cVar0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&cVar0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&cVar0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&cVar0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&cVar0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&cVar0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&cVar0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&cVar0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&cVar0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&cVar0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&cVar0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&cVar0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&cVar0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&cVar0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&cVar0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&cVar0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&cVar0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&cVar0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&cVar0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&cVar0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&cVar0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&cVar0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&cVar0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&cVar0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&cVar0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&cVar0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&cVar0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&cVar0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&cVar0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&cVar0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&cVar0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&cVar0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&cVar0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&cVar0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&cVar0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&cVar0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&cVar0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&cVar0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&cVar0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&cVar0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&cVar0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&cVar0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&cVar0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&cVar0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&cVar0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&cVar0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&cVar0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return cVar0;
}

int func_94(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = GAMEPLAY::GET_HASH_KEY(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_95(iVar0, &sVar1);
		if (GAMEPLAY::GET_HASH_KEY(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_95(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_96(uParam1, "Abigail1", func_98(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 1:
			func_96(uParam1, "Abigail2", func_98(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 2:
			func_96(uParam1, "Barry1", func_98(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 3:
			func_96(uParam1, "Barry2", func_98(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 4:
			func_96(uParam1, "Barry3", func_98(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 5:
			func_96(uParam1, "Barry3A", func_98(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 6:
			func_96(uParam1, "Barry3C", func_98(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 7:
			func_96(uParam1, "Barry4", func_98(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_97(iParam0), 0, 0);
			break;
		
		case 8:
			func_96(uParam1, "Dreyfuss1", func_98(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 9:
			func_96(uParam1, "Epsilon1", func_98(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 10:
			func_96(uParam1, "Epsilon2", func_98(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 11:
			func_96(uParam1, "Epsilon3", func_98(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 12:
			func_96(uParam1, "Epsilon4", func_98(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 13:
			func_96(uParam1, "Epsilon5", func_98(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 14:
			func_96(uParam1, "Epsilon6", func_98(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 15:
			func_96(uParam1, "Epsilon7", func_98(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 16:
			func_96(uParam1, "Epsilon8", func_98(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 17:
			func_96(uParam1, "Extreme1", func_98(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 18:
			func_96(uParam1, "Extreme2", func_98(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 19:
			func_96(uParam1, "Extreme3", func_98(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 20:
			func_96(uParam1, "Extreme4", func_98(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 21:
			func_96(uParam1, "Fanatic1", func_98(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_97(iParam0), 1, 0);
			break;
		
		case 22:
			func_96(uParam1, "Fanatic2", func_98(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_97(iParam0), 1, 0);
			break;
		
		case 23:
			func_96(uParam1, "Fanatic3", func_98(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_97(iParam0), 0, 1);
			break;
		
		case 24:
			func_96(uParam1, "Hao1", func_98(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_97(iParam0), 0, 1);
			break;
		
		case 25:
			func_96(uParam1, "Hunting1", func_98(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 26:
			func_96(uParam1, "Hunting2", func_98(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 27:
			func_96(uParam1, "Josh1", func_98(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 28:
			func_96(uParam1, "Josh2", func_98(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 29:
			func_96(uParam1, "Josh3", func_98(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 30:
			func_96(uParam1, "Josh4", func_98(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 31:
			func_96(uParam1, "Maude1", func_98(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 32:
			func_96(uParam1, "Minute1", func_98(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 33:
			func_96(uParam1, "Minute2", func_98(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 34:
			func_96(uParam1, "Minute3", func_98(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 35:
			func_96(uParam1, "MrsPhilips1", func_98(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 36:
			func_96(uParam1, "MrsPhilips2", func_98(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 37:
			func_96(uParam1, "Nigel1", func_98(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 38:
			func_96(uParam1, "Nigel1A", func_98(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 39:
			func_96(uParam1, "Nigel1B", func_98(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 40:
			func_96(uParam1, "Nigel1C", func_98(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 41:
			func_96(uParam1, "Nigel1D", func_98(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 42:
			func_96(uParam1, "Nigel2", func_98(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 43:
			func_96(uParam1, "Nigel3", func_98(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 44:
			func_96(uParam1, "Omega1", func_98(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 45:
			func_96(uParam1, "Omega2", func_98(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 46:
			func_96(uParam1, "Paparazzo1", func_98(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 47:
			func_96(uParam1, "Paparazzo2", func_98(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 48:
			func_96(uParam1, "Paparazzo3", func_98(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 49:
			func_96(uParam1, "Paparazzo3A", func_98(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 50:
			func_96(uParam1, "Paparazzo3B", func_98(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 51:
			func_96(uParam1, "Paparazzo4", func_98(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 52:
			func_96(uParam1, "Rampage1", func_98(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 54:
			func_96(uParam1, "Rampage3", func_98(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 55:
			func_96(uParam1, "Rampage4", func_98(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 56:
			func_96(uParam1, "Rampage5", func_98(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 53:
			func_96(uParam1, "Rampage2", func_98(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 57:
			func_96(uParam1, "TheLastOne", func_98(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 58:
			func_96(uParam1, "Tonya1", func_98(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 59:
			func_96(uParam1, "Tonya2", func_98(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 60:
			func_96(uParam1, "Tonya3", func_98(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 61:
			func_96(uParam1, "Tonya4", func_98(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 62:
			func_96(uParam1, "Tonya5", func_98(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_96(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
{
	*uParam0.f_4 = iParam5;
	*uParam0 = sParam1;
	*uParam0.f_1 = {Param2};
	*uParam0.f_3 = iParam4;
	*uParam0.f_5 = iParam6;
	*uParam0.f_6 = {vParam7};
	*uParam0.f_9 = iParam10;
	StringCopy(uParam0.f_10, sParam11, 16);
	*uParam0.f_14 = iParam12;
	*uParam0.f_15 = iParam13;
	StringCopy(uParam0.f_16, sParam14, 24);
	*uParam0.f_22 = iParam15;
	*uParam0.f_23 = iParam16;
	*uParam0.f_24 = iParam17;
	*uParam0.f_25 = iParam18;
	*uParam0.f_26 = iParam19;
	*uParam0.f_27 = iParam20;
	*uParam0.f_28 = iParam21;
	*uParam0.f_29 = uParam22;
	*uParam0.f_30 = iParam23;
	*uParam0.f_31 = iParam24;
}

bool func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
			break;
		
		case 1:
			return false;
			break;
		
		case 2:
			return true;
			break;
		
		case 3:
			return true;
			break;
		
		case 4:
			return false;
			break;
		
		case 5:
			return true;
			break;
		
		case 6:
			return true;
			break;
		
		case 7:
			return false;
			break;
		
		case 8:
			return true;
			break;
		
		case 9:
			return false;
			break;
		
		case 10:
			return false;
			break;
		
		case 11:
			return false;
			break;
		
		case 12:
			return true;
			break;
		
		case 13:
			return false;
			break;
		
		case 14:
			return true;
			break;
		
		case 15:
			return false;
			break;
		
		case 16:
			return true;
			break;
		
		case 17:
			return true;
			break;
		
		case 18:
			return true;
			break;
		
		case 19:
			return true;
			break;
		
		case 20:
			return true;
			break;
		
		case 21:
			return true;
			break;
		
		case 22:
			return true;
			break;
		
		case 23:
			return true;
			break;
		
		case 24:
			return true;
			break;
		
		case 25:
			return true;
			break;
		
		case 26:
			return true;
			break;
		
		case 27:
			return false;
			break;
		
		case 28:
			return true;
			break;
		
		case 29:
			return true;
			break;
		
		case 30:
			return true;
			break;
		
		case 31:
			return false;
			break;
		
		case 32:
			return true;
			break;
		
		case 33:
			return true;
			break;
		
		case 34:
			return true;
			break;
		
		case 35:
			return false;
			break;
		
		case 36:
			return false;
			break;
		
		case 37:
			return false;
			break;
		
		case 38:
			return true;
			break;
		
		case 39:
			return true;
			break;
		
		case 40:
			return true;
			break;
		
		case 41:
			return true;
			break;
		
		case 42:
			return true;
			break;
		
		case 43:
			return true;
			break;
		
		case 44:
			return false;
			break;
		
		case 45:
			return false;
			break;
		
		case 46:
			return true;
			break;
		
		case 47:
			return true;
			break;
		
		case 48:
			return false;
			break;
		
		case 49:
			return true;
			break;
		
		case 50:
			return true;
			break;
		
		case 51:
			return true;
			break;
		
		case 52:
			return true;
			break;
		
		case 54:
			return true;
			break;
		
		case 55:
			return true;
			break;
		
		case 56:
			return true;
			break;
		
		case 53:
			return true;
			break;
		
		case 57:
			return true;
			break;
		
		case 58:
			return true;
			break;
		
		case 59:
			return true;
			break;
		
		case 60:
			return true;
			break;
		
		case 61:
			return true;
			break;
		
		case 62:
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

struct<2> func_98(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_93(iParam0)};
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "RC_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_100(Global_101154.f_7775.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_100(Global_101154.f_7775.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_100(Global_101154.f_7775.f_99.f_205[11]);
			break;
		
		case 90:
			return func_100(Global_101154.f_7775.f_99.f_205[7]);
			break;
		
		case 93:
			return func_100(Global_101154.f_7775.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_101(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	iVar1 = func_102(iVar0, 1);
	if (iVar1 == -1 && !iParam1)
	{
	}
	return iVar1;
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_82399[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!iParam1)
	{
	}
	return -1;
}

void func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52931[iVar0 /*3*/][0] = Global_101154.f_25089[iVar0];
		Global_52931.f_31[iVar0 /*3*/][0] = Global_101154.f_25089.f_11[iVar0];
		Global_52931.f_62[iVar0 /*3*/][0] = Global_101154.f_25089.f_22[iVar0];
		Global_52931.f_93[iVar0 /*3*/][0] = Global_101154.f_25089.f_33[iVar0];
		Global_52931.f_124[iVar0 /*3*/][0] = Global_101154.f_25089.f_44[iVar0];
		Global_52931.f_155[iVar0 /*3*/][0] = Global_101154.f_25089.f_55[iVar0];
		Global_52931.f_186[iVar0 /*3*/][0] = Global_101154.f_25089.f_66[iVar0];
		Global_52931.f_217[iVar0 /*3*/][0] = Global_101154.f_25089.f_77[iVar0];
		Global_52931.f_248[iVar0 /*3*/][0] = Global_101154.f_25089.f_88[iVar0];
		if (!iParam0)
		{
			Global_52931[iVar0 /*3*/][1] = Global_101154.f_25089[iVar0];
			Global_52931.f_31[iVar0 /*3*/][1] = Global_101154.f_25089.f_11[iVar0];
			Global_52931.f_62[iVar0 /*3*/][1] = Global_101154.f_25089.f_22[iVar0];
			Global_52931.f_93[iVar0 /*3*/][1] = Global_101154.f_25089.f_33[iVar0];
			Global_52931.f_124[iVar0 /*3*/][1] = Global_101154.f_25089.f_44[iVar0];
			Global_52931.f_155[iVar0 /*3*/][1] = Global_101154.f_25089.f_55[iVar0];
			Global_52931.f_186[iVar0 /*3*/][1] = Global_101154.f_25089.f_66[iVar0];
			Global_52931.f_217[iVar0 /*3*/][1] = Global_101154.f_25089.f_77[iVar0];
			Global_52931.f_248[iVar0 /*3*/][1] = Global_101154.f_25089.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_104()
{
	set_weather_type_now("EXTRASUNNY");
	func_189();
	func_161();
	func_106();
	if (!func_24())
	{
		func_105();
	}
	iLocal_3351 = 1;
	set_gameplay_cam_relative_heading(0f);
}

void func_105()
{
	switch (iLocal_3180)
	{
		case 2:
			AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			set_entity_coords(PLAYER::PLAYER_PED_ID(), -1019.579f, -484.872f, 36.0795f, 1, false, 0, 1);
			set_entity_heading(PLAYER::PLAYER_PED_ID(), 93.7701f);
			break;
		
		case 3:
			if (is_vehicle_driveable(iLocal_3259, 0))
			{
				if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_3259, 0))
				{
					set_ped_into_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_3259, -1);
				}
				ENTITY::SET_ENTITY_HEALTH(iLocal_3259, 3000);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3259, false, true, false, false, false, false, 0, false);
			}
			break;
		
		case 5:
			AI::CLEAR_PED_TASKS_immediately(PLAYER::PLAYER_PED_ID());
			set_entity_coords(PLAYER::PLAYER_PED_ID(), -935.4413f, -2928.061f, 12.9451f, 1, false, 0, 1);
			set_entity_heading(PLAYER::PLAYER_PED_ID(), 178.466f);
			set_entity_load_collision_flag(PLAYER::PLAYER_PED_ID(), true);
			break;
		
		case 8:
			AI::CLEAR_PED_TASKS_immediately(PLAYER::PLAYER_PED_ID());
			set_entity_coords(PLAYER::PLAYER_PED_ID(), -937.5466f, -2968.713f, 12.9451f, 1, false, 0, 1);
			set_entity_heading(PLAYER::PLAYER_PED_ID(), 111.5016f);
			set_entity_load_collision_flag(PLAYER::PLAYER_PED_ID(), true);
			break;
	}
}

void func_106()
{
	switch (iLocal_3180)
	{
		case 2:
			set_player_wanted_level(player_id(), false, 0);
			set_player_wanted_level_now(player_id(), 0);
			clear_area(-1026.8f, -492.1f, 36f, 18f, 1, 0, 0, false);
			set_all_vehicle_generators_active_in_area(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, false, 1);
			remove_vehicles_from_generators_in_area(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0);
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("surano"));
			STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) || !STREAMING::HAS_MODEL_LOADED(joaat("surano"))) || !STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				wait(false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
			{
				clear_area(vLocal_3294, 5f, 1, 0, 0, false);
				iLocal_3259 = create_vehicle(joaat("rapidgt"), vLocal_3294, fLocal_3321, 1, true);
				set_vehicle_colours(iLocal_3259, 112, 112);
				ENTITY::SET_ENTITY_HEALTH(iLocal_3259, 3000);
				set_vehicle_strong(iLocal_3259, true);
				set_model_as_no_longer_needed(joaat("rapidgt"));
				set_vehicle_model_is_suppressed(joaat("rapidgt"), true);
				_0x3910051CCECDB00C(iLocal_3259, true);
				set_vehicle_has_strong_axles(iLocal_3259, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("surano")))
				{
					clear_area(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, false);
					iLocal_3276 = create_vehicle(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, true);
					set_vehicle_colours(iLocal_3276, false, false);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3276, 3000);
					set_vehicle_strong(iLocal_3276, true);
					set_model_as_no_longer_needed(joaat("surano"));
					set_vehicle_model_is_suppressed(joaat("surano"), true);
					set_vehicle_has_strong_axles(iLocal_3276, true);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3277))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
				{
					clear_area(vLocal_3294, 5f, 1, 0, 0, false);
					iLocal_3277 = create_vehicle(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, true);
					set_vehicle_colours(iLocal_3277, 89, 89);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3277, 3000);
					set_vehicle_strong(iLocal_3277, true);
					set_model_as_no_longer_needed(joaat("carbonizzare"));
					set_vehicle_model_is_suppressed(joaat("carbonizzare"), true);
					set_vehicle_has_strong_axles(iLocal_3277, true);
				}
			}
			break;
		
		case 3:
			prepare_music_event("TRV4_CHASE");
			set_player_wanted_level(player_id(), false, 0);
			set_player_wanted_level_now(player_id(), 0);
			func_158();
			clear_area(vLocal_3297, 200f, 1, 0, 0, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				iLocal_3258 = create_vehicle(joaat("cogcabrio"), vLocal_3297, fLocal_3322, 1, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3258, true, true, true, true, true, false, 0, false);
				set_vehicle_colours(iLocal_3258, 27, 27);
				set_model_as_no_longer_needed(joaat("cogcabrio"));
				_0x153973AB99FE8980(iLocal_3258, "SOL_3_MOLLY_CAR_Group", 0f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
			{
				iLocal_3222 = PED::CREATE_PED_inside_vehicle(iLocal_3258, 26, joaat("ig_molly"), -1, 1, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3222, true, true, true, true, true, false, 0, false);
				set_entity_invincible(iLocal_3222, true);
				set_ped_can_be_targetted(iLocal_3222, false);
				set_model_as_no_longer_needed(joaat("ig_molly"));
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3222, 1862763509);
			}
			if (func_23())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
				{
					if (func_157())
					{
						if (!is_this_model_a_heli(func_156()) && !is_this_model_a_plane(func_156()))
						{
							iLocal_3259 = func_125(vLocal_3312, fLocal_3325);
							set_model_as_no_longer_needed(func_156());
							set_vehicle_has_strong_axles(iLocal_3259, true);
						}
						else
						{
							iLocal_3259 = create_vehicle(joaat("rapidgt"), vLocal_3312, fLocal_3325, 1, true);
							set_vehicle_colours(iLocal_3259, 112, 112);
						}
					}
					else
					{
						iLocal_3259 = create_vehicle(joaat("rapidgt"), vLocal_3312, fLocal_3325, 1, true);
						set_vehicle_colours(iLocal_3259, 112, 112);
					}
					ENTITY::SET_ENTITY_HEALTH(iLocal_3259, 3000);
					set_vehicle_strong(iLocal_3259, true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_3259, false, true, false, false, false, false, 0, false);
					_0x3910051CCECDB00C(iLocal_3259, true);
					set_model_as_no_longer_needed(joaat("rapidgt"));
					set_vehicle_has_strong_axles(iLocal_3259, true);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
			{
				iLocal_3259 = create_vehicle(joaat("rapidgt"), vLocal_3312, fLocal_3325, 1, true);
				set_vehicle_colours(iLocal_3259, 112, 112);
				set_model_as_no_longer_needed(joaat("rapidgt"));
				ENTITY::SET_ENTITY_HEALTH(iLocal_3259, 3000);
				set_vehicle_strong(iLocal_3259, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3259, false, true, false, false, false, false, 0, false);
				_0x3910051CCECDB00C(iLocal_3259, true);
				set_vehicle_has_strong_axles(iLocal_3259, true);
			}
			break;
		
		case 5:
			iLocal_3352 = 0;
			clear_area(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, false);
			settimera(false);
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			request_waypoint_recording("BB_MOLLY_2");
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("ig_molly"));
			STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("prop_cs_film_reel_01"));
			request_vehicle_recording(68, "BB_Chase");
			request_vehicle_recording(69, "BB_Chase");
			request_waypoint_recording("Trev4_5");
			request_ptfx_asset();
			request_anim_dict("move_f@film_reel_arms");
			request_anim_dict("misssolomon_3");
			while (((((((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !get_is_waypoint_recording_loaded("BB_MOLLY_2")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_molly"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_film_reel_01"))) || !has_vehicle_recording_been_loaded(68, "BB_Chase")) || !has_vehicle_recording_been_loaded(69, "BB_Chase")) || !get_is_waypoint_recording_loaded("Trev4_5")) || !has_ptfx_asset_loaded()) || !has_anim_dict_loaded("move_f@film_reel_arms")) || !has_anim_dict_loaded("misssolomon_3"))
			{
				wait(false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
			{
				iLocal_3222 = PED::CREATE_PED(26, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, 1, true);
				set_entity_invincible(iLocal_3222, true);
				set_ped_can_be_targetted(iLocal_3222, false);
				set_blocking_of_non_temporary_events(iLocal_3222, true);
				set_model_as_no_longer_needed(joaat("ig_molly"));
				set_entity_load_collision_flag(iLocal_3222, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3222, 1862763509);
			}
			iLocal_3283 = create_object(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, true, false);
			attach_entity_to_entity(iLocal_3283, iLocal_3222, get_ped_bone_index(iLocal_3222, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
			{
				iLocal_3266 = create_vehicle(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, true);
				set_vehicle_livery(iLocal_3266, 2);
				set_vehicle_is_considered_by_player(iLocal_3266, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3266, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3266, true, true, true, true, true, false, 0, false);
				set_model_as_no_longer_needed(joaat("jet"));
				set_entity_lod_dist(iLocal_3266, 500);
			}
			if (func_23())
			{
				if (func_157())
				{
					func_123();
					while (!func_112())
					{
						wait(false);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
				{
					if (func_157())
					{
						iLocal_3259 = func_125(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						_0x3910051CCECDB00C(iLocal_3259, true);
						set_model_as_no_longer_needed(func_156());
						set_vehicle_has_strong_axles(iLocal_3259, true);
					}
					else
					{
						iLocal_3259 = create_vehicle(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, true);
						set_vehicle_colours(iLocal_3259, 112, 112);
						_0x3910051CCECDB00C(iLocal_3259, true);
						set_model_as_no_longer_needed(joaat("rapidgt"));
						set_vehicle_has_strong_axles(iLocal_3259, true);
					}
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
			{
				iLocal_3259 = create_vehicle(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, true);
				set_vehicle_colours(iLocal_3259, 112, 112);
				set_model_as_no_longer_needed(joaat("rapidgt"));
				_0x3910051CCECDB00C(iLocal_3259, true);
				set_vehicle_has_strong_axles(iLocal_3259, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				iLocal_3258 = create_vehicle(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, true);
				set_vehicle_colours(iLocal_3258, 27, 27);
				set_model_as_no_longer_needed(joaat("cogcabrio"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3263))
			{
				iLocal_3263 = create_vehicle(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3248))
			{
				iLocal_3248 = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, true);
				give_weapon_to_ped(iLocal_3248, joaat("weapon_pistol"), 1000, true, true);
				func_111(iLocal_3248, 0);
				set_model_as_no_longer_needed(joaat("s_m_y_cop_01"));
			}
			settimera(false);
			func_110(2, 1);
			iLocal_3360 = 1;
			break;
		
		case 8:
			clear_area(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, false);
			settimera(false);
			iLocal_3352 = 0;
			iLocal_3360 = 0;
			iLocal_3339 = 0;
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
			request_vehicle_recording(68, "BB_Chase");
			request_vehicle_recording(69, "BB_Chase");
			request_ptfx_asset();
			while ((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01"))) || !has_vehicle_recording_been_loaded(68, "BB_Chase")) || !has_vehicle_recording_been_loaded(69, "BB_Chase")) || !has_ptfx_asset_loaded())
			{
				wait(false);
			}
			func_109();
			if (func_23())
			{
				if (func_157())
				{
					func_123();
					while (!func_112())
					{
						wait(false);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
				{
					if (func_157())
					{
						iLocal_3259 = func_125(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						_0x3910051CCECDB00C(iLocal_3259, true);
						set_model_as_no_longer_needed(func_156());
						set_vehicle_has_strong_axles(iLocal_3259, true);
					}
					else
					{
						iLocal_3259 = create_vehicle(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, true);
						set_vehicle_colours(iLocal_3259, 112, 112);
						_0x3910051CCECDB00C(iLocal_3259, true);
						set_model_as_no_longer_needed(joaat("rapidgt"));
						set_vehicle_has_strong_axles(iLocal_3259, true);
					}
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
			{
				iLocal_3259 = create_vehicle(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, true);
				set_vehicle_colours(iLocal_3259, 112, 112);
				set_model_as_no_longer_needed(joaat("rapidgt"));
				_0x3910051CCECDB00C(iLocal_3259, true);
				set_vehicle_has_strong_axles(iLocal_3259, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				iLocal_3258 = create_vehicle(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, true);
				set_vehicle_colours(iLocal_3258, 27, 27);
				set_model_as_no_longer_needed(joaat("cogcabrio"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3263))
			{
				iLocal_3263 = create_vehicle(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3248))
			{
				iLocal_3248 = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, true);
				give_weapon_to_ped(iLocal_3248, joaat("weapon_pistol"), 1000, true, true);
				func_111(iLocal_3248, 0);
				set_model_as_no_longer_needed(joaat("s_m_y_cop_01"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
			{
				iLocal_3282 = create_object(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
				set_entity_quaternion(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
				set_model_as_no_longer_needed(joaat("prop_jet_bloodsplat_01"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
			{
				iLocal_3266 = create_vehicle(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, true);
				set_vehicle_livery(iLocal_3266, 2);
				set_vehicle_is_considered_by_player(iLocal_3266, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3266, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3266, true, true, true, true, true, false, 0, false);
				set_model_as_no_longer_needed(joaat("jet"));
				iLocal_3763 = start_particle_fx_looped_on_entity("scr_trev4_747_engine_damage", iLocal_3266, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1f, 0, 0, 0);
				set_entity_lod_dist(iLocal_3266, 500);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3228))
			{
				iLocal_3228 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, 1, true);
				func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
				set_model_as_no_longer_needed(joaat("s_m_y_airworker"));
				set_ped_can_be_targetted(iLocal_3228, true);
				set_blocking_of_non_temporary_events(iLocal_3228, true);
				AI::TASK_SMART_FLEE_PED(iLocal_3228, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
				set_ped_keep_task(iLocal_3228, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3228, false, false, false, false, false, false, 0, false);
				set_ped_as_no_longer_needed(&iLocal_3228);
			}
			if (func_108(0) == 0 || func_108(0) == joaat("weapon_unarmed"))
			{
				func_107(1);
			}
			break;
	}
}

void func_107(int iParam0)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = get_best_ped_weapon(PLAYER::PLAYER_PED_ID(), 0);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, iParam0);
		}
	}
}

auto func_108(int iParam0)
{
	if (Global_91315 > 0)
	{
		return Global_95496.f_21[iParam0];
	}
	return Global_93091.f_21[iParam0];
}

void func_109()
{
	if (iLocal_3339 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3268[0]))
		{
			iLocal_3268[0] = create_vehicle(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, 1, true);
			_0x428BACCDF5E26EAD(iLocal_3268[0], false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3233[0]))
		{
			iLocal_3233[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, true);
			give_weapon_to_ped(iLocal_3233[0], joaat("weapon_pistol"), 1000, true, true);
			set_ped_accuracy(iLocal_3233[0], 20);
			set_entity_load_collision_flag(iLocal_3233[0], true);
			task_aim_gun_at_entity(iLocal_3233[0], PLAYER::PLAYER_PED_ID(), -1, 1);
			func_111(iLocal_3233[0], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3267))
		{
			iLocal_3267 = create_vehicle(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, true);
			set_vehicle_on_ground_properly(iLocal_3267);
			set_model_as_no_longer_needed(joaat("shamal"));
			ENTITY::SET_ENTITY_HEALTH(iLocal_3267, 2000);
			set_vehicle_door_open(iLocal_3267, false, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3233[6]))
		{
			iLocal_3233[6] = PED::CREATE_PED_inside_vehicle(iLocal_3268[0], 6, joaat("s_m_y_cop_01"), false, 1, true);
			give_weapon_to_ped(iLocal_3233[6], joaat("weapon_pistol"), 1000, true, true);
			set_ped_accuracy(iLocal_3233[6], 20);
			set_entity_load_collision_flag(iLocal_3233[6], true);
			set_blocking_of_non_temporary_events(iLocal_3233[6], true);
			func_111(iLocal_3233[6], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3233[7]))
		{
			iLocal_3233[7] = PED::CREATE_PED_inside_vehicle(iLocal_3268[0], 6, joaat("s_m_y_cop_01"), -1, 1, true);
			give_weapon_to_ped(iLocal_3233[7], joaat("weapon_pistol"), 1000, true, true);
			set_ped_accuracy(iLocal_3233[7], 20);
			set_entity_load_collision_flag(iLocal_3233[7], true);
			set_blocking_of_non_temporary_events(iLocal_3233[7], true);
			func_111(iLocal_3233[7], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3268[1]))
		{
			iLocal_3268[1] = create_vehicle(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, 1, true);
			_0x428BACCDF5E26EAD(iLocal_3268[1], false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3233[8]))
		{
			iLocal_3233[8] = PED::CREATE_PED_inside_vehicle(iLocal_3268[1], 6, joaat("s_m_y_cop_01"), false, 1, true);
			give_weapon_to_ped(iLocal_3233[8], joaat("weapon_pistol"), 1000, true, true);
			set_ped_accuracy(iLocal_3233[8], 20);
			set_entity_load_collision_flag(iLocal_3233[8], true);
			set_blocking_of_non_temporary_events(iLocal_3233[8], true);
			func_111(iLocal_3233[8], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3233[9]))
		{
			iLocal_3233[9] = PED::CREATE_PED_inside_vehicle(iLocal_3268[1], 6, joaat("s_m_y_cop_01"), -1, 1, true);
			give_weapon_to_ped(iLocal_3233[9], joaat("weapon_pistol"), 1000, true, true);
			set_ped_accuracy(iLocal_3233[9], 20);
			set_entity_load_collision_flag(iLocal_3233[9], true);
			set_blocking_of_non_temporary_events(iLocal_3233[9], true);
			func_111(iLocal_3233[9], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3233[10]))
		{
			iLocal_3233[10] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, 1, true);
			give_weapon_to_ped(iLocal_3233[10], joaat("weapon_pistol"), 1000, true, true);
			set_ped_accuracy(iLocal_3233[10], 20);
			set_entity_load_collision_flag(iLocal_3233[10], true);
			set_blocking_of_non_temporary_events(iLocal_3233[10], true);
			func_111(iLocal_3233[10], 0);
			set_ped_ducking(iLocal_3233[10], 1);
		}
		iLocal_3339 = 1;
	}
}

void func_110(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&Global_25277, iParam0);
	StringCopy(&(Global_25278[iParam0 /*6*/]), get_this_script_name(), 24);
	Global_25333[iParam0] = iParam1;
}

void func_111(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_55779[iVar0 /*2*/] != 0)
			{
				if (Global_55779[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55778)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_55779[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_55779[iVar1 /*2*/] = iParam0;
	Global_55779[iVar1 /*2*/].f_1 = 7;
	Global_55778++;
}

int func_112()
{
	return func_113(&(Global_95496.f_2311));
}

bool func_113(auto uParam0)
{
	if (func_114(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(*uParam0.f_12.f_66))
		{
			return true;
		}
		else
		{
			return false;
		}
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

bool func_114(auto uParam0)
{
	if (*uParam0.f_12.f_66 == 0)
	{
		return false;
	}
	if (!func_116(*uParam0.f_12.f_66, 0))
	{
		return false;
	}
	if (*uParam0.f_12.f_66 == joaat("stunt") && func_115(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return false;
	}
	return true;
}

bool func_115(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
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

bool func_116(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (!is_model_a_vehicle(iParam0))
	{
		return false;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_122())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < get_num_dlc_vehicles())
		{
			if (get_dlc_vehicle_data(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (_is_dlc_data_empty(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_121() && !func_120()) && !func_119()) && !func_118()) && !func_122())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || GAMEPLAY::IS_PC_VERSION()) || is_orbis_version())
		{
		}
		else if (!func_119())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_117(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = _get_posix_time();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_118()
{
	return false;
}

bool func_119()
{
	return true;
}

bool func_120()
{
	return true;
}

bool func_121()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_122()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					GAMEPLAY::SET_BIT(&iVar0, false);
					_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return true;
	}
	else if (Global_138274 == 3)
	{
		return false;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

void func_123()
{
	func_124(&(Global_95496.f_2311));
}

void func_124(auto uParam0)
{
	if (func_114(uParam0))
	{
		STREAMING::REQUEST_MODEL(*uParam0.f_12.f_66);
	}
}

int func_125(Vector3 vParam0, Vector3 fParam1)
{
	return func_126(&(Global_95496.f_2311), vParam0, fParam3, 0);
}

int func_126(auto uParam0, Vector3 vParam1, Vector3 fParam2, int iParam3)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	auto uVar5;
	int iVar8;
	
	if (func_114(uParam0))
	{
		if (func_68(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = {*uParam0};
			fParam4 = *uParam0.f_6;
		}
		if (*uParam0.f_12.f_66 == joaat("monster") || *uParam0.f_12.f_66 == joaat("marshall"))
		{
			if (is_point_in_angled_area(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, true))
			{
				vParam1 = {-850.93f, 158.82f, 65.7f};
				fParam4 = 89.5f;
			}
		}
		if (func_113(uParam0))
		{
			clear_area(vParam1, 5f, 1, 0, 0, false);
			func_155(vParam1, 5f, 0);
			iVar0 = create_vehicle(*uParam0.f_12.f_66, vParam1, fParam4, 1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				vVar1 = {ENTITY::GET_ENTITY_COORDS(iVar0, 1)};
				if (vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					set_entity_coords_no_offset(iVar0, vParam1, 0, 0, 1);
				}
				func_147(iVar0, uParam0.f_12, 0, 1);
				iVar4 = true;
				if (is_this_model_a_boat(*uParam0.f_12.f_66) || _is_this_model_an_emergency_boat(*uParam0.f_12.f_66))
				{
					if (!test_probe_against_water(vParam1.x, vParam1.y, vParam1.z + 30f, vParam1.x, vParam1.y, vParam1.z - 30f, &uVar5))
					{
						iVar4 = false;
					}
				}
				if (iVar4)
				{
					set_vehicle_on_ground_properly(iVar0);
				}
				if (*uParam0.f_7 == 1)
				{
					if (iParam5)
					{
						if (is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_146(*uParam0.f_11, 1);
						}
						else if (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_146(*uParam0.f_11, 2);
						}
					}
					_0xAB04325045427AAE(iVar0, 0);
					_0x428BACCDF5E26EAD(iVar0, false);
					set_vehicle_has_strong_axles(iVar0, true);
					func_145(iVar0, *uParam0.f_11);
				}
				else if ((!func_143(iVar0, *uParam0.f_3, *uParam0.f_8) && *uParam0.f_10) && GAMEPLAY::ARE_STRINGS_EQUAL(get_this_script_name(), "startup_positioning"))
				{
					iVar8 = func_142(iVar0);
					if (iVar8 == -1)
					{
						*uParam0.f_10 = 0;
					}
					else
					{
						func_137(iVar8);
					}
				}
				if (((Global_91278 != 13 && Global_91278 != 10) && Global_91278 != 11) && Global_91278 != 12)
				{
					if (GAMEPLAY::GET_HASH_KEY(&(Global_91278.f_3)) == Global_69307)
					{
						if (*uParam0.f_12.f_66 == Global_101154.f_18807.f_69[21 /*78*/].f_66)
						{
							func_134(24, 0);
							func_137(24);
						}
					}
				}
				if (*uParam0.f_9 == 1)
				{
					func_127(iVar0, *uParam0.f_11);
				}
				set_model_as_no_longer_needed(*uParam0.f_12.f_66);
				vVar1 = {ENTITY::GET_ENTITY_COORDS(iVar0, 1)};
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_128(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101154.f_1826.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101154.f_18807.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
		{
			if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101154.f_18807.f_5590 = iParam1;
	Global_69224 = iParam0;
	Global_101154.f_18807.f_5588 = 1;
	func_39(iParam0, &(Global_101154.f_18807.f_5510));
}

bool func_128(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_44(iParam0, 0, 0)) || func_44(iParam0, 1, 0)) || func_44(iParam0, 2, 0)) || func_34(iParam0) != 145) || func_133(iParam0)) || func_132(iParam0)) || func_131(iParam0)) || func_130(iParam0)) || !func_129(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_132(iParam0))
		{
		}
		if (func_132(iParam0))
		{
		}
		if (func_44(iParam0, 0, 0))
		{
		}
		if (func_44(iParam0, 1, 0))
		{
		}
		if (func_44(iParam0, 2, 0))
		{
		}
		if (func_34(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_129(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_116(iParam0, 0))
	{
		return false;
	}
	if (((is_this_model_a_boat(iParam0) || is_this_model_a_plane(iParam0)) || is_this_model_a_heli(iParam0)) || is_this_model_a_train(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
			break;
	}
	return true;
}

bool func_130(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && GAMEPLAY::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_116(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88972[iVar0]))
		{
			if (Global_88972[iVar0] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_132(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_88942[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_133(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68319.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_134(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_136(iParam0, 0))
		{
			func_135(iParam0, 1, 0);
			func_135(iParam0, 2, 0);
			func_135(iParam0, 3, 0);
			func_135(iParam0, 4, 0);
			func_135(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_135(iParam0, 0, 0);
	}
}

void func_135(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

int func_136(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_18807[iParam0], iParam1);
}

void func_137(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_141(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iParam0]))
		{
			iVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (is_vehicle_driveable(Global_68319.f_139[iParam0], 0))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Global_68319.f_139[iParam0], 0))
					{
						iVar0 = false;
					}
				}
			}
			if (iVar0)
			{
				set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
				delete_vehicle(&(Global_68319.f_139[iParam0]));
			}
		}
		Global_68319[iParam0] = 1;
		if (GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_136(iParam0, 0)) && Global_69228.f_66 == 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] != 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] > 3) && (!func_139(0, Global_68319.f_555[0 /*21*/].f_12) || !func_139(1, Global_68319.f_555[0 /*21*/].f_12)))
			{
				func_138(&(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]), &Global_69228);
				Global_69306 = Global_101154.f_18807.f_5591;
			}
			func_134(iParam0, 0);
		}
	}
}

void func_138(auto uParam0, auto uParam1)
{
	*uParam1.f_66 = *uParam0.f_66;
	*uParam1 = *uParam0;
	*uParam1.f_1 = {*uParam0.f_1};
	*uParam1.f_5 = *uParam0.f_5;
	*uParam1.f_6 = *uParam0.f_6;
	*uParam1.f_7 = *uParam0.f_7;
	*uParam1.f_8 = *uParam0.f_8;
	*uParam1.f_9 = {*uParam0.f_9};
	*uParam1.f_59 = {*uParam0.f_59};
	*uParam1.f_62 = *uParam0.f_62;
	*uParam1.f_63 = *uParam0.f_63;
	*uParam1.f_64 = *uParam0.f_64;
	*uParam1.f_65 = *uParam0.f_65;
	*uParam1.f_77 = *uParam0.f_77;
	*uParam1.f_67 = *uParam0.f_67;
	*uParam1.f_69 = *uParam0.f_69;
	*uParam1.f_68 = *uParam0.f_68;
	*uParam1.f_71 = *uParam0.f_71;
	*uParam1.f_72 = *uParam0.f_72;
	*uParam1.f_73 = *uParam0.f_73;
	*uParam1.f_74 = *uParam0.f_74;
	*uParam1.f_75 = *uParam0.f_75;
	*uParam1.f_76 = *uParam0.f_76;
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_140(&(Global_101154.f_18807.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_116(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

auto func_140(auto uParam0)
{
	return *uParam0;
}

int func_141(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = {0f, 0f, 0f};
	*uParam0.f_3 = 0f;
	*uParam0.f_4 = 0;
	StringCopy(uParam0.f_5, "", 16);
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_12 = 145;
	*uParam0.f_13 = -1;
	*uParam0.f_14 = 0;
	*uParam0.f_15 = {0f, 0f, 0f};
	*uParam0.f_18 = {0f, 0f, 0f};
	switch (iParam1)
	{
		case 0:
			*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
			*uParam0.f_3 = 157.5705f;
			*uParam0.f_4 = func_36(0, 1);
			*uParam0.f_12 = 0;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = {1970.943f, 3801.684f, 31.1396f};
			*uParam0.f_3 = 301.3964f;
			*uParam0.f_4 = func_36(0, 1);
			*uParam0.f_12 = 0;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
			*uParam0.f_3 = 180.0808f;
			*uParam0.f_4 = func_36(1, 1);
			*uParam0.f_12 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
			*uParam0.f_3 = 141.6114f;
			*uParam0.f_4 = func_36(1, 2);
			*uParam0.f_12 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 19);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = {10.9281f, 545.669f, 174.7951f};
			*uParam0.f_3 = 61.392f;
			*uParam0.f_4 = func_36(1, 1);
			*uParam0.f_12 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = {6.1093f, 544.9742f, 174.2835f};
			*uParam0.f_3 = 92.1548f;
			*uParam0.f_4 = func_36(1, 2);
			*uParam0.f_12 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 19);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = {1981.416f, 3808.131f, 31.1384f};
			*uParam0.f_3 = 117.2557f;
			*uParam0.f_4 = func_36(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
			*uParam0.f_3 = 35.7505f;
			*uParam0.f_4 = func_36(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = {148.2868f, -1270.569f, 28.2252f};
			*uParam0.f_3 = 208.4685f;
			*uParam0.f_4 = func_36(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = {1459.509f, -1380.45f, 78.3259f};
			*uParam0.f_3 = 99.6211f;
			*uParam0.f_4 = joaat("scorcher");
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
			*uParam0.f_3 = 98.3867f;
			*uParam0.f_4 = joaat("seashark");
			iVar0 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			break;
		
		case 11:
			*uParam0 = {353.0926f, 3577.593f, 32.351f};
			*uParam0.f_3 = 16.6205f;
			*uParam0.f_4 = joaat("duster");
			iVar0 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			break;
		
		case 12:
			*uParam0.f_14 = 0;
			*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
			*uParam0.f_3 = 329.1082f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 359;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 13:
			*uParam0.f_14 = 1;
			*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
			*uParam0.f_3 = 329.5137f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 359;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 14:
			*uParam0.f_14 = 2;
			*uParam0 = {1735.586f, 3294.531f, 40.1651f};
			*uParam0.f_3 = 194.9525f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 359;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 15:
			*uParam0.f_14 = 3;
			*uParam0 = {-846.27f, -1363.19f, 0.22f};
			*uParam0.f_3 = 108.78f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 356;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 16:
			*uParam0.f_14 = 4;
			*uParam0 = {-849.47f, -1354.99f, 0.24f};
			*uParam0.f_3 = 109.84f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 356;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 17:
			*uParam0.f_14 = 5;
			*uParam0 = {-852.47f, -1346.2f, 0.21f};
			*uParam0.f_3 = 108.76f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 356;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 18:
			*uParam0.f_14 = 6;
			*uParam0 = {-745.857f, -1433.904f, 4.0005f};
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-756.2952f, -1441.609f, 2.9184f};
			*uParam0.f_18 = {-738.0606f, -1423.068f, 8.2835f};
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 19:
			*uParam0.f_14 = 7;
			*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-772.8158f, -1459.957f, 3.2894f};
			*uParam0.f_18 = {-754.3353f, -1440.836f, 8.3334f};
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 20:
			*uParam0.f_14 = 8;
			*uParam0 = {1769.3f, 3244f, 41.1f};
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 360;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 21:
			*uParam0.f_14 = 9;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 357;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 22:
			*uParam0.f_14 = 10;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 357;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 23:
			*uParam0.f_14 = 11;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 357;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = iParam1 - 26;
			*uParam0.f_14 = 12 + iVar1;
			*uParam0 = {196.2794f, -1020.479f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = iParam1 - 29;
			*uParam0.f_14 = 15 + iVar1;
			*uParam0 = {199.8872f, -1020.048f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = iParam1 - 32;
			*uParam0.f_14 = 18 + iVar1;
			*uParam0 = {203.6006f, -1019.776f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 24:
			*uParam0.f_14 = 21;
			*uParam0 = {0f, 0f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = 0;
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 11);
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 25:
			*uParam0.f_14 = 22;
			*uParam0 = {723.2515f, -632.0496f, 27.1484f};
			*uParam0.f_3 = 12.9316f;
			*uParam0.f_4 = joaat("tailgater");
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 11);
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = {-51.23f, 3111.9f, 24.95f};
			*uParam0.f_3 = 46.78f;
			*uParam0.f_4 = joaat("proptrailer");
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
			*uParam0.f_3 = 308.0596f;
			*uParam0.f_4 = joaat("bjxl");
			*uParam0.f_10 = 126;
			*uParam0.f_11 = 126;
			GAMEPLAY::SET_BIT(uParam0.f_9, 9);
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = {-2892.93f, 3192.37f, 11.66f};
			*uParam0.f_3 = -132.35f;
			*uParam0.f_4 = joaat("velum");
			*uParam0.f_10 = 157;
			*uParam0.f_11 = 157;
			GAMEPLAY::SET_BIT(uParam0.f_9, 9);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = {1744.308f, 3270.673f, 40.2076f};
			*uParam0.f_3 = 125f;
			*uParam0.f_4 = joaat("cargobob3");
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = {1751.44f, 3322.643f, 42.1855f};
			*uParam0.f_3 = 268.134f;
			*uParam0.f_4 = joaat("submersible");
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = {1377.104f, -2076.2f, 52f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("towtruck");
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = {1380.42f, -2072.77f, 51.7607f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("trash");
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = {1359.389f, 3618.441f, 33.8907f};
			*uParam0.f_3 = 108.2337f;
			*uParam0.f_4 = joaat("barracks");
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = {693.1154f, -1018.155f, 21.6387f};
			*uParam0.f_3 = 177.6454f;
			*uParam0.f_4 = 1938952078;
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = {-73.6963f, 495.124f, 143.5226f};
			*uParam0.f_3 = 155.5994f;
			*uParam0.f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
			*uParam0.f_3 = 294.993f;
			*uParam0.f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = {533.9048f, -169.2469f, 53.7005f};
			*uParam0.f_3 = 1.2998f;
			*uParam0.f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
			*uParam0.f_3 = 267.7392f;
			*uParam0.f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
			*uParam0.f_3 = 350.7697f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
			*uParam0.f_3 = 48.9311f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = {-1062.076f, -226.7637f, 37.157f};
			*uParam0.f_3 = 234.2767f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = {68.16914f, -1558.958f, 29.46904f};
			*uParam0.f_3 = 49.90575f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = {589.4399f, 2736.708f, 42.03316f};
			*uParam0.f_3 = -175.7105f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = {-488.774f, -344.5721f, 34.36356f};
			*uParam0.f_3 = 82.4042f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = {288.8808f, -585.4728f, 43.15428f};
			*uParam0.f_3 = -20.80707f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = {304.8294f, -1383.674f, 31.67744f};
			*uParam0.f_3 = -41.11603f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = {1126.194f, -1481.486f, 34.7016f};
			*uParam0.f_3 = -91.43369f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = {-1598.36f, 5252.84f, 0f};
			*uParam0.f_3 = 28.14f;
			*uParam0.f_4 = joaat("submersible");
			*uParam0.f_13 = 308;
			GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = {-1602.62f, 5260.37f, 0.86f};
			*uParam0.f_3 = 25.32f;
			*uParam0.f_4 = joaat("dinghy");
			*uParam0.f_13 = 404;
			GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = {2116.571f, 4763.279f, 40.1596f};
			*uParam0.f_3 = 198.723f;
			*uParam0.f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = {1133.21f, 120.2f, 80.9f};
			*uParam0.f_3 = 134.4f;
			if (func_122())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::SET_BIT(uParam0.f_9, true);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = {-806.31f, -2679.65f, 13.9f};
			*uParam0.f_3 = 150.54f;
			if (func_122())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::SET_BIT(uParam0.f_9, true);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = {1985.85f, 3828.96f, 31.98f};
			*uParam0.f_3 = -16.58f;
			*uParam0.f_4 = joaat("blazer3");
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = {3870.75f, 4464.67f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = joaat("submersible2");
			*uParam0.f_13 = 308;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = {1257.729f, -2564.474f, 41.717f};
			*uParam0.f_3 = 284.5561f;
			*uParam0.f_4 = joaat("dukes2");
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = {643.2823f, 3014.152f, 42.2733f};
			*uParam0.f_3 = 128.0554f;
			*uParam0.f_4 = joaat("dukes2");
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = {38.9368f, 850.8677f, 196.3f};
			*uParam0.f_3 = 311.6813f;
			*uParam0.f_4 = joaat("dodo");
			GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = {1333.875f, 4262.226f, 30.78f};
			*uParam0.f_3 = 262.5293f;
			*uParam0.f_4 = joaat("dodo");
			GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_9, 10))
	{
		*uParam0.f_4 = Global_101154.f_18807.f_69[*uParam0.f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((*uParam0.f_4 == joaat("miljet") || *uParam0.f_4 == joaat("besra")) || *uParam0.f_4 == joaat("luxor")) || *uParam0.f_4 == joaat("shamal")) || *uParam0.f_4 == joaat("titan")) || *uParam0.f_4 == joaat("luxor2"))
			{
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				*uParam0.f_3 = 106.0906f;
			}
		}
		if (!func_68(Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/]};
		}
		if (Global_101154.f_18807.f_1934[*uParam0.f_14] != -1f)
		{
			*uParam0.f_3 = Global_101154.f_18807.f_1934[*uParam0.f_14];
		}
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_9, 19))
	{
		if (!func_68(Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][*uParam0.f_12];
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(*uParam0.f_9, 20))
	{
		if (!func_68(Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][*uParam0.f_12];
		}
	}
	return iVar0;
}

int func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_68319.f_484[iVar0], 0)) && is_vehicle_driveable(Global_68319.f_484[iVar0], 0))
		{
			get_vehicle_colours(iParam0, &iVar1, &iVar2);
			get_vehicle_colours(Global_68319.f_484[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_68319.f_484[iVar0]) && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_143(int iParam0, Vector3 vParam1, int iParam2)
{
	int iVar0;
	var[] uVar1 = new var[3];
	int iVar5;
	int iVar6;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_144(iParam0, Global_68319.f_139[38], 0))
			{
				func_137(38);
				return true;
			}
			break;
		
		case 1938952078:
			if (func_144(iParam0, Global_68319.f_139[43], 1))
			{
				func_137(43);
				return true;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = get_ped_nearby_vehicles(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= iVar5 - 1)
			{
				if (func_144(iParam0, uVar1[iVar6], 1) && func_115(ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!iParam4 || func_68(vParam1, 0f, 0f, 0f, 0)) || INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], 1), 1) < 10f)
					{
						delete_vehicle(&iParam0);
						return true;
					}
					else
					{
						return false;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[14]) && is_vehicle_driveable(iParam0, 0)) && is_vehicle_driveable(Global_68319.f_484[14], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_68319.f_484[14]) == joaat("luxor2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[14]))
				{
					func_137(14);
					return true;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[20]) && is_vehicle_driveable(iParam0, 0)) && is_vehicle_driveable(Global_68319.f_484[20], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_68319.f_484[20]) == joaat("swift2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[20]))
				{
					func_137(20);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_144(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)) && is_vehicle_driveable(iParam1, 0))
	{
		if (iParam2)
		{
			get_vehicle_colours(iParam0, &iVar0, &iVar1);
			get_vehicle_colours(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_145(int iParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			Global_88942[iVar0] = iParam0;
			Global_88952[iVar0] = uParam1;
			Global_88962[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (is_this_model_a_car(Global_88962[iVar0]))
			{
				Global_88990[uParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88990[uParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			if (iParam0 == 145 || Global_88952[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_88942[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Global_88942[iVar0], 0))
					{
						set_entity_as_mission_entity(Global_88942[iVar0], false, 1);
						delete_vehicle(&(Global_88942[iVar0]));
						Global_88952[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_147(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (GAMEPLAY::GET_HASH_KEY(uParam1.f_1) != 0)
		{
			set_vehicle_number_plate_text(iParam0, uParam1.f_1);
		}
		if (*uParam1 >= 0 && *uParam1 < get_number_of_vehicle_number_plates())
		{
			set_vehicle_number_plate_text_index(iParam0, *uParam1);
		}
		if (*uParam1.f_66 == joaat("sovereign"))
		{
			*uParam1.f_5 = 111;
			*uParam1.f_6 = 111;
			*uParam1.f_7 = 111;
			*uParam1.f_8 = 156;
		}
		else if (*uParam1.f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, func_40(iVar0 + 1)))
			{
			}
			else
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, func_40(iVar0 + 1));
			}
		}
		else if (*uParam1.f_66 == joaat("sandking") || *uParam1.f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, func_40(iVar1 + 1)))
			{
			}
			else
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, func_40(iVar1 + 1));
			}
		}
		if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 13))
		{
			set_vehicle_custom_primary_colour(iParam0, *uParam1.f_71, *uParam1.f_72, *uParam1.f_73);
		}
		else
		{
			clear_vehicle_custom_primary_colour(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 12))
		{
			set_vehicle_custom_secondary_colour(iParam0, *uParam1.f_71, *uParam1.f_72, *uParam1.f_73);
		}
		else
		{
			clear_vehicle_custom_secondary_colour(iParam0);
		}
		set_vehicle_colours(iParam0, *uParam1.f_5, *uParam1.f_6);
		if (*uParam1.f_7 < 0)
		{
			*uParam1.f_7 = 0;
		}
		if (*uParam1.f_8 < 0)
		{
			*uParam1.f_8 = 0;
		}
		set_vehicle_extra_colours(iParam0, *uParam1.f_7, *uParam1.f_8);
		if (((GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 15) || func_154(iParam0)) || (((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0) && *uParam1.f_9[20] > 0)) && func_153())
		{
			*uParam1.f_62 = 0;
			*uParam1.f_63 = 0;
			*uParam1.f_64 = 0;
		}
		else if ((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0)
		{
			*uParam1.f_62 = 255;
			*uParam1.f_63 = 255;
			*uParam1.f_64 = 255;
		}
		set_vehicle_tyre_smoke_color(iParam0, *uParam1.f_62, *uParam1.f_63, *uParam1.f_64);
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			set_vehicle_window_tint(iParam0, 0);
		}
		else
		{
			set_vehicle_window_tint(iParam0, 0);
			set_vehicle_window_tint(iParam0, *uParam1.f_65);
		}
		set_vehicle_tyres_can_burst(iParam0, !GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 9));
		if (iParam2)
		{
			set_vehicle_doors_locked(iParam0, *uParam1.f_70);
		}
		_set_vehicle_neon_lights_colour(iParam0, *uParam1.f_74, *uParam1.f_75, *uParam1.f_76);
		_set_vehicle_neon_light_enabled(iParam0, 2, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 28));
		_set_vehicle_neon_light_enabled(iParam0, 3, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 29));
		_set_vehicle_neon_light_enabled(iParam0, 0, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 30));
		_set_vehicle_neon_light_enabled(iParam0, 1, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 31));
		set_vehicle_is_stolen(iParam0, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 10));
		if (get_vehicle_livery_count(iParam0) > 1 && *uParam1.f_67 >= 0)
		{
			set_vehicle_livery(iParam0, *uParam1.f_67);
		}
		if (*uParam1.f_69 > -1 && *uParam1.f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (*uParam1.f_69 == 6)
					{
						func_152(iParam0, *uParam1.f_69);
					}
				}
				else
				{
					func_152(iParam0, *uParam1.f_69);
				}
			}
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			if ((*uParam1.f_68 == 0 || *uParam1.f_68 == 3) || *uParam1.f_68 == 5)
			{
				raise_convertible_roof(iParam0, 1);
			}
			else
			{
				lower_convertible_roof(iParam0, 1);
			}
		}
		if (iParam3)
		{
			func_148(&iParam0, uParam1.f_9, uParam1.f_59);
		}
		if (!is_this_model_a_heli(*uParam1.f_66) && !is_this_model_a_boat(*uParam1.f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, func_40(iVar2 + 1)))
				{
					if (!is_vehicle_extra_turned_on(iParam0, iVar2 + 1))
					{
						set_vehicle_extra(iParam0, iVar2 + 1, false);
					}
				}
				else if (is_vehicle_extra_turned_on(iParam0, iVar2 + 1))
				{
					set_vehicle_extra(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 23))
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 22))
				{
					_set_vehicle_landing_gear(iParam0, 2);
				}
				else
				{
					_set_vehicle_landing_gear(iParam0, 3);
				}
			}
			else
			{
				_set_vehicle_landing_gear(iParam0, 4);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 27))
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

bool func_148(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	set_vehicle_mod_kit(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			toggle_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] > 0);
		}
		else if (get_vehicle_mod(*iParam0, iVar1) != *uParam1[iVar0] - 1)
		{
			remove_vehicle_mod(*iParam0, iVar1);
			if (*uParam1[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[0] > 0);
				}
				else if (iVar0 == 24)
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[1] > 0);
				}
				else
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, false);
				}
			}
		}
		iVar0++;
	}
	if (func_151(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && get_vehicle_mod(*iParam0, 24) != func_150(*iParam0, *uParam1[38] - 1))
	{
		set_vehicle_mod(*iParam0, 24, func_150(*iParam0, *uParam1[38] - 1), false);
	}
	if (func_149(*iParam0))
	{
		set_vehicle_strong(*iParam0, true);
		set_vehicle_has_strong_axles(*iParam0, true);
	}
	return true;
}

bool func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[16] cVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0)) && get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (get_vehicle_mod(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, get_mod_text_label(iParam0, iVar1, get_vehicle_mod(iParam0, iVar1)), 16);
				iVar2 = GAMEPLAY::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == GAMEPLAY::GET_HASH_KEY("MNU_CAGE") || iVar2 == GAMEPLAY::GET_HASH_KEY("SABRE_CAG"))
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_150(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = get_num_vehicle_mods(iParam0, 38);
		iVar1 = get_num_vehicle_mods(iParam0, 24);
		fVar2 = to_float(iParam1 + 1) / to_float(iVar0);
		iVar3 = floor(to_float(iVar1) * fVar2) - 1;
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = iVar0 - 1;
		}
		return iVar3;
	}
	return 0;
}

bool func_151(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return true;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_11649)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_11650)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_11648)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_11651)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_11653)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_11652)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
			break;
	}
	return false;
}

void func_152(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = get_vehicle_mod(iParam0, 24);
		iVar1 = get_vehicle_mod_variation(iParam0, 24);
		set_vehicle_wheel_type(iParam0, iParam1);
		if (iVar0 == -1)
		{
			remove_vehicle_mod(iParam0, 24);
		}
		else
		{
			set_vehicle_mod(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_153()
{
	return is_dlc_present(-1691188696);
}

int func_154(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (decor_is_registered_as_type("MPBitset", 3))
			{
				if (decor_exist_on(iParam0, "MPBitset"))
				{
					iVar0 = decor_get_int(iParam0, "MPBitset");
				}
				return GAMEPLAY::IS_BIT_SET(iVar0, 4);
			}
		}
	}
	return false;
}

void func_155(Vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_141(&(Global_68319.f_555[0 /*21*/]), iVar0))
		{
			if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vParam0, Global_68319.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_137(iVar0);
			}
		}
		iVar0++;
	}
}

auto func_156()
{
	return Global_95496.f_2311.f_12.f_66;
}

int func_157()
{
	return func_114(&(Global_95496.f_2311));
}

void func_158()
{
	iLocal_3293 = unk_0x67D02A194A2FC2BD("BREAKING_NEWS");
	STREAMING::REQUEST_MODEL(joaat("jet"));
	STREAMING::REQUEST_MODEL(joaat("police3"));
	STREAMING::REQUEST_MODEL(joaat("maverick"));
	STREAMING::REQUEST_MODEL(joaat("bison"));
	STREAMING::REQUEST_MODEL(joaat("blista"));
	STREAMING::REQUEST_MODEL(joaat("ig_molly"));
	STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
	STREAMING::REQUEST_MODEL(joaat("rapidgt"));
	request_vehicle_recording(45, "BB_Chase");
	request_vehicle_recording(35, "BB_Chase");
	request_vehicle_recording(2, "BB_Chase");
	request_vehicle_recording(54, "BB_Chase");
	request_vehicle_recording(55, "BB_Chase");
	request_vehicle_recording(67, "BB_Chase");
	func_160(1, "BB_Chase");
	if (func_23())
	{
		if (func_157())
		{
			if (!is_this_model_a_heli(func_156()) && !is_this_model_a_plane(func_156()))
			{
				func_123();
				while (!func_112())
				{
					wait(false);
				}
			}
		}
	}
	while (((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison"))) || !STREAMING::HAS_MODEL_LOADED(joaat("blista"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_molly"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")))
	{
		wait(false);
	}
	while (!has_scaleform_movie_loaded(iLocal_3293) || !func_159(1, "BB_Chase"))
	{
		wait(false);
	}
	while (((((!has_vehicle_recording_been_loaded(45, "BB_Chase") || !has_vehicle_recording_been_loaded(35, "BB_Chase")) || !has_vehicle_recording_been_loaded(2, "BB_Chase")) || !has_vehicle_recording_been_loaded(54, "BB_Chase")) || !has_vehicle_recording_been_loaded(55, "BB_Chase")) || !has_vehicle_recording_been_loaded(67, "BB_Chase"))
	{
		wait(false);
	}
}

int func_159(int iParam0, char* sParam1)
{
	return has_vehicle_recording_been_loaded(iParam0, sParam1);
}

void func_160(int iParam0, char* sParam1)
{
	request_vehicle_recording(iParam0, sParam1);
}

void func_161()
{
	func_187();
	func_185();
	clear_prints();
	_set_unk_map_flag(0);
	set_ignore_no_gps_flag(0);
	set_cinematic_button_active(true);
	if (_does_door_exist(iLocal_3220))
	{
		remove_door_from_system(iLocal_3220);
	}
	if (_0x0EAEB0DB4B132399(iLocal_3221))
	{
		remove_navmesh_blocking_object(iLocal_3221);
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		set_entity_coords(PLAYER::PLAYER_PED_ID(), -1019.579f, -484.872f, 36.0795f, 1, false, 0, 1);
		set_entity_heading(PLAYER::PLAYER_PED_ID(), 93.7701f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
	{
		if (is_vehicle_driveable(iLocal_3259, 0))
		{
			if (is_playback_going_on_for_vehicle(iLocal_3259))
			{
				stop_playback_recorded_vehicle(iLocal_3259);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
	{
		if (is_vehicle_driveable(iLocal_3258, 0))
		{
			_0x18EB48CFC41F2EA0(iLocal_3258, 0f);
			if (is_playback_going_on_for_vehicle(iLocal_3258))
			{
				stop_playback_recorded_vehicle(iLocal_3258);
			}
		}
	}
	if (does_particle_fx_looped_exist(iLocal_3759))
	{
		stop_particle_fx_looped(iLocal_3759, 0);
	}
	if (does_particle_fx_looped_exist(iLocal_3760))
	{
		stop_particle_fx_looped(iLocal_3760, 0);
	}
	if (does_particle_fx_looped_exist(iLocal_3761))
	{
		stop_particle_fx_looped(iLocal_3761, 0);
	}
	if (does_particle_fx_looped_exist(iLocal_3762))
	{
		stop_particle_fx_looped(iLocal_3762, 0);
	}
	if (does_particle_fx_looped_exist(iLocal_3763))
	{
		stop_particle_fx_looped(iLocal_3763, 0);
	}
	if (does_particle_fx_looped_exist(iLocal_3755[0]))
	{
		stop_particle_fx_looped(iLocal_3755[0], 0);
	}
	if (does_particle_fx_looped_exist(iLocal_3755[1]))
	{
		stop_particle_fx_looped(iLocal_3755[1], 0);
	}
	if (does_particle_fx_looped_exist(iLocal_3755[2]))
	{
		stop_particle_fx_looped(iLocal_3755[2], 0);
	}
	remove_ptfx_asset();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
	{
		PED::DELETE_PED(&iLocal_3222);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3228))
	{
		PED::DELETE_PED(&iLocal_3228);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
	{
		PED::DELETE_PED(&iLocal_3245);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3246))
	{
		PED::DELETE_PED(&iLocal_3246);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3247))
	{
		PED::DELETE_PED(&iLocal_3247);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3248))
	{
		PED::DELETE_PED(&iLocal_3248);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3249))
	{
		PED::DELETE_PED(&iLocal_3249);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250))
	{
		PED::DELETE_PED(&iLocal_3250);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[0]))
	{
		PED::DELETE_PED(&(iLocal_3223[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[1]))
	{
		PED::DELETE_PED(&(iLocal_3223[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[2]))
	{
		PED::DELETE_PED(&(iLocal_3223[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[3]))
	{
		PED::DELETE_PED(&(iLocal_3223[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3229[0]))
	{
		PED::DELETE_PED(&(uLocal_3229[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3229[1]))
	{
		PED::DELETE_PED(&(uLocal_3229[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3229[2]))
	{
		PED::DELETE_PED(&(uLocal_3229[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[0]))
	{
		PED::DELETE_PED(&(iLocal_3233[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[1]))
	{
		PED::DELETE_PED(&(iLocal_3233[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[2]))
	{
		PED::DELETE_PED(&(iLocal_3233[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[3]))
	{
		PED::DELETE_PED(&(iLocal_3233[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[4]))
	{
		PED::DELETE_PED(&(iLocal_3233[4]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[5]))
	{
		PED::DELETE_PED(&(iLocal_3233[5]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[6]))
	{
		PED::DELETE_PED(&(iLocal_3233[6]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[7]))
	{
		PED::DELETE_PED(&(iLocal_3233[7]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[8]))
	{
		PED::DELETE_PED(&(iLocal_3233[8]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[9]))
	{
		PED::DELETE_PED(&(iLocal_3233[9]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[10]))
	{
		PED::DELETE_PED(&(iLocal_3233[10]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3251[0]))
	{
		PED::DELETE_PED(&(iLocal_3251[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3254[0]))
	{
		PED::DELETE_PED(&(iLocal_3254[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3254[1]))
	{
		PED::DELETE_PED(&(iLocal_3254[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
	{
		delete_vehicle(&iLocal_3258);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
	{
		if (!is_entity_a_mission_entity(iLocal_3259))
		{
			set_entity_as_mission_entity(iLocal_3259, true, 0);
		}
		delete_vehicle(&iLocal_3259);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3264))
	{
		delete_vehicle(&iLocal_3264);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
	{
		delete_vehicle(&iLocal_3265);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
	{
		delete_vehicle(&iLocal_3266);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267))
	{
		delete_vehicle(&iLocal_3267);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271))
	{
		delete_vehicle(&iLocal_3271);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
	{
		delete_vehicle(&iLocal_3275);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3279[0]))
	{
		delete_vehicle(&(iLocal_3279[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3279[1]))
	{
		delete_vehicle(&(iLocal_3279[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260[0]))
	{
		delete_vehicle(&(iLocal_3260[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260[1]))
	{
		delete_vehicle(&(iLocal_3260[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3279[0]))
	{
		delete_vehicle(&(iLocal_3279[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3279[1]))
	{
		delete_vehicle(&(iLocal_3279[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3268[0]))
	{
		delete_vehicle(&(iLocal_3268[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3268[1]))
	{
		delete_vehicle(&(iLocal_3268[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3272[0]))
	{
		delete_vehicle(&(iLocal_3272[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3263))
	{
		delete_vehicle(&iLocal_3263);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
	{
		delete_object(&iLocal_3282);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
	{
		delete_object(&iLocal_3283);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3284))
	{
		delete_object(&iLocal_3284);
	}
	release_script_audio_bank();
	if (is_audio_scene_active("SOL_3_DRIVE_TO_AIRPORT"))
	{
		stop_audio_scene("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (is_audio_scene_active("SOL_3_MAIN_CHASE"))
	{
		stop_audio_scene("SOL_3_MAIN_CHASE");
	}
	if (is_audio_scene_active("SOL_3_CHOPPER_CAM"))
	{
		stop_audio_scene("SOL_3_CHOPPER_CAM");
	}
	if (is_audio_scene_active("SOL_3_HELI_TAKEOFF"))
	{
		stop_audio_scene("SOL_3_HELI_TAKEOFF");
	}
	if (is_audio_scene_active("SOL_3_EVENT_TANKER_CRASH"))
	{
		stop_audio_scene("SOL_3_EVENT_TANKER_CRASH");
	}
	if (is_audio_scene_active("SOL_3_CAR_JET_ENGINE"))
	{
		stop_audio_scene("SOL_3_CAR_JET_ENGINE");
	}
	if (is_audio_scene_active("SOL_3_PLANE_ON_FIRE"))
	{
		stop_audio_scene("SOL_3_PLANE_ON_FIRE");
	}
	if (is_audio_scene_active("SOL_3_EVENT_JET_LANDING"))
	{
		stop_audio_scene("SOL_3_EVENT_JET_LANDING");
	}
	if (is_audio_scene_active("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		stop_audio_scene("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (is_audio_scene_active("SOL_3_ARRIVE_AT_HANGAR"))
	{
		stop_audio_scene("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (is_audio_scene_active("SOL_3_ON_FOOT_CHASE"))
	{
		stop_audio_scene("SOL_3_ON_FOOT_CHASE");
	}
	if (is_audio_scene_active("SOL_3_LOSE_COPS"))
	{
		stop_audio_scene("SOL_3_LOSE_COPS");
	}
	if (is_audio_scene_active("SOL_3_LOSE_COPS_PLANE"))
	{
		stop_audio_scene("SOL_3_LOSE_COPS_PLANE");
	}
	if (is_audio_scene_active("SOL_3_LOSE_COPS_VEHICLE"))
	{
		stop_audio_scene("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (is_audio_scene_active("SOL_3_ENGINE_DEATH_SCENE"))
	{
		stop_audio_scene("SOL_3_ENGINE_DEATH_SCENE");
	}
	stop_sound(iLocal_3211);
	stop_sound(iLocal_3213);
	stop_sound(iLocal_3214);
	stop_sound(iLocal_3215);
	stop_sound(iLocal_3216);
	stop_sound(iLocal_3217);
	stop_sound(iLocal_3218);
	stop_sound(iLocal_3219);
	stop_sound(iLocal_3212);
	func_183(&uLocal_28, 0, 0);
	if (does_cam_exist(iLocal_3289))
	{
		destroy_cam(iLocal_3289, 0);
	}
	if (does_cam_exist(iLocal_3290))
	{
		destroy_cam(iLocal_3290, 0);
	}
	if (does_cam_exist(iLocal_3291))
	{
		destroy_cam(iLocal_3291, 0);
	}
	func_162(1, 1);
	remove_anim_dict("misssolomon_3");
	remove_anim_dict("amb@world_human_clipboard@male@base");
	remove_anim_dict("missheist_agency3aig_lift_waitped_a");
	remove_vehicle_recording(true, "BB_CHASE");
	remove_vehicle_recording(2, "BB_Chase");
	remove_vehicle_recording(9, "BB_CHASE");
	remove_vehicle_recording(35, "BB_Chase");
	remove_vehicle_recording(45, "BB_Chase");
	remove_vehicle_recording(54, "BB_Chase");
	remove_vehicle_recording(55, "BB_Chase");
	remove_vehicle_recording(61, "BB_CHASE");
	remove_vehicle_recording(63, "BB_CHASE");
	remove_vehicle_recording(64, "BB_CHASE");
	remove_vehicle_recording(67, "BB_Chase");
	remove_vehicle_recording(68, "BB_CHASE");
	remove_vehicle_recording(69, "BB_Chase");
	set_scaleform_movie_as_no_longer_needed(&iLocal_3293);
	set_streamed_texture_dict_as_no_longer_needed("digitalOverlay");
}

void func_162(int iParam0, int iParam1)
{
	if (!is_string_null_or_empty(&cLocal_2668))
	{
		iLocal_91 = 0;
		func_182();
		remove_relationship_group(iLocal_2684);
		set_roads_back_to_original(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (is_player_playing(player_id()))
		{
			set_air_drag_multiplier_for_players_vehicle(player_id(), 1f);
			set_dispatch_cops_for_player(player_id(), 1);
			set_create_random_cops(true);
		}
		if (iLocal_107)
		{
			set_model_as_no_longer_needed(func_181());
		}
		set_model_as_no_longer_needed(func_180());
		set_model_as_no_longer_needed(func_179());
		set_model_as_no_longer_needed(func_178());
		if (!is_screen_faded_out() && !iParam0)
		{
			func_177();
			func_176();
			func_173();
		}
		else
		{
			func_169();
			func_168();
		}
		if (iParam1)
		{
			func_163(0);
		}
	}
}

void func_163(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_164(iVar0, iParam0);
		iVar0++;
	}
}

void func_164(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_71(iParam0, 2, 1))
		{
			func_167(iParam0, 2, 1);
		}
	}
	else if (func_71(iParam0, 2, 1))
	{
		func_165(iParam0, 2, 1);
	}
}

void func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_73() == 0)
		{
			iVar0 = func_49(func_72(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
			func_166(func_72(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_166(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_50(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_167(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_73() == 0)
		{
			iVar0 = func_49(func_72(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_166(func_72(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_168()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_2916[iVar0] = 0;
		vLocal_1963[iVar0 /*3*/] = {0f, 0f, 0f};
		fLocal_109[iVar0] = 0f;
		fLocal_285[iVar0] = 0f;
		fLocal_461[iVar0] = 0f;
		fLocal_637[iVar0] = 0f;
		iLocal_1294[iVar0] = 0;
		fLocal_813[iVar0] = 0f;
		iLocal_1470[iVar0] = 0;
		iLocal_2685[iVar0] = 0;
		iLocal_1646[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_3092[iVar0] = 0;
		iVar0++;
	}
	iLocal_1946 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_3105[iVar0] = 0;
		vLocal_2489[iVar0 /*3*/] = {0f, 0f, 0f};
		fLocal_1209[iVar0] = 0f;
		fLocal_1225[iVar0] = 0f;
		fLocal_1241[iVar0] = 0f;
		fLocal_1257[iVar0] = 0f;
		iLocal_1930[iVar0] = 0;
		iLocal_2861[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_3157[iVar0] = 0;
		iVar0++;
	}
	iLocal_1948 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_3121[iVar0] = 0;
		vLocal_2535[iVar0 /*3*/] = {0f, 0f, 0f};
		fLocal_993[iVar0] = 0f;
		fLocal_1029[iVar0] = 0f;
		fLocal_1065[iVar0] = 0f;
		fLocal_1101[iVar0] = 0f;
		iLocal_1822[iVar0] = 0;
		fLocal_1137[iVar0] = 0f;
		iLocal_1858[iVar0] = 0;
		iLocal_2877[iVar0] = 0;
		iLocal_1894[iVar0] = 0;
		iVar0++;
	}
	iLocal_1947 = 0;
	iLocal_1950 = 0;
	iLocal_1953 = 0;
	iLocal_1954 = 0;
	iLocal_1955 = 0;
}

void func_169()
{
	func_172();
	func_171();
	func_170();
}

void func_170()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[iVar0]))
		{
			if (is_vehicle_driveable(iLocal_3121[iVar0], 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_3121[iVar0]))
				{
					stop_playback_recorded_vehicle(iLocal_3121[iVar0]);
				}
				iVar1 = get_ped_in_vehicle_seat(iLocal_3121[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (is_entity_a_mission_entity(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (is_entity_a_mission_entity(iLocal_3121[iVar0]))
			{
				delete_vehicle(&(iLocal_3121[iVar0]));
			}
		}
		iLocal_1858[iVar0] = 0;
		if (!iLocal_87 && !iLocal_100)
		{
			if (iLocal_1822[iVar0] > 0)
			{
				remove_vehicle_recording(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2877[iVar0] == 0)
		{
			set_model_as_no_longer_needed(iLocal_2877[iVar0]);
		}
		iVar0++;
	}
}

void func_171()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3105[iVar0]))
		{
			if (is_entity_a_mission_entity(iLocal_3105[iVar0]))
			{
				delete_vehicle(&(iLocal_3105[iVar0]));
			}
		}
		iLocal_1930[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2861[iVar0] == 0)
		{
			set_model_as_no_longer_needed(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

void func_172()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2916[iVar0]))
		{
			if (is_vehicle_driveable(iLocal_2916[iVar0], 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_2916[iVar0]))
				{
					stop_playback_recorded_vehicle(iLocal_2916[iVar0]);
				}
				iVar1 = get_ped_in_vehicle_seat(iLocal_2916[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (is_entity_a_mission_entity(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (is_entity_a_mission_entity(iLocal_2916[iVar0]))
			{
				delete_vehicle(&(iLocal_2916[iVar0]));
			}
		}
		if (!iLocal_87 && !iLocal_100)
		{
			if (iLocal_1294[iVar0] > 0)
			{
				remove_vehicle_recording(iLocal_1294[iVar0], &cLocal_2668);
			}
		}
		iLocal_1470[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			set_model_as_no_longer_needed(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
}

void func_173()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[iVar0]))
		{
			if (is_vehicle_driveable(iLocal_3121[iVar0], 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_3121[iVar0]))
				{
					stop_playback_recorded_vehicle(iLocal_3121[iVar0]);
				}
			}
			func_175(iLocal_3121[iVar0]);
			func_174(iLocal_3121[iVar0]);
		}
		iLocal_1858[iVar0] = 0;
		iLocal_1894[iVar0] = 0;
		if (!iLocal_87 && !iLocal_100)
		{
			if (iLocal_1822[iVar0] > 0)
			{
				remove_vehicle_recording(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2877[iVar0] == 0)
		{
			set_model_as_no_longer_needed(iLocal_2877[iVar0]);
		}
		iVar0++;
	}
	iLocal_1952 = 0;
}

void func_174(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		set_vehicle_as_no_longer_needed(&iParam0);
	}
}

void func_175(int iParam0)
{
	Vector3 fVar0;
	int iVar1;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		iVar1 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = get_entity_speed(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				task_vehicle_mission(iVar1, iParam0, false, 1, fVar0, 786603, 5f, 5f, 1);
				set_ped_flee_attributes(iVar1, 8192, true);
				if (iLocal_108)
				{
					set_ped_flee_attributes(iVar1, 65536, true);
					set_ped_flee_attributes(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_176()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3105[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3105[iVar0], 0))
			{
				set_entity_collision(iLocal_3105[iVar0], true, 0);
			}
			func_174(iLocal_3105[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2861[iVar0] == 0)
		{
			set_model_as_no_longer_needed(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

void func_177()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2916[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2916[iVar0], 0))
			{
				set_entity_collision(iLocal_2916[iVar0], true, 0);
			}
			if (is_vehicle_driveable(iLocal_2916[iVar0], 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_2916[iVar0]))
				{
					stop_playback_recorded_vehicle(iLocal_2916[iVar0]);
				}
			}
			func_175(iLocal_2916[iVar0]);
			func_174(iLocal_2916[iVar0]);
		}
		iLocal_1470[iVar0] = 0;
		iLocal_1646[iVar0] = 0;
		if (!iLocal_87 && !iLocal_100)
		{
			if (iLocal_1294[iVar0] > 0)
			{
				remove_vehicle_recording(iLocal_1294[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			set_model_as_no_longer_needed(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
}

int func_178()
{
	return joaat("s_m_y_cop_01");
}

int func_179()
{
	return joaat("police");
}

int func_180()
{
	return joaat("sultan");
}

int func_181()
{
	if (iLocal_2913 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2913;
}

void func_182()
{
	set_all_vehicle_generators_active();
	set_number_of_parked_vehicles(-1);
	set_garbage_trucks(1);
	set_all_low_priority_vehicle_generators_active(1);
	set_vehicle_density_multiplier_this_frame(1f);
	set_vehicle_population_budget(3);
	set_ped_population_budget(3);
}

void func_183(auto uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4429, 26))
		{
			return;
		}
	}
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(iParam2);
		_stop_screen_effect("FocusIn");
		stop_audio_scene("HINT_CAM_SCENE");
		if (*uParam0.f_11)
		{
			_start_screen_effect("FocusOut", false, 0);
			play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			*uParam0.f_11 = 0;
		}
	}
	set_cinematic_button_active(true);
	*uParam0.f_1 = 0;
	*uParam0 = 0;
	*uParam0.f_2 = -1;
	*uParam0.f_8 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	sVar0 = iParam1;
	if (is_string_null(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!is_string_null(*uParam0.f_3))
	{
		if (func_184(*uParam0.f_3))
		{
			clear_help(1);
		}
	}
	if (!is_string_null(sVar0))
	{
		if (func_184(sVar0))
		{
			clear_help(1);
		}
	}
}

int func_184(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_185()
{
	Global_14578 = 0;
	func_186();
}

void func_186()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_187()
{
	Global_14578 = 0;
	func_188();
}

void func_188()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

void func_189()
{
	if (does_blip_exist(iLocal_3285))
	{
		remove_blip(&iLocal_3285);
	}
	if (does_blip_exist(iLocal_3286))
	{
		remove_blip(&iLocal_3286);
	}
	if (does_blip_exist(iLocal_3287))
	{
		remove_blip(&iLocal_3287);
	}
	if (does_blip_exist(iLocal_3288))
	{
		remove_blip(&iLocal_3288);
	}
}

void func_190()
{
	if (iLocal_3570 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3228))
		{
			if (!PED::IS_PED_INJURED(iLocal_3228))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_3228, PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_3570 = 1;
				}
			}
		}
	}
	if (iLocal_3570 == 0)
	{
		if (iLocal_3534 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3228))
			{
				if (!PED::IS_PED_INJURED(iLocal_3228))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
					{
						if (!PED::IS_PED_INJURED(iLocal_3222))
						{
							if (is_waypoint_playback_going_on_for_ped(iLocal_3222))
							{
								if (get_ped_waypoint_progress(iLocal_3222) > 18)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3284))
									{
										if (is_entity_attached(iLocal_3284))
										{
											detach_entity(iLocal_3284, 1, true);
										}
									}
									iLocal_3210 = create_synchronized_scene(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
									task_synchronized_scene(iLocal_3228, iLocal_3210, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1000f, 0);
									task_look_at_entity(iLocal_3228, PLAYER::PLAYER_PED_ID(), 9000, 1024, 3);
									iLocal_3534 = 1;
									iLocal_3535 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3534 == 1 && iLocal_3536 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3228))
			{
				if (!PED::IS_PED_INJURED(iLocal_3228))
				{
					if (is_synchronized_scene_running(iLocal_3210))
					{
						if (!iLocal_3535)
						{
							if (get_synchronized_scene_phase(iLocal_3210) > 0.25f)
							{
								func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
								func_191(iLocal_3228, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_3535 = 1;
							}
						}
						if (get_synchronized_scene_phase(iLocal_3210) > 0.99f)
						{
							iLocal_3210 = create_synchronized_scene(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							task_synchronized_scene(iLocal_3228, iLocal_3210, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1000f, 0);
							iLocal_3536 = 1;
						}
					}
				}
			}
		}
		if (iLocal_3536 == 1 && iLocal_3539 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3228))
			{
				if (!PED::IS_PED_INJURED(iLocal_3228))
				{
					if (is_synchronized_scene_running(iLocal_3210))
					{
						if (has_anim_event_fired(iLocal_3228, GAMEPLAY::GET_HASH_KEY("ENDS_IN_RUN")))
						{
							open_sequence_task(&iLocal_3292);
							task_force_motion_state(0, -1115154469, 0);
							task_go_straight_to_coord(false, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
							close_sequence_task(iLocal_3292);
							task_perform_sequence(iLocal_3228, iLocal_3292);
							clear_sequence_task(&iLocal_3292);
							force_ped_motion_state(iLocal_3228, -1115154469, false, 0, 0);
							iLocal_3539 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_3539 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3228))
		{
			if (!PED::IS_PED_INJURED(iLocal_3228))
			{
				open_sequence_task(&iLocal_3292);
				task_go_straight_to_coord(false, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				close_sequence_task(iLocal_3292);
				task_perform_sequence(iLocal_3228, iLocal_3292);
				clear_sequence_task(&iLocal_3292);
				iLocal_3539 = 1;
			}
		}
	}
}

void func_191(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

void func_192()
{
	if (iLocal_3181 == 0)
	{
		iLocal_3183 = 0;
		iLocal_3211 = AUDIO::GET_SOUND_ID();
		request_cutscene("TRV_4_MCS_2", 8);
		STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
		if (get_is_waypoint_recording_loaded("Trev4_5"))
		{
			use_waypoint_recording_as_assisted_movement_route("Trev4_5", 0, 0.5f, 1f);
		}
		if (!is_screen_faded_in())
		{
			do_screen_fade_in(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		switch (iLocal_3183)
		{
			case 0:
				while (!has_cutscene_loaded())
				{
					wait(false);
				}
				set_player_control(player_id(), false, 0);
				if (!PED::IS_PED_INJURED(iLocal_3222))
				{
					register_entity_for_cutscene(iLocal_3222, "Molly", 1, joaat("ig_molly"), 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_3228))
				{
					register_entity_for_cutscene(iLocal_3228, "Airworker_Tackle_trevor", 0, joaat("s_m_y_airworker"), 0);
				}
				if (is_vehicle_driveable(iLocal_3266, 0))
				{
					register_entity_for_cutscene(iLocal_3266, "JET_TRV4", 0, joaat("jet"), 0);
				}
				func_193(1, 1, 1, 0);
				trigger_music_event("TRV4_SUCK_CS");
				start_cutscene(0);
				iLocal_3183++;
				break;
			
			case 1:
				func_109();
				if (can_set_exit_state_for_registered_entity("JET_TRV4", joaat("jet")))
				{
					if (is_vehicle_driveable(iLocal_3266, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_3266, 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3266, true);
						}
					}
				}
				if (can_set_exit_state_for_registered_entity("Airworker_Tackle_trevor", joaat("s_m_y_airworker")))
				{
					if (!PED::IS_PED_INJURED(iLocal_3228))
					{
						set_blocking_of_non_temporary_events(iLocal_3228, true);
						AI::TASK_SMART_FLEE_PED(iLocal_3228, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
						set_entity_invincible(iLocal_3228, false);
						set_ped_can_be_targetted(iLocal_3228, true);
						ENTITY::SET_ENTITY_PROOFS(iLocal_3228, false, false, false, false, false, false, 0, false);
					}
				}
				if (can_set_exit_state_for_registered_entity("Michael", false))
				{
					func_109();
					func_107(1);
				}
				if (!is_cutscene_active())
				{
					iLocal_3338 = 1;
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
					{
						if (STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01")))
						{
							iLocal_3282 = create_object(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
							set_entity_quaternion(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
							set_model_as_no_longer_needed(joaat("prop_jet_bloodsplat_01"));
						}
					}
					_0xC61B86C9F61EB404(0);
					func_193(0, 1, 1, 0);
					set_player_control(player_id(), true, 0);
					if (!has_ped_got_weapon(PLAYER::PLAYER_PED_ID(), false, 2))
					{
						give_weapon_to_ped(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg"), 150, true, true);
					}
					iLocal_3181 = 2;
				}
				break;
			}
	}
	if (iLocal_3181 == 2)
	{
		iLocal_3181 = 0;
		iLocal_3180 = 8;
	}
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_201(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_200())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_199(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_201(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_199(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_197(player_id())) && !func_195(player_id(), 0)) && !func_194())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_197(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_194()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_195(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_196(-1, 0) == 8;
	}
	else
	{
		iVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (network_is_player_active(iParam0))
		{
			iVar0 = get_player_team(iParam0) == 8;
		}
	}
	return iVar0;
}

int func_196(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (iParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (iParam1)
		{
		}
	}
	return iVar0;
}

bool func_197(int iParam0)
{
	if (func_195(iParam0, 0))
	{
		return true;
	}
	if (func_198())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_198()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_199(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_200()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_201(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 13);
	}
}

void func_202()
{
	if (iLocal_3511 == 0)
	{
		if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, true, 0))
		{
			iLocal_3511 = 1;
		}
	}
	else if (iLocal_3515 == 0)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 22, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
		if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, 0, true, 0))
		{
			set_ped_max_move_blend_ratio(PLAYER::PLAYER_PED_ID(), 0f);
		}
		else
		{
			if (fLocal_3326 < 1f)
			{
				fLocal_3326 = 1f;
			}
			fLocal_3326 *= 0.975f;
			set_ped_max_move_blend_ratio(PLAYER::PLAYER_PED_ID(), fLocal_3326);
		}
	}
	if (iLocal_3181 > 0)
	{
		func_190();
	}
	if (iLocal_3181 == 0)
	{
		iLocal_3339 = 0;
		iLocal_3340 = 0;
		iLocal_3341 = 0;
		iLocal_3342 = 0;
		iLocal_3344 = 0;
		iLocal_3360 = 0;
		iLocal_3471 = 0;
		iLocal_3472 = 0;
		iLocal_3473 = 0;
		iLocal_3479 = 0;
		iLocal_3512 = 0;
		iLocal_3513 = 0;
		iLocal_3514 = 0;
		iLocal_3515 = 0;
		iLocal_3516[0] = 0;
		iLocal_3520[0] = 0;
		iLocal_3516[1] = 0;
		iLocal_3520[1] = 0;
		iLocal_3516[2] = 0;
		iLocal_3534 = 0;
		iLocal_3536 = 0;
		iLocal_3537 = 0;
		iLocal_3538 = 0;
		iLocal_3539 = 0;
		iLocal_3542 = 0;
		iLocal_3568 = 0;
		iLocal_3570 = 0;
		iLocal_3571[3] = 0;
		STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
		_0xAF348AFCB575A441("V_60_HangerRm");
		set_max_wanted_level(5);
		set_player_wanted_level(player_id(), 3, 0);
		set_player_wanted_level_now(player_id(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
		{
			if (!PED::IS_PED_INJURED(iLocal_3222))
			{
				if (is_waypoint_playback_going_on_for_ped(iLocal_3222))
				{
					waypoint_playback_override_speed(iLocal_3222, 3f, 1);
				}
			}
		}
		if (!is_screen_faded_in())
		{
			do_screen_fade_in(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3479 == 0)
		{
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Trv_4_747", false))
			{
				iLocal_3479 = 1;
			}
		}
		if (iLocal_3471 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
			{
				if (!PED::IS_PED_INJURED(iLocal_3222))
				{
					if (is_waypoint_playback_going_on_for_ped(iLocal_3222))
					{
						if (get_ped_waypoint_progress(iLocal_3222) > 20)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
							{
								if (is_vehicle_driveable(iLocal_3266, 0))
								{
									func_207(&iLocal_3266);
									AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3211, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, 0, 0, 0, 0);
									set_vehicle_engine_on(iLocal_3266, true, 0, 0);
									iLocal_3471 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3512 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
			{
				if (!PED::IS_PED_INJURED(iLocal_3222))
				{
					if (is_waypoint_playback_going_on_for_ped(iLocal_3222))
					{
						if (get_ped_waypoint_progress(iLocal_3222) > 23)
						{
							AI::CLEAR_PED_TASKS(iLocal_3222);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
							{
								if (is_vehicle_driveable(iLocal_3266, 0))
								{
									if (!is_audio_scene_active("SOL_3_ENGINE_DEATH_SCENE"))
									{
										start_audio_scene("SOL_3_ENGINE_DEATH_SCENE");
									}
									iLocal_3209 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
									attach_synchronized_scene_to_entity(iLocal_3209, iLocal_3266, get_entity_bone_index_by_name(iLocal_3266, "chassis_Control"));
									task_synchronized_scene(iLocal_3222, iLocal_3209, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1000f, 0);
									_0x394B9CD12435C981(iLocal_3209, true);
									iLocal_3512 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3513 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
			{
				if (!PED::IS_PED_INJURED(iLocal_3222))
				{
					if (iLocal_3512 == 1)
					{
						vLocal_3318 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
						if (vLocal_3318.y < -2965f)
						{
							set_gameplay_entity_hint(iLocal_3222, 0f, 0f, 0f, 1, 6000, 1000, 2000, 0);
							set_player_control(player_id(), false, 0);
							task_turn_ped_to_face_entity(PLAYER::PLAYER_PED_ID(), iLocal_3222, false);
							task_look_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_3222, 4000, 48, 4);
							iLocal_3513 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_3514 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
			{
				stop_gameplay_hint(0);
				set_player_control(player_id(), true, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_3233[0]))
					{
						AI::CLEAR_PED_TASKS(iLocal_3233[0]);
						set_blocking_of_non_temporary_events(iLocal_3233[0], false);
					}
				}
				iLocal_3514 = 1;
			}
		}
		if (iLocal_3473 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
			{
				if (!PED::IS_PED_INJURED(iLocal_3222))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
					{
						if (is_entity_attached_to_entity(iLocal_3283, iLocal_3222))
						{
							if (is_entity_playing_anim(iLocal_3222, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (get_synchronized_scene_phase(iLocal_3209) > 0.59f)
								{
									detach_entity(iLocal_3283, 1, true);
									if (does_blip_exist(iLocal_3285))
									{
										remove_blip(&iLocal_3285);
									}
									if (!does_blip_exist(iLocal_3288))
									{
										func_191(iLocal_3222, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (is_audio_scene_active("SOL_3_ON_FOOT_CHASE"))
										{
											stop_audio_scene("SOL_3_ON_FOOT_CHASE");
										}
										if (!is_audio_scene_active("SOL_3_LOSE_COPS"))
										{
											start_audio_scene("SOL_3_LOSE_COPS");
										}
										settimerb(false);
										iLocal_3473 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3515 == 0)
		{
			if (iLocal_3473 == 1 && timerb() > 2500)
			{
				iLocal_3288 = func_204(iLocal_3283);
				func_20("SOL3_GOD1", 7500, -1);
				settimerb(false);
				iLocal_3515 = 1;
			}
		}
		if (iLocal_3571[3] == 0)
		{
			if (iLocal_3515 == 1 && iLocal_3514 == 1)
			{
				if (timerb() > 2500)
				{
					_0x293220DA1B46CEBC(10f, 2f, 3);
					iLocal_3571[3] = 1;
				}
			}
		}
		if (iLocal_3472 == 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_3222))
			{
				if (is_entity_playing_anim(iLocal_3222, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (get_synchronized_scene_phase(iLocal_3209) > 0.89f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
						{
							if (is_vehicle_driveable(iLocal_3266, 0))
							{
								PED::DELETE_PED(&iLocal_3222);
								start_particle_fx_non_looped_on_entity("scr_trev4_747_blood_impact", iLocal_3266, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
								iLocal_3764 = start_particle_fx_looped_on_entity("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
								AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3212, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, 0, 0, 0, 0);
								iLocal_3192 = GAMEPLAY::GET_GAME_TIMER();
								iLocal_3472 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3192 + 574)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
				{
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01")))
					{
						iLocal_3282 = create_object(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
						set_entity_quaternion(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
						set_model_as_no_longer_needed(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_3568 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
					{
						if (is_vehicle_driveable(iLocal_3266, 0))
						{
							start_particle_fx_non_looped_on_entity("scr_trev4_747_engine_debris", iLocal_3266, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, 0, 0, 0);
							set_vehicle_engine_on(iLocal_3266, false, 0, 0);
							func_203();
							stop_sound(iLocal_3211);
							iLocal_3568 = 1;
						}
					}
				}
			}
			if (iLocal_3516[0] == 0)
			{
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3192 + 300)
				{
					if (does_particle_fx_looped_exist(iLocal_3764))
					{
						stop_particle_fx_looped(iLocal_3764, 0);
					}
					iLocal_3516[0] = 1;
				}
			}
			else if (iLocal_3520[0] == 0)
			{
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3192 + 700)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
					{
						if (is_vehicle_driveable(iLocal_3266, 0))
						{
							iLocal_3764 = start_particle_fx_looped_on_entity("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_3520[0] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[1] == 0)
			{
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3192 + 1000)
				{
					if (does_particle_fx_looped_exist(iLocal_3764))
					{
						stop_particle_fx_looped(iLocal_3764, 0);
					}
					iLocal_3516[1] = 1;
				}
			}
			else if (iLocal_3520[1] == 0)
			{
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3192 + 1400)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
					{
						if (is_vehicle_driveable(iLocal_3266, 0))
						{
							iLocal_3764 = start_particle_fx_looped_on_entity("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_3763 = start_particle_fx_looped_on_entity("scr_trev4_747_engine_damage", iLocal_3266, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1f, 0, 0, 0);
							iLocal_3520[1] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[2] == 0)
			{
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3192 + 3500)
				{
					if (does_particle_fx_looped_exist(iLocal_3764))
					{
						stop_particle_fx_looped(iLocal_3764, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
					{
						if (is_vehicle_driveable(iLocal_3266, 0))
						{
							ENTITY::SET_ENTITY_PROOFS(iLocal_3266, false, false, false, false, false, false, 0, false);
						}
					}
					iLocal_3516[2] = 1;
				}
			}
		}
		if (iLocal_3537 == 0)
		{
			if (iLocal_3473 == 1)
			{
				if (iLocal_3538 == 0)
				{
					if (!is_entity_in_air(iLocal_3283))
					{
						iLocal_3202 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_3538 = 1;
					}
				}
				else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3202 + 2000)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_3283, true);
					iLocal_3537 = 1;
				}
			}
		}
		if (iLocal_3542 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_3266, false);
					iLocal_3542 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
		{
			if (does_blip_exist(iLocal_3288))
			{
				if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3283, 1) < 1.5f && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					play_sound_frontend(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					remove_blip(&iLocal_3288);
					delete_object(&iLocal_3283);
					func_109();
					iLocal_3181 = 0;
					iLocal_3180 = 8;
				}
			}
		}
	}
}

void func_203()
{
	if (does_particle_fx_looped_exist(iLocal_3759))
	{
		stop_particle_fx_looped(iLocal_3759, 0);
	}
	if (does_particle_fx_looped_exist(iLocal_3760))
	{
		stop_particle_fx_looped(iLocal_3760, 0);
	}
	if (does_particle_fx_looped_exist(iLocal_3761))
	{
		stop_particle_fx_looped(iLocal_3761, 0);
	}
	if (does_particle_fx_looped_exist(iLocal_3762))
	{
		stop_particle_fx_looped(iLocal_3762, 0);
	}
}

int func_204(int iParam0)
{
	return func_205(iParam0, 1, 0);
}

int func_205(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_206(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!iParam2)
		{
			set_blip_as_friendly(iVar0, iParam1);
		}
		else
		{
			set_blip_colour(iVar0, 2);
		}
	}
	else if (is_entity_a_ped(iParam0))
	{
		set_blip_scale(iVar0, func_206(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_206(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_206(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_207(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0, 0))
	{
		vVar0 = {22.6057f, -2.10018f, -6.22841f};
		vVar3 = {12.6349f, 7.89711f, -7.09742f};
		vVar6 = {-22.5879f, -2.2931f, -6.22542f};
		vVar9 = {-12.6675f, 8.15519f, -6.98833f};
		vVar12 = {180f, 0f, 0f};
		iLocal_3759 = start_particle_fx_looped_on_entity("scr_trev4_747_engine_heathaze", *iParam0, vVar0, vVar12, 1f, 0, 0, 0);
		iLocal_3760 = start_particle_fx_looped_on_entity("scr_trev4_747_engine_heathaze", *iParam0, vVar3, vVar12, 1f, 0, 0, 0);
		iLocal_3761 = start_particle_fx_looped_on_entity("scr_trev4_747_engine_heathaze", *iParam0, vVar6, vVar12, 1f, 0, 0, 0);
		iLocal_3762 = start_particle_fx_looped_on_entity("scr_trev4_747_engine_heathaze", *iParam0, vVar9, vVar12, 1f, 0, 0, 0);
	}
}

void func_208()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
	{
		if (!PED::IS_PED_INJURED(iLocal_3222))
		{
			if (is_waypoint_playback_going_on_for_ped(iLocal_3222))
			{
				if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3222, 1) < 17f)
				{
					waypoint_playback_override_speed(iLocal_3222, 3f, 1);
				}
				if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3222, 1) < 22f && func_16(PLAYER::PLAYER_PED_ID(), iLocal_3222, 1) > 17f)
				{
					waypoint_playback_override_speed(iLocal_3222, 2f, 1);
				}
				if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -921.7f, -2946.4f, 13.4f, 1) > 8f && !is_entity_on_screen(iLocal_3222))
				{
					if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3222, 1) > 22f)
					{
						waypoint_playback_override_speed(iLocal_3222, 1f, 1);
					}
				}
				else if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3222, 1) > 22f)
				{
					waypoint_playback_override_speed(iLocal_3222, 2f, 1);
				}
			}
		}
	}
	if (iLocal_3181 > 0)
	{
		if (iLocal_3511 == 0)
		{
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, true, 0))
			{
				iLocal_3511 = 1;
			}
		}
		else
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 22, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
			if (fLocal_3326 < 1f)
			{
				fLocal_3326 = 1f;
			}
			fLocal_3326 *= 0.98f;
			set_ped_max_move_blend_ratio(PLAYER::PLAYER_PED_ID(), fLocal_3326);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
		{
			STREAMING::REQUEST_MODEL(joaat("jet"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
			{
				iLocal_3266 = create_vehicle(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, true);
				set_vehicle_livery(iLocal_3266, 2);
				set_vehicle_is_considered_by_player(iLocal_3266, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3266, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3266, true, true, true, true, true, false, 0, false);
				set_model_as_no_longer_needed(joaat("jet"));
				set_entity_lod_dist(iLocal_3266, 500);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3228))
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
			request_anim_dict("misssolomon_3");
			STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
			if ((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker")) && has_anim_dict_loaded("misssolomon_3")) && STREAMING::HAS_MODEL_LOADED(joaat("p_amb_clipboard_01")))
			{
				iLocal_3228 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, 1, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3228, false, false, false, false, false, false, 0, false);
				set_ped_can_be_targetted(iLocal_3228, false);
				set_blocking_of_non_temporary_events(iLocal_3228, true);
				func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
				iLocal_3284 = create_object(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, 1, true, false);
				attach_entity_to_entity(iLocal_3284, iLocal_3228, get_ped_bone_index(iLocal_3222, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				iLocal_3210 = create_synchronized_scene(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				task_synchronized_scene(iLocal_3228, iLocal_3210, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1000f, 0);
				set_model_as_no_longer_needed(joaat("s_m_y_airworker"));
				set_model_as_no_longer_needed(joaat("p_amb_clipboard_01"));
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3233[0]))
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
			{
				iLocal_3233[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, true);
				give_weapon_to_ped(iLocal_3233[0], joaat("weapon_pistol"), 1000, true, true);
				set_ped_accuracy(iLocal_3233[0], 20);
				set_entity_load_collision_flag(iLocal_3233[0], true);
				set_blocking_of_non_temporary_events(iLocal_3233[0], true);
				task_aim_gun_at_entity(iLocal_3233[0], PLAYER::PLAYER_PED_ID(), -1, 1);
				func_111(iLocal_3233[0], 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3267))
		{
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("shamal")))
			{
				iLocal_3267 = create_vehicle(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, true);
				set_vehicle_door_open(iLocal_3267, false, 0, 1);
				set_vehicle_on_ground_properly(iLocal_3267);
				set_model_as_no_longer_needed(joaat("shamal"));
				ENTITY::SET_ENTITY_HEALTH(iLocal_3267, 2000);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267))
		{
			if (is_vehicle_driveable(iLocal_3267, 0))
			{
				if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3267, 1) > 5f)
				{
					set_vehicle_door_open(iLocal_3267, false, 0, 0);
				}
			}
		}
	}
	if (iLocal_3181 == 0)
	{
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_3345 == 1)
		{
			if (!is_screen_faded_out())
			{
				do_screen_fade_out(false);
			}
			func_104();
			func_17(&uLocal_3578, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			iLocal_3345 = 0;
		}
		iLocal_3432 = 0;
		iLocal_3433 = 0;
		iLocal_3511 = 0;
		fLocal_3326 = 3f;
		iLocal_3185 = 0;
		func_162(0, 1);
		remove_vehicle_recording(45, "BB_CHASE");
		remove_vehicle_recording(35, "BB_CHASE");
		remove_vehicle_recording(2, "BB_CHASE");
		remove_vehicle_recording(54, "BB_CHASE");
		remove_vehicle_recording(true, "BB_CHASE");
		remove_vehicle_recording(9, "BB_CHASE");
		remove_vehicle_recording(61, "BB_CHASE");
		remove_vehicle_recording(63, "BB_CHASE");
		remove_vehicle_recording(64, "BB_CHASE");
		set_scaleform_movie_as_no_longer_needed(&iLocal_3293);
		set_streamed_texture_dict_as_no_longer_needed("digitalOverlay");
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
		{
			_0x18EB48CFC41F2EA0(iLocal_3258, 0f);
			set_vehicle_as_no_longer_needed(&iLocal_3258);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271))
		{
			delete_vehicle(&iLocal_3271);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3254[0]))
		{
			PED::DELETE_PED(&(iLocal_3254[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260[0]))
		{
			delete_vehicle(&(iLocal_3260[0]));
		}
		set_fake_wanted_level(false);
		set_frontend_radio_active(1);
		if (!PED::IS_PED_INJURED(iLocal_3222))
		{
			if (!does_blip_exist(iLocal_3285))
			{
				iLocal_3285 = add_blip_for_entity(iLocal_3222);
				set_blip_as_friendly(iLocal_3285, true);
			}
		}
		set_audio_flag("PoliceScannerDisabled", 1);
		if (iLocal_3365[2] == 1)
		{
			if (!has_sound_finished(iLocal_3219))
			{
				stop_sound(iLocal_3219);
			}
			release_sound_id(iLocal_3219);
			iLocal_3397 = 0;
			iLocal_3365[2] = 0;
		}
		set_max_wanted_level(5);
		set_player_wanted_level(player_id(), 3, 0);
		set_player_wanted_level_now(player_id(), 0);
		trigger_music_event("TRV4_RUN");
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
		{
			STREAMING::REQUEST_MODEL(joaat("jet"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3228))
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
		}
		STREAMING::REQUEST_MODEL(joaat("shamal"));
		STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
		request_vehicle_recording(68, "BB_Chase");
		request_vehicle_recording(69, "BB_Chase");
		request_anim_dict("misssolomon_3");
		settimera(false);
		if (get_is_waypoint_recording_loaded("Trev4_5"))
		{
			use_waypoint_recording_as_assisted_movement_route("Trev4_5", 1, 1f, 1f);
		}
		if (is_screen_faded_out())
		{
			if (!func_24())
			{
				load_scene(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!is_screen_faded_in())
		{
			do_screen_fade_in(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, false, true, 0))
		{
			func_209("TRV4_FAIL1");
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, false, true, 0))
		{
			func_209("TRV4_FAIL1");
		}
		if (timera() > 15000)
		{
			func_209("TRV4_FAIL1");
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, false, true, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_3222))
			{
				if (!is_waypoint_playback_going_on_for_ped(iLocal_3222))
				{
					task_follow_waypoint_recording(iLocal_3222, "BB_MOLLY_2", 10, 4, -1);
					AI::TASK_PLAY_ANIM(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				}
			}
			settimera(false);
			iLocal_3181 = 3;
		}
	}
	if (iLocal_3181 == 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_3222))
		{
			if (is_waypoint_playback_going_on_for_ped(iLocal_3222))
			{
				if (get_ped_waypoint_progress(iLocal_3222) > 18 && iLocal_3437 == 0)
				{
					iLocal_3352 = 0;
					waypoint_playback_override_speed(iLocal_3222, 3f, 1);
					iLocal_3181 = 0;
					iLocal_3180 = 6;
				}
			}
		}
		if (timera() > 50000)
		{
			if (!PED::IS_PED_INJURED(iLocal_3222))
			{
				AI::CLEAR_PED_TASKS_immediately(iLocal_3222);
				set_entity_coords(iLocal_3222, -932.5f, -2964.1f, 13.4f, 1, false, 0, 1);
				task_follow_waypoint_recording(iLocal_3222, "BB_MOLLY_2", 18, 4, -1);
				AI::TASK_PLAY_ANIM(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				iLocal_3352 = 0;
				iLocal_3181 = 0;
				iLocal_3180 = 6;
			}
		}
	}
}

void func_209(char* sParam0)
{
	if (iLocal_3437 == 0)
	{
		if (iLocal_3336)
		{
			func_199(0, 1, 1, 0);
			set_cam_active(iLocal_3289, false);
			render_script_cams(false, false, 3000, 1, 0, 0);
			display_radar(true);
			if (is_audio_scene_active("SOL_3_CHOPPER_CAM"))
			{
				stop_audio_scene("SOL_3_CHOPPER_CAM");
			}
			stop_sound(iLocal_3219);
			func_219();
			set_frontend_radio_active(1);
			iLocal_3365[2] = 0;
			iLocal_3336 = 0;
		}
		trigger_music_event("TRV4_FAIL");
		sLocal_3577 = sParam0;
		clear_prints();
		func_187();
		func_185();
		func_210(sLocal_3577);
		iLocal_3437 = 1;
	}
}

void func_210(char* sParam0)
{
	func_218(sParam0);
	func_211(0);
}

void func_211(int iParam0)
{
	int iVar0;
	
	if (Global_101154.f_7775 || func_393(0))
	{
		iVar0 = func_8();
		if (!func_212(iVar0))
		{
			return;
		}
		GAMEPLAY::SET_BIT(&(Global_82363[iVar0 /*5*/].f_1), 5);
		Global_91314 = iParam0;
	}
}

bool func_212(int iParam0)
{
	auto uVar0;
	int iVar1;
	
	func_217();
	if (is_player_playing(player_id()))
	{
		start_firing_amnesty(5000);
	}
	uVar0 = Global_82363[iParam0 /*5*/];
	iVar1 = Global_69758.f_109[uVar0 /*4*/];
	func_216(iVar1, 1);
	_0xC9A763D8FE87436A(player_id());
	special_ability_deactivate(player_id());
	func_213(&(Global_101154.f_1826.f_539), iVar1);
	if (Global_85786 == Global_91315)
	{
		Global_101154.f_7775.f_330[iVar1 /*6*/].f_1++;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_82399[iVar1 /*34*/].f_15, true))
	{
		if (!is_player_playing(player_id()))
		{
			set_fade_in_after_death_arrest(0);
		}
	}
	Global_101154.f_7775.f_330[iVar1 /*6*/].f_2++;
	Global_85786 = Global_91315;
	if (iParam0 == -1)
	{
		if (Global_101154.f_7775)
		{
		}
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_82363[iParam0 /*5*/].f_1, 4))
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_82363[iParam0 /*5*/].f_1, 5))
	{
		return false;
	}
	return true;
}

void func_213(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_101154.f_17223[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_215(Global_101154.f_17223[iVar0], &vVar2, &fVar5))
			{
				Global_101154.f_17223[iVar0] = 318;
				func_214(uParam0.f_1524[iVar0]);
				*(uParam0.f_1528[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1538[iVar0] = 0f;
				*uParam0.f_1542[iVar0] = 0;
				*(uParam0.f_1546[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1556[iVar0] = 0;
				Global_89001[iVar0 /*29*/] = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_9 = 0f;
				Global_89001[iVar0 /*29*/].f_12 = 0f;
				Global_89001[iVar0 /*29*/].f_3 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_10 = 0f;
				Global_89001[iVar0 /*29*/].f_13 = 0f;
				Global_89001[iVar0 /*29*/].f_6 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_11 = 0f;
				Global_89001[iVar0 /*29*/].f_14 = 0f;
				Global_89001[iVar0 /*29*/].f_17 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_26 = 0f;
				Global_89001[iVar0 /*29*/].f_20 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_27 = 0f;
				Global_89001[iVar0 /*29*/].f_23 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_214(auto uParam0)
{
	*uParam0 = -15;
}

int func_215(int iParam0, auto uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = {115.1569f, -1286.684f, 28.2613f};
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_215(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_215(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = {1432.34f, -1887.383f, 70.5768f};
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = {1666.204f, 1967.25f, 143.3213f};
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = {-1440.22f, -127.02f, 50f};
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = {135.055f, -1759.64f, 27.8957f};
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = {687.6992f, -1744.03f, 28.3624f};
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = {56.5117f, -744.6122f, 43.1356f};
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = {506.485f, -1884.967f, 24.764f};
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = {1555.958f, 953.6136f, 77.2063f};
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = {220.72f, -64.4177f, 68.2922f};
			*fParam2 = 250.4535f - 360f;
			return 1;
			break;
		
		case 74:
			*uParam1 = {2048.07f, 3840.84f, 34.2238f};
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = {-464.22f, -1592.98f, 38.73f};
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = {-9f, 508.1f, 173.6278f};
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = {72.2278f, -1464.68f, 28.2915f};
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = {763f, -906f, 24.2312f};
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = {257.9167f, -1120.786f, 28.3684f};
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = {422.5858f, -978.6332f, 69.7073f};
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = {294.8521f, 882.9366f, 197.8527f};
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = {1495.595f, -1848.821f, 70.2075f};
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = {2897.554f, 4032.241f, 50.1419f};
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = {1397f, 3725.8f, 33.0673f};
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = {709.0244f, -2916.479f, 5.0589f};
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = {643.5248f, -2917.325f, 5.1337f};
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = {595.2742f, -2819.183f, 5.0559f};
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = {314.4171f, 965.207f, 208.4024f};
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = {3321.537f, 4975.455f, 25.9097f};
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
			*fParam2 = 42f + 180f;
			return 1;
			break;
		
		case 50:
			*uParam1 = {-731.3261f, 106.68f, 54.7169f};
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = {736.9869f, -2050.678f, 28.2718f};
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = {262.5499f, -2540.15f, 4.8433f};
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = {118.0988f, -1264.916f, 32.3637f};
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = {37.5988f, -1351.52f, 28.2954f};
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = {-558.2693f, 261.1167f, 82.07f};
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = {-196.9999f, 507.9999f, 132.477f};
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = {1312.01f, -1645.87f, 51.2f};
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = {2091.258f, 4714.852f, 40.1936f};
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = {1762.59f, 3247.212f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = {1764.013f, 3252.902f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_216(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85596[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85596[iParam0 /*2*/] = 0;
	}
}

void func_217()
{
	Global_91313 = 1;
	if (is_player_being_arrested(player_id(), 1))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_91())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
	}
	else if (!is_player_playing(player_id()))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_91())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
		GAMEPLAY::SET_BIT(&(Global_91278.f_20), 25);
	}
}

void func_218(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
		if (get_length_of_literal_string(sParam0) <= 16)
		{
			StringCopy(&Global_69721, sParam0, 16);
			StringCopy(&Global_69725, "", 16);
			if (_is_recording())
			{
				_stop_recording_and_save_clip();
			}
		}
	}
}

void func_219()
{
	Global_55756 = 0;
}

void func_220()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
		{
			if (is_vehicle_driveable(iLocal_3258, 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_3258))
				{
					if (get_time_position_in_recording(iLocal_3258) > 30000f)
					{
						STREAMING::REQUEST_MODEL(joaat("jet"));
						if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
						{
							iLocal_3266 = create_vehicle(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, true);
							set_vehicle_livery(iLocal_3266, 2);
							set_vehicle_is_considered_by_player(iLocal_3266, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3266, true);
							ENTITY::SET_ENTITY_PROOFS(iLocal_3266, true, true, true, true, true, false, 0, false);
							set_model_as_no_longer_needed(joaat("jet"));
							set_entity_lod_dist(iLocal_3266, 500);
						}
					}
				}
			}
		}
	}
	func_308();
	if (does_blip_exist(iLocal_3285))
	{
		func_307(iLocal_3285, iLocal_3222, 300f, 0.9f, 0);
	}
	if (iLocal_3181 == 0)
	{
		if (iLocal_3182 < 2)
		{
			set_ped_can_head_ik(PLAYER::PLAYER_PED_ID(), 0);
		}
		func_306();
		func_274();
		if (iLocal_3402 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[20]))
			{
				if (is_vehicle_driveable(iLocal_3121[20], 0))
				{
					set_vehicle_engine_on(iLocal_3121[20], true, 1, 0);
					set_heli_blades_full_speed(iLocal_3121[20]);
					iLocal_3402 = 1;
				}
			}
		}
		func_273();
		func_272();
		if (iLocal_3349 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				if (is_vehicle_driveable(iLocal_3258, 0))
				{
					if (is_playback_going_on_for_vehicle(iLocal_3258))
					{
						func_271(iLocal_3289, iLocal_3271, "BB_Chase", 1);
						iLocal_3349 = 1;
					}
				}
			}
		}
		else if (is_vehicle_driveable(iLocal_3258, 0))
		{
			if (is_playback_going_on_for_vehicle(iLocal_3258))
			{
				func_270(iLocal_3289, iLocal_3271, fLocal_3323);
				set_cam_fov(iLocal_3289, 45f);
			}
		}
		if (iLocal_3337 == 0)
		{
			if (is_vehicle_driveable(iLocal_3258, 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_3258))
				{
					if ((get_time_position_in_recording(iLocal_3258) > 15000f && get_time_position_in_recording(iLocal_3258) < 125464f) && func_268(1, 0, 0))
					{
						iLocal_3352 = 1;
						if (iLocal_3437 == 0)
						{
							clear_help(1);
							func_267("TRV4_HELP1", -1);
							func_262(1);
							func_183(&uLocal_28, 0, 0);
							set_cinematic_button_active(false);
							iLocal_3337 = 1;
						}
					}
				}
			}
		}
		else if (is_vehicle_driveable(iLocal_3258, 0))
		{
			if (is_playback_going_on_for_vehicle(iLocal_3258))
			{
				if (has_scaleform_movie_loaded(iLocal_3293) && func_159(1, "BB_Chase"))
				{
					if (((get_time_position_in_recording(iLocal_3258) > 15000f && get_time_position_in_recording(iLocal_3258) < 125464f) && iLocal_3437 == 0) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						func_240();
					}
					if (get_time_position_in_recording(iLocal_3258) > 125464f || !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (iLocal_3336)
						{
							clear_help(1);
							func_199(0, 1, 1, 0);
							set_cam_active(iLocal_3289, false);
							render_script_cams(false, false, 3000, 1, 0, 0);
							display_radar(true);
							if (is_audio_scene_active("SOL_3_CHOPPER_CAM"))
							{
								stop_audio_scene("SOL_3_CHOPPER_CAM");
							}
							stop_sound(iLocal_3219);
							func_219();
							set_frontend_radio_active(1);
							iLocal_3365[2] = 0;
							iLocal_3336 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_3182)
		{
			case 0:
				if (iLocal_3571[0] == 0)
				{
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3258))
						{
							if (get_time_position_in_recording(iLocal_3258) > 44255f && INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1187.3f, -2847.8f, 13.6f, 1) < 100f)
							{
								_0x293220DA1B46CEBC(10f, 2f, 3);
								iLocal_3571[0] = 1;
							}
						}
					}
				}
				if (iLocal_3571[1] == 0)
				{
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3258))
						{
							if (get_time_position_in_recording(iLocal_3258) > 52875f && INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1349f, -2720f, 14f, 1) < 50f)
							{
								_0x293220DA1B46CEBC(6f, 2f, 3);
								iLocal_3571[1] = 1;
							}
						}
					}
				}
				if (iLocal_3571[2] == 0)
				{
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3258))
						{
							if (get_time_position_in_recording(iLocal_3258) > 87085f && INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1507f, -2520f, 14f, 1) < 70f)
							{
								_0x293220DA1B46CEBC(10f, 2f, 3);
								iLocal_3571[2] = 1;
							}
						}
					}
				}
				func_239();
				func_238();
				if (!is_audio_scene_active("SOL_3_PLANE_ON_FIRE"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
					{
						if (is_vehicle_driveable(iLocal_3258, 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_3258))
							{
								if (get_time_position_in_recording(iLocal_3258) > 64280f && get_time_position_in_recording(iLocal_3258) < 72000f)
								{
									if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1149.6f, -2323.7f, 22.5f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 130f)
									{
										start_audio_scene("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
				{
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3258))
						{
							if (get_time_position_in_recording(iLocal_3258) > 72500f)
							{
								stop_audio_scene("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!is_audio_scene_active("SOL_3_EVENT_JET_LANDING"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
					{
						if (is_vehicle_driveable(iLocal_3258, 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_3258))
							{
								if (get_time_position_in_recording(iLocal_3258) > 78000f && get_time_position_in_recording(iLocal_3258) < 85000f)
								{
									start_audio_scene("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
				{
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3258))
						{
							if (get_time_position_in_recording(iLocal_3258) > 85500f)
							{
								stop_audio_scene("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!is_audio_scene_active("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
					{
						if (is_vehicle_driveable(iLocal_3258, 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_3258))
							{
								if (get_time_position_in_recording(iLocal_3258) > 100000f && get_time_position_in_recording(iLocal_3258) < 107000f)
								{
									start_audio_scene("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
				{
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3258))
						{
							if (get_time_position_in_recording(iLocal_3258) > 107500f)
							{
								stop_audio_scene("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
				{
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3258))
						{
							if (get_time_position_in_recording(iLocal_3258) < 10000f)
							{
								func_237();
							}
						}
					}
				}
				if (is_vehicle_driveable(iLocal_3258, 0))
				{
					if (is_playback_going_on_for_vehicle(iLocal_3258))
					{
						if (get_time_position_in_recording(iLocal_3258) < 30000f)
						{
							func_236(iLocal_3258, get_time_position_in_recording(iLocal_3258));
						}
					}
				}
				if (iLocal_3440 == 0)
				{
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3258))
						{
							if (get_time_position_in_recording(iLocal_3258) > 22000f)
							{
								prepare_music_event("TRV4_AIRPORT_ENTERED");
								iLocal_3440 = 1;
							}
						}
					}
				}
				else if (iLocal_3441 == 0)
				{
					if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, 0, true, 0))
					{
						trigger_music_event("TRV4_AIRPORT_ENTERED");
						iLocal_3441 = 1;
					}
				}
				if (iLocal_3343 == 0)
				{
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (func_16(iLocal_3258, PLAYER::PLAYER_PED_ID(), 1) < 170f && is_entity_on_screen(iLocal_3258))
						{
							if (does_blip_exist(iLocal_3287))
							{
								remove_blip(&iLocal_3287);
							}
							if (is_audio_scene_active("SOL_3_DRIVE_TO_AIRPORT"))
							{
								stop_audio_scene("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!is_audio_scene_active("SOL_3_MAIN_CHASE"))
							{
								start_audio_scene("SOL_3_MAIN_CHASE");
							}
							if (!does_blip_exist(iLocal_3285))
							{
								if (!PED::IS_PED_INJURED(iLocal_3222))
								{
									iLocal_3285 = add_blip_for_entity(iLocal_3222);
									set_blip_as_friendly(iLocal_3285, true);
								}
							}
							_0x67EEDEA1B9BAFD94();
							if (!is_message_being_displayed())
							{
								func_20("TRV4_CHASE2", 7500, 1);
								func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								trigger_music_event("TRV4_CHASE");
								iLocal_3343 = 1;
							}
						}
					}
					if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, 0, true, 0))
					{
						if (does_blip_exist(iLocal_3287))
						{
							remove_blip(&iLocal_3287);
						}
						if (!does_blip_exist(iLocal_3285))
						{
							if (!PED::IS_PED_INJURED(iLocal_3222))
							{
								iLocal_3285 = add_blip_for_entity(iLocal_3222);
								set_blip_as_friendly(iLocal_3285, true);
							}
						}
						_0x67EEDEA1B9BAFD94();
						if (!is_message_being_displayed())
						{
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							trigger_music_event("TRV4_CHASE");
							iLocal_3343 = 1;
						}
					}
				}
				else if (is_vehicle_driveable(iLocal_3258, 0))
				{
					if (is_playback_going_on_for_vehicle(iLocal_3258))
					{
						if (get_time_position_in_recording(iLocal_3258) < 15000f)
						{
						}
					}
				}
				if (iLocal_3328 == 0)
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
					{
						if (is_vehicle_driveable(iLocal_3258, 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_3258))
							{
								if (get_time_position_in_recording(iLocal_3258) > 18490f)
								{
									iLocal_3260[1] = create_vehicle(joaat("jet"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, 1, true);
									start_playback_recorded_vehicle(iLocal_3260[1], 2, "BB_Chase", 1);
									set_model_as_no_longer_needed(joaat("jet"));
									iLocal_3328 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260[1]))
				{
					if (is_vehicle_driveable(iLocal_3260[1], 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3260[1]))
						{
							set_playback_speed(iLocal_3260[1], fLocal_3323);
							if (get_time_position_in_recording(iLocal_3260[1]) > 20000f)
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3260[1], 1) > 200f && !is_entity_on_screen(iLocal_3260[1]))
								{
									stop_playback_recorded_vehicle(iLocal_3260[1]);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3254[1]))
									{
										PED::DELETE_PED(&(iLocal_3254[1]));
									}
									delete_vehicle(&(iLocal_3260[1]));
									iLocal_3207 = GAMEPLAY::GET_GAME_TIMER() + 1000;
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260[1]))
							{
								if (get_time_position_in_recording(iLocal_3260[1]) > 31543f)
								{
									stop_playback_recorded_vehicle(iLocal_3260[1]);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_3260[1], true);
								}
							}
						}
						else if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3260[1], 1) > 200f && !is_entity_on_screen(iLocal_3260[1]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3254[1]))
							{
								PED::DELETE_PED(&(iLocal_3254[1]));
							}
							delete_vehicle(&(iLocal_3260[1]));
							iLocal_3207 = GAMEPLAY::GET_GAME_TIMER() + 1000;
						}
					}
				}
				if (iLocal_3487 == 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
					{
						if (is_vehicle_driveable(iLocal_3258, 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_3258))
							{
								if (get_time_position_in_recording(iLocal_3258) > 23000f)
								{
									STREAMING::REQUEST_MODEL(joaat("tanker"));
									if (STREAMING::HAS_MODEL_LOADED(joaat("tanker")))
									{
										iLocal_3265 = create_vehicle(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, 1, true);
										set_model_as_no_longer_needed(joaat("tanker"));
										set_vehicle_colours(iLocal_3265, 57, 57);
										iLocal_3487 = 1;
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[1]))
				{
					if (is_vehicle_driveable(iLocal_3121[1], 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3121[1]))
						{
							if (get_time_position_in_recording(iLocal_3121[1]) > 13000f)
							{
								if (iLocal_3377 == 0)
								{
									fLocal_1173[1] = 0.5f;
									iLocal_3245 = get_ped_in_vehicle_seat(iLocal_3121[1], -1);
									iLocal_3377 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3334 == 0)
				{
					request_additional_collision_at_coord(-1325f, -2779f, 14f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[1]))
					{
						if (iLocal_3363 == 0)
						{
							set_vehicle_colours(iLocal_3121[1], 57, 57);
							iLocal_3363 = 1;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[1], 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_3265, 0))
								{
									if (is_playback_going_on_for_vehicle(iLocal_3121[1]))
									{
										attach_vehicle_to_trailer(iLocal_3121[1], iLocal_3265, 1f);
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
						{
							if (is_vehicle_driveable(iLocal_3258, 0))
							{
								if (is_playback_going_on_for_vehicle(iLocal_3258))
								{
									if (get_time_position_in_recording(iLocal_3258) > 41430f)
									{
										detach_entity(iLocal_3265, 1, true);
										iLocal_3334 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_3380 == 0)
				{
					if (is_vehicle_driveable(iLocal_3121[1], 0))
					{
						if (is_vehicle_driveable(iLocal_3258, 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_3258))
							{
								if (get_time_position_in_recording(iLocal_3258) > 42700f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
									{
										if (!PED::IS_PED_INJURED(iLocal_3245))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_3245, false);
										}
									}
									if (is_playback_going_on_for_vehicle(iLocal_3121[1]))
									{
										stop_playback_recorded_vehicle(iLocal_3121[1]);
										iLocal_3380 = 1;
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
				{
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3258))
						{
							if (iLocal_3551 == 0)
							{
								if (get_time_position_in_recording(iLocal_3258) > 38000f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[1]) && is_vehicle_driveable(iLocal_3121[1], 0))
									{
										play_sound_from_entity(-1, "Trevor_4_747_Tanker_Horn", iLocal_3121[1], 0, 0, 0);
										iLocal_3551 = 1;
									}
								}
							}
							if (iLocal_3365[1] == 0)
							{
								if (get_time_position_in_recording(iLocal_3258) > 39000f)
								{
									if (!is_audio_scene_active("SOL_3_EVENT_TANKER_CRASH"))
									{
										start_audio_scene("SOL_3_EVENT_TANKER_CRASH");
									}
									if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
									{
										ENTITY::SET_ENTITY_PROOFS(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), false, true, true, false, false, false, 0, false);
									}
									iLocal_3365[1] = 1;
								}
							}
							if (iLocal_3435 == 0)
							{
								if (get_time_position_in_recording(iLocal_3258) > 41611f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
									{
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_3265, 0))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[7]))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[7], 0))
												{
													play_sound_from_entity(-1, "Trevor_4_747_Tanker_Explosion", iLocal_3265, 0, 0, 0);
													stop_playback_recorded_vehicle(iLocal_3121[7]);
													explode_vehicle(iLocal_3121[7], 1, 0);
													explode_vehicle(iLocal_3265, 1, 0);
													FIRE::ADD_EXPLOSION(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1f);
													FIRE::ADD_EXPLOSION(-1212f, -2855f, 14.34f, 14, 1f, 1, 0, 1f);
													set_vehicle_as_no_longer_needed(&iLocal_3265);
													set_vehicle_as_no_longer_needed(&(iLocal_3121[1]));
													iLocal_3435 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3369[1] == 0)
							{
								if (get_time_position_in_recording(iLocal_3258) > 43204f)
								{
									if (is_audio_scene_active("SOL_3_EVENT_TANKER_CRASH"))
									{
										stop_audio_scene("SOL_3_EVENT_TANKER_CRASH");
									}
									release_named_script_audio_bank("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
									{
										ENTITY::SET_ENTITY_PROOFS(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), false, false, false, false, false, false, 0, false);
									}
									iLocal_3369[1] = 1;
								}
							}
						}
					}
				}
				if (!is_audio_scene_active("SOL_3_HELI_TAKEOFF"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[0]))
					{
						if (is_vehicle_driveable(iLocal_3121[0], 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
							{
								if (is_vehicle_driveable(iLocal_3258, 0))
								{
									if (is_playback_going_on_for_vehicle(iLocal_3258))
									{
										if (get_time_position_in_recording(iLocal_3258) > 36000f && get_time_position_in_recording(iLocal_3258) < 40000f)
										{
											start_audio_scene("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[0]))
				{
					if (is_vehicle_driveable(iLocal_3121[0], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
						{
							if (is_vehicle_driveable(iLocal_3258, 0))
							{
								if (is_playback_going_on_for_vehicle(iLocal_3258))
								{
									if (get_time_position_in_recording(iLocal_3258) > 43204f)
									{
										stop_audio_scene("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_3327 == 0)
				{
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3258))
						{
							if (get_time_position_in_recording(iLocal_3258) > 60500f)
							{
								STREAMING::REQUEST_MODEL(joaat("jet"));
							}
							if (get_time_position_in_recording(iLocal_3258) > 66500f)
							{
								if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
								{
									iLocal_3260[0] = create_vehicle(joaat("jet"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, 1, true);
									set_entity_invincible(iLocal_3260[0], true);
									set_vehicle_livery(iLocal_3260[0], 2);
									start_playback_recorded_vehicle(iLocal_3260[0], 35, "BB_Chase", 1);
									skip_time_in_playback_recorded_vehicle(iLocal_3260[0], 3491f);
									set_model_as_no_longer_needed(joaat("jet"));
									iLocal_3327 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260[0]))
				{
					if (is_vehicle_driveable(iLocal_3260[0], 0))
					{
						if (is_vehicle_driveable(iLocal_3258, 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_3258))
							{
								if (is_playback_going_on_for_vehicle(iLocal_3260[0]))
								{
									set_playback_speed(iLocal_3260[0], fLocal_3323);
									if (get_time_position_in_recording(iLocal_3258) > 80000f)
									{
										if (func_16(iLocal_3260[0], PLAYER::PLAYER_PED_ID(), 1) > 200f)
										{
											stop_playback_recorded_vehicle(iLocal_3260[0]);
										}
									}
								}
								else if (get_time_position_in_recording(iLocal_3258) > 80000f)
								{
									if (func_16(iLocal_3260[0], PLAYER::PLAYER_PED_ID(), 1) > 200f && !is_entity_on_screen(iLocal_3260[0]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3254[0]))
										{
											PED::DELETE_PED(&(iLocal_3254[0]));
										}
										delete_vehicle(&(iLocal_3260[0]));
										iLocal_3207 = GAMEPLAY::GET_GAME_TIMER() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_3399 == 0)
				{
					if (iLocal_3398 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
						{
							if (is_vehicle_driveable(iLocal_3258, 0))
							{
								if (is_playback_going_on_for_vehicle(iLocal_3258))
								{
									if (get_time_position_in_recording(iLocal_3258) > 50000f)
									{
										STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
										request_anim_dict("misstrevor4");
										if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker")))
										{
											iLocal_3246 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, 1, true);
											iLocal_3247 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, 1, true);
											set_blocking_of_non_temporary_events(iLocal_3246, true);
											set_blocking_of_non_temporary_events(iLocal_3247, true);
											set_model_as_no_longer_needed(joaat("s_m_y_airworker"));
											iLocal_3398 = 1;
										}
									}
								}
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
					{
						if (is_vehicle_driveable(iLocal_3258, 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_3258))
							{
								if (get_time_position_in_recording(iLocal_3258) > 58000f)
								{
									if (!PED::IS_PED_INJURED(iLocal_3246))
									{
										if (has_anim_dict_loaded("misstrevor4"))
										{
											if (!is_entity_playing_anim(iLocal_3246, "misstrevor4", "dive_clear_goon1", 3))
											{
												AI::TASK_PLAY_ANIM(iLocal_3246, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_3247))
									{
										if (has_anim_dict_loaded("misstrevor4"))
										{
											if (!is_entity_playing_anim(iLocal_3247, "misstrevor4", "dive_clear_goon2", 3))
											{
												AI::TASK_PLAY_ANIM(iLocal_3247, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									iLocal_3399 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3246))
				{
					if (!PED::IS_PED_INJURED(iLocal_3246))
					{
						if (!is_entity_playing_anim(iLocal_3246, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3247))
							{
								if (!PED::IS_PED_INJURED(iLocal_3247))
								{
									if (!is_entity_playing_anim(iLocal_3247, "misstrevor4", "dive_clear_goon2", 3))
									{
										remove_anim_dict("misstrevor4");
										set_ped_as_no_longer_needed(&iLocal_3246);
										set_ped_as_no_longer_needed(&iLocal_3247);
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[8]))
				{
					if (is_vehicle_driveable(iLocal_3121[8], 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3121[8]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
							{
								if (is_vehicle_driveable(iLocal_3258, 0))
								{
									if (is_playback_going_on_for_vehicle(iLocal_3258))
									{
										if (get_time_position_in_recording(iLocal_3258) > 50200f)
										{
											if (iLocal_3330 == 0)
											{
												set_playback_speed(iLocal_3121[8], 1f);
												if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3121[8], 1) < 100f)
												{
													set_time_scale(0.3f);
													iLocal_3373 = 0;
													if (!is_audio_scene_active("SOL_3_CAR_JET_ENGINE"))
													{
														start_audio_scene("SOL_3_CAR_JET_ENGINE");
													}
													set_gameplay_vehicle_hint(iLocal_3121[8], 0f, 0f, 0f, 1, 1500, 500, 100);
												}
												set_entity_load_collision_flag(iLocal_3121[8], true);
												set_vehicle_door_broken(iLocal_3121[8], true, 0);
												play_sound_from_entity(iLocal_3213, "Trevor_4_747_Flying_Car", iLocal_3121[8], 0, 0, 0);
												settimerb(false);
												iLocal_3330 = 1;
											}
										}
										if (iLocal_3330 == 1)
										{
											if (timerb() > 662)
											{
												if (is_audio_scene_active("SOL_3_CAR_JET_ENGINE"))
												{
													stop_audio_scene("SOL_3_CAR_JET_ENGINE");
												}
												set_time_scale(1f);
												iLocal_3373 = 1;
											}
											if (timerb() > 1872)
											{
												stop_playback_recorded_vehicle(iLocal_3121[8]);
											}
										}
									}
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
						{
							if (is_vehicle_driveable(iLocal_3258, 0))
							{
								if (is_playback_going_on_for_vehicle(iLocal_3258))
								{
									if (get_time_position_in_recording(iLocal_3258) > 50200f)
									{
										if (!is_entity_in_air(iLocal_3121[8]))
										{
											if (iLocal_3385 == 0)
											{
												play_sound_from_entity(iLocal_3213, "Trevor_4_747_Carsplosion", iLocal_3121[8], 0, 0, 0);
												explode_vehicle(iLocal_3121[8], 1, 0);
												iLocal_3385 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_3373 == 0)
					{
						if (iLocal_3330 == 1)
						{
							if (timerb() > 662)
							{
								if (is_audio_scene_active("SOL_3_CAR_JET_ENGINE"))
								{
									stop_audio_scene("SOL_3_CAR_JET_ENGINE");
								}
								set_time_scale(1f);
								iLocal_3373 = 1;
							}
						}
					}
				}
				else if (iLocal_3373 == 0)
				{
					if (iLocal_3330 == 1)
					{
						if (timerb() > 662)
						{
							if (is_audio_scene_active("SOL_3_CAR_JET_ENGINE"))
							{
								stop_audio_scene("SOL_3_CAR_JET_ENGINE");
							}
							set_time_scale(1f);
							iLocal_3373 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[11]))
				{
					if (is_vehicle_driveable(iLocal_3121[11], 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3121[11]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
							{
								if (is_vehicle_driveable(iLocal_3258, 0))
								{
									if (is_playback_going_on_for_vehicle(iLocal_3258))
									{
										if (get_time_position_in_recording(iLocal_3258) > 82683f)
										{
											if (iLocal_3331 == 0)
											{
												play_sound_from_entity(iLocal_3215, "Trevor_4_747_Flying_Car", iLocal_3121[11], 0, 0, 0);
												iLocal_3331 = 1;
												settimerb(false);
											}
											if (iLocal_3331 == 1)
											{
												if (timerb() > 1872)
												{
													if (!is_entity_in_air(iLocal_3121[11]))
													{
														stop_playback_recorded_vehicle(iLocal_3121[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_3331 == 1)
						{
							if (iLocal_3386 == 0)
							{
								if (!is_entity_in_air(iLocal_3121[11]))
								{
									play_sound_from_entity(iLocal_3215, "Trevor_4_747_Carsplosion", iLocal_3121[11], 0, 0, 0);
									explode_vehicle(iLocal_3121[11], 1, 0);
									iLocal_3386 = 1;
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[12]))
				{
					if (is_vehicle_driveable(iLocal_3121[12], 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3121[12]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
							{
								if (is_vehicle_driveable(iLocal_3258, 0))
								{
									if (is_playback_going_on_for_vehicle(iLocal_3258))
									{
										if (get_time_position_in_recording(iLocal_3258) > 82463f)
										{
											if (iLocal_3332 == 0)
											{
												play_sound_from_entity(iLocal_3216, "Trevor_4_747_Flying_Car", iLocal_3121[12], 0, 0, 0);
												iLocal_3332 = 1;
												settimerb(false);
											}
											if (iLocal_3332 == 1)
											{
												if (timerb() > 1000)
												{
													if (!is_entity_in_air(iLocal_3121[12]))
													{
														stop_playback_recorded_vehicle(iLocal_3121[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_3541 == 0)
							{
								if (is_playback_going_on_for_vehicle(iLocal_3121[12]))
								{
									if (get_time_position_in_recording(iLocal_3121[12]) > 22216f && func_16(iLocal_3259, iLocal_3121[12], 1) < 90f)
									{
										set_time_scale(0.3f);
										set_gameplay_vehicle_hint(iLocal_3121[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
										iLocal_3203 = GAMEPLAY::GET_GAME_TIMER();
										iLocal_3541 = 1;
									}
								}
							}
						}
						else if (iLocal_3332 == 1)
						{
							if (iLocal_3387 == 0)
							{
								if (!is_entity_in_air(iLocal_3121[12]))
								{
									play_sound_from_entity(iLocal_3216, "Trevor_4_747_Carsplosion", iLocal_3121[12], 0, 0, 0);
									explode_vehicle(iLocal_3121[12], 1, 0);
									iLocal_3387 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3541 == 1)
				{
				}
				if (iLocal_3540 == 0 && iLocal_3541 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[12]))
					{
						if (is_vehicle_driveable(iLocal_3121[12], 0))
						{
							vLocal_3315 = {ENTITY::GET_ENTITY_COORDS(iLocal_3121[12], 1)};
						}
					}
					vLocal_3318 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
					if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3203 + 1579 || vLocal_3318.y < vLocal_3315.y)
					{
						set_time_scale(1f);
						stop_gameplay_hint(0);
						iLocal_3540 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
				{
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3258))
						{
							if (get_time_position_in_recording(iLocal_3258) > 105000f && get_time_position_in_recording(iLocal_3258) < 113000f)
							{
								request_additional_collision_at_coord(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[13]))
				{
					if (is_vehicle_driveable(iLocal_3121[13], 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3121[13]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
							{
								if (is_vehicle_driveable(iLocal_3258, 0))
								{
									if (is_playback_going_on_for_vehicle(iLocal_3258))
									{
										if (get_time_position_in_recording(iLocal_3258) > 108830f)
										{
											set_vehicle_can_break(iLocal_3121[13], false);
											set_entity_load_collision_flag(iLocal_3121[13], true);
											_0x3910051CCECDB00C(iLocal_3121[13], false);
											settimera(false);
											iLocal_3486 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_3486 == 1)
						{
							ENTITY::SET_ENTITY_HEALTH(iLocal_3121[13], false);
							set_vehicle_undriveable(iLocal_3121[13], true);
							ENTITY::SET_ENTITY_HEALTH(get_ped_in_vehicle_seat(iLocal_3121[13], -1), false);
						}
					}
				}
				if (iLocal_3478 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[5]))
					{
						if (is_vehicle_driveable(iLocal_3121[5], 0))
						{
							set_vehicle_livery(iLocal_3121[5], false);
							set_entity_invincible(iLocal_3121[5], true);
							iLocal_3478 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[15]))
				{
					if (is_vehicle_driveable(iLocal_3121[15], 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3121[15]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
							{
								if (is_vehicle_driveable(iLocal_3258, 0))
								{
									if (is_playback_going_on_for_vehicle(iLocal_3258))
									{
										if (get_time_position_in_recording(iLocal_3258) > 104989f)
										{
											stop_playback_recorded_vehicle(iLocal_3121[15]);
											func_234(iLocal_3121[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
											func_234(iLocal_3121[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
											explode_vehicle(iLocal_3121[15], 1, 0);
											_0x293220DA1B46CEBC(4f, 4f, 4);
											play_sound_from_entity(-1, "Trevor_4_747_Carsplosion", iLocal_3121[15], 0, 0, 0);
											release_named_script_audio_bank("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
				{
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3258))
						{
							if (get_time_position_in_recording(iLocal_3258) > 112000f)
							{
								request_waypoint_recording("BB_MOLLY_2");
								request_anim_dict("misssolomon_3");
								request_anim_dict("move_f@film_reel_arms");
								iLocal_3182 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_3508 == 0)
				{
					if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, true, 0))
					{
						iLocal_3508 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3272[0]))
				{
					if (is_vehicle_driveable(iLocal_3272[0], 0))
					{
						_0x18EB48CFC41F2EA0(iLocal_3272[0], 0f);
						set_vehicle_as_no_longer_needed(&(iLocal_3272[0]));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3251[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_3251[0]))
					{
						AI::CLEAR_PED_TASKS(iLocal_3251[0]);
						set_ped_as_no_longer_needed(&(iLocal_3251[0]));
					}
				}
				if (iLocal_3401 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
					{
						if (is_vehicle_driveable(iLocal_3258, 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_3258))
							{
								if (get_time_position_in_recording(iLocal_3258) > 115000f)
								{
									request_waypoint_recording("Trev4_5");
									STREAMING::REQUEST_MODEL(joaat("prop_cs_film_reel_01"));
									if (!is_new_load_scene_active())
									{
										_new_load_scene_start_safe(-930.7f, -2916.9f, 13.4f, 10f, 0);
									}
									iLocal_3401 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3437 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
					{
						if (is_vehicle_driveable(iLocal_3258, 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_3258))
							{
								if (get_time_position_in_recording(iLocal_3258) > 120000f)
								{
									if (!is_audio_scene_active("SOL_3_ARRIVE_AT_HANGAR"))
									{
										start_audio_scene("SOL_3_ARRIVE_AT_HANGAR");
									}
									request_vehicle_high_detail_model(iLocal_3258);
								}
								if (get_time_position_in_recording(iLocal_3258) > 125513f)
								{
									stop_playback_recorded_vehicle(iLocal_3258);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_3258, true);
									func_233();
									clear_ped_non_creation_area();
									set_ped_paths_in_area(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, true, 0);
									stop_audio_scene("TREVOR_4_MAIN_CHASE");
									if (!does_cam_exist(iLocal_3291))
									{
										iLocal_3291 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
									}
									if (!does_cam_exist(iLocal_3290))
									{
										iLocal_3290 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
									}
									iLocal_3194 = GAMEPLAY::GET_GAME_TIMER();
									set_cinematic_button_active(true);
									_set_unk_map_flag(0);
									iLocal_3182 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				vLocal_3318 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
				request_vehicle_high_detail_model(iLocal_3258);
				if (iLocal_3508 == 0)
				{
					if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, true, 0))
					{
						iLocal_3508 = 1;
					}
				}
				if (iLocal_3437 == 0)
				{
					if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vLocal_3318, -930.7f, -2916.9f, 13.4f, 1) < 45f)
					{
						iLocal_3182 = 3;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
					{
						if (is_entity_on_screen(iLocal_3258))
						{
							if (iLocal_3508 == 1)
							{
								iLocal_3182 = 3;
							}
						}
					}
					if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3194 + 5000 && iLocal_3508 == 1)
					{
						iLocal_3182 = 3;
					}
				}
				break;
			
			case 3:
				if (is_new_load_scene_active())
				{
					new_load_scene_stop();
				}
				request_vehicle_high_detail_model(iLocal_3258);
				if (!PED::IS_PED_INJURED(iLocal_3222))
				{
					if (is_entity_playing_anim(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_3466 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
					{
						if (is_vehicle_driveable(iLocal_3258, 0))
						{
							if (!is_playback_going_on_for_vehicle(iLocal_3258))
							{
								if (has_anim_dict_loaded("misssolomon_3"))
								{
									if (!PED::IS_PED_INJURED(iLocal_3222))
									{
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
										{
											if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_film_reel_01")))
											{
												iLocal_3283 = create_object(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, true, false);
												attach_entity_to_entity(iLocal_3283, iLocal_3222, get_ped_bone_index(iLocal_3222, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											}
										}
										if (!is_entity_playing_anim(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_3258, false);
											iLocal_3208 = create_synchronized_scene(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
											play_synchronized_entity_anim(iLocal_3258, iLocal_3208, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											task_synchronized_scene(iLocal_3222, iLocal_3208, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1000f, 0);
											_0x394B9CD12435C981(iLocal_3208, false);
											trigger_music_event("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_3466 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3468 == 0)
				{
					if (iLocal_3466 == 1)
					{
						if (!PED::IS_PED_INJURED(iLocal_3222))
						{
							if (is_entity_in_angled_area(iLocal_3222, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, 0, true, 0))
							{
								if (is_entity_playing_anim(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									stop_synchronized_entity_anim(iLocal_3222, -1000f, 1);
								}
								AI::CLEAR_PED_TASKS_immediately(iLocal_3222);
								set_blocking_of_non_temporary_events(iLocal_3222, true);
								set_entity_coords(iLocal_3222, -934.8388f, -2932.831f, 12.9649f, 1, false, 0, 1);
								set_entity_heading(iLocal_3222, 236.5739f);
								task_follow_waypoint_recording(iLocal_3222, "BB_MOLLY_2", 1, 4, -1);
								if (has_anim_dict_loaded("move_f@film_reel_arms"))
								{
									AI::TASK_PLAY_ANIM(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
								}
								iLocal_3468 = 1;
							}
						}
					}
				}
				if (iLocal_3437 == 0)
				{
					if (iLocal_3476 == 0)
					{
						if (iLocal_3475 == 0)
						{
							if (!PED::IS_PED_INJURED(iLocal_3222))
							{
								if (is_entity_playing_anim(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (get_synchronized_scene_phase(iLocal_3208) > 0.18f || INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -930.7f, -2916.9f, 13.4f, 1) < 10f)
									{
										iLocal_3183 = 0;
										iLocal_3475 = 1;
									}
								}
							}
						}
						while (iLocal_3475 == 1)
						{
							_0x208784099002BC30("M_LegalTrouble", 0);
							switch (iLocal_3183)
							{
								case 0:
									set_cam_params(iLocal_3291, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, false, 1, 1, 2);
									set_cam_params(iLocal_3290, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, false, 1, 1, 2);
									set_cam_active_with_interp(iLocal_3290, iLocal_3291, 4000, 1, 1);
									display_radar(false);
									display_hud(false);
									render_script_cams(true, false, 3000, 1, 0, 0);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271))
									{
										delete_vehicle(&iLocal_3271);
									}
									if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
									{
										set_entity_coords(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), -918.6157f, -2926.646f, 12.9667f, 1, false, 0, 1);
										set_entity_heading(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 47.9465f);
									}
									else
									{
										set_entity_coords(PLAYER::PLAYER_PED_ID(), -918.6157f, -2926.646f, 12.9667f, 1, false, 0, 1);
										set_entity_heading(PLAYER::PLAYER_PED_ID(), 47.9465f);
									}
									if (!PED::IS_PED_INJURED(iLocal_3222))
									{
										func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
										_0x129466ED55140F8D(iLocal_3222, 1);
									}
									_0x293220DA1B46CEBC(4f, 0f, 3);
									_0x48621C9FCA3EBD28(4);
									set_player_control(player_id(), false, 0);
									iLocal_3529 = 0;
									iLocal_3183++;
									break;
								
								case 1:
									if (!PED::IS_PED_INJURED(iLocal_3222))
									{
										if (is_entity_playing_anim(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_3529 == 0)
											{
												if (get_synchronized_scene_phase(iLocal_3208) > 0.3f)
												{
													if (func_232(&uLocal_3578, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														_0x293220DA1B46CEBC(6f, 7f, 4);
														iLocal_3529 = 1;
													}
												}
											}
											if (get_synchronized_scene_phase(iLocal_3208) > 0.5f)
											{
												set_cam_params(iLocal_3291, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, false, 1, 1, 2);
												set_cam_params(iLocal_3290, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, false, 1, 1, 2);
												set_cam_active_with_interp(iLocal_3290, iLocal_3291, 4000, 1, 1);
												iLocal_3206 = GAMEPLAY::GET_GAME_TIMER();
												iLocal_3183++;
											}
										}
									}
									break;
								
								case 2:
									if (!PED::IS_PED_INJURED(iLocal_3222))
									{
										if (is_entity_playing_anim(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_3206 != -1 && _0xEE778F8C7E1142E2(0) == 4) && GAMEPLAY::GET_GAME_TIMER() - iLocal_3206 >= 2230)
											{
												_start_screen_effect("CamPushInNeutral", false, 0);
												play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
												iLocal_3206 = -1;
											}
											if (get_synchronized_scene_phase(iLocal_3208) > 0.85f)
											{
												display_hud(true);
												display_radar(true);
												render_script_cams(false, false, 3000, 1, 0, 0);
												set_gameplay_cam_relative_heading(0f);
												iLocal_3220 = 346732587;
												add_door_to_system(iLocal_3220, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.185f, 14.0945f, 1, 1, 0);
												_set_door_ajar_angle(iLocal_3220, 1f, 0, 1);
												set_player_control(player_id(), true, 0);
												if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
												{
													task_leave_vehicle(PLAYER::PLAYER_PED_ID(), get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0);
													if (_0xEE778F8C7E1142E2(1) != 4 && _0xEE778F8C7E1142E2(0) == 4)
													{
														_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 1, 0);
													}
												}
												_0x129466ED55140F8D(iLocal_3222, 0);
												_0x81CBAE94390F9F89();
												_0x293220DA1B46CEBC(0f, 4f, 3);
												iLocal_3195 = GAMEPLAY::GET_GAME_TIMER();
												iLocal_3475 = 0;
												iLocal_3476 = 1;
												iLocal_3183++;
											}
										}
									}
									break;
							}
							wait(false);
						}
					}
				}
				if (iLocal_3476 == 1)
				{
					_set_door_acceleration_limit(iLocal_3220, 5, 0, 1);
					if (iLocal_3552 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
						{
							if (!PED::IS_PED_INJURED(iLocal_3222))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_3222, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, false, true, 0))
								{
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, 0, 0, 0, 0);
									iLocal_3552 = 1;
								}
							}
						}
					}
				}
				if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (is_audio_scene_active("SOL_3_MAIN_CHASE"))
					{
						stop_audio_scene("SOL_3_MAIN_CHASE");
					}
					if (is_audio_scene_active("SOL_3_ARRIVE_AT_HANGAR"))
					{
						stop_audio_scene("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!is_audio_scene_active("SOL_3_ON_FOOT_CHASE"))
					{
						start_audio_scene("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_221();
				}
				if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, 0, true, 1))
				{
					if (iLocal_3468 == 0)
					{
						if (!PED::IS_PED_INJURED(iLocal_3222))
						{
							if (is_entity_playing_anim(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								stop_synchronized_entity_anim(iLocal_3222, -1000f, 1);
							}
							AI::CLEAR_PED_TASKS_immediately(iLocal_3222);
							set_blocking_of_non_temporary_events(iLocal_3222, true);
							set_entity_coords(iLocal_3222, -934.8388f, -2932.831f, 12.9649f, 1, false, 0, 1);
							set_entity_heading(iLocal_3222, 236.5739f);
							task_follow_waypoint_recording(iLocal_3222, "BB_MOLLY_2", 1, 4, -1);
							if (has_anim_dict_loaded("move_f@film_reel_arms"))
							{
								AI::TASK_PLAY_ANIM(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							iLocal_3468 = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
					{
						delete_vehicle(&iLocal_3266);
					}
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 5;
				}
				break;
			}
	}
}

void func_221()
{
	if (iLocal_3433 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[14]))
		{
			if (is_vehicle_driveable(iLocal_3121[14], 0))
			{
				iLocal_3248 = get_ped_in_vehicle_seat(iLocal_3121[14], -1);
				give_weapon_to_ped(iLocal_3248, joaat("weapon_pistol"), 1000, true, true);
				set_entity_as_mission_entity(iLocal_3248, true, 0);
				set_blocking_of_non_temporary_events(iLocal_3248, true);
				set_ped_accuracy(iLocal_3248, 5);
				ENTITY::SET_ENTITY_HEALTH(iLocal_3248, 150);
				func_17(&uLocal_3578, 3, iLocal_3248, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_3433 = 1;
	}
	else if (iLocal_3432 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3248))
		{
			if (!PED::IS_PED_INJURED(iLocal_3248))
			{
				AI::CLEAR_PED_TASKS(iLocal_3248);
				set_ped_sphere_defensive_area(iLocal_3248, ENTITY::GET_ENTITY_COORDS(iLocal_3248, 1), 5f, 0, 0);
				open_sequence_task(&iLocal_3292);
				task_leave_any_vehicle(false, false, 0);
				task_seek_cover_from_ped(false, PLAYER::PLAYER_PED_ID(), 5000, 1);
				task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
				close_sequence_task(iLocal_3292);
				task_perform_sequence(iLocal_3248, iLocal_3292);
				clear_sequence_task(&iLocal_3292);
				iLocal_3432 = 1;
			}
		}
	}
	else if (iLocal_3489 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3248))
		{
			if (!PED::IS_PED_INJURED(iLocal_3248))
			{
				if (!is_ped_in_any_vehicle(iLocal_3248, 0) && func_13(PLAYER::PLAYER_PED_ID(), iLocal_3248) < 20f)
				{
					if (!func_231())
					{
						if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
						{
							func_17(&uLocal_3578, 4, iLocal_3248, "SOL3COP", 0, 1);
							if (func_222(&uLocal_3578, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_3489 = 1;
							}
						}
					}
				}
			}
		}
	}
}

int func_222(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_230(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_223(sParam2, iParam4, 0);
}

bool func_223(char* sParam0, int iParam1, int iParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					stop_scripted_conversation(false);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_188();
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return false;
		}
		if (func_229(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_228();
		Global_15001 = {Global_15166};
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = {Global_15743};
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = {Global_16716};
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2283, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2284, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2285, false);
			if (iParam2)
			{
				func_227();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return false;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return false;
				}
			}
			if (Global_14379 == 1)
			{
				return false;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (func_226())
				{
					return false;
				}
				if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_200())
			{
				return false;
			}
			else
			{
				switch (Global_14413.f_1)
				{
					case 7:
						return false;
						break;
					
					case 8:
						return false;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 9))
				{
					return false;
				}
			}
			func_225();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_224();
		return true;
	}
	if (Global_15712 == 5)
	{
		return false;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return false;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_188();
	}
	return false;
}

void func_224()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	stop_scripted_conversation(false);
	Global_15712 = 1;
}

void func_225()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = {Global_15794};
	Global_15812 = {Global_15800};
	Global_15767 = Global_15766;
	Global_15836 = {Global_15818};
	Global_15842 = {Global_15824};
	Global_15848 = {Global_15830};
	Global_15854 = {Global_15860};
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = {Global_15743};
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_2284, 16);
}

bool func_226()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (is_player_playing(player_id()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (is_aim_cam_active() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_config_flag(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_227()
{
	if (func_57(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_91();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_228()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = {0f, 0f, 0f};
}

int func_229(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1338622.f_949, iParam0);
}

void func_230(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

bool func_231()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

int func_232(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_230(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_223(sParam2, iParam3, 0);
}

void func_233()
{
	if (does_particle_fx_looped_exist(iLocal_3755[0]))
	{
		stop_particle_fx_looped(iLocal_3755[0], 0);
	}
	if (does_particle_fx_looped_exist(iLocal_3755[1]))
	{
		stop_particle_fx_looped(iLocal_3755[1], 0);
	}
	if (does_particle_fx_looped_exist(iLocal_3755[2]))
	{
		stop_particle_fx_looped(iLocal_3755[2], 0);
	}
	if (iLocal_3388 == 1)
	{
		release_sound_id(iLocal_3217);
		iLocal_3396 = 0;
	}
}

void func_234(int iParam0, Vector3 vParam1, Vector3 vParam2, float fParam3, int iParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (is_playback_going_on_for_vehicle(iParam0))
		{
			stop_playback_recorded_vehicle(iParam0);
		}
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
		if (iParam8)
		{
			vVar0 = {get_offset_from_entity_in_world_coords(iParam0, vParam1)};
		}
		else
		{
			vVar0 = {vParam1};
		}
		vVar6 = {func_235(vVar0 - vVar3)};
		vVar6 = {vVar6 * Vector(fParam7, fParam7, fParam7)};
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 3, vVar6, vParam4, 0, 0, 1, 1, 0, 1);
	}
}

Vector3 func_235(Vector3 vParam0)
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

void func_236(int iParam0, float fParam1)
{
	int iVar0;
	Vector3 vVar1;
	
	if (iLocal_1956 < 15)
	{
		if (iLocal_1956 == 0)
		{
			vLocal_2656 = {99999.9f, 99999.9f, 99999.9f};
			vLocal_2659 = {-99999.9f, -99999.9f, -99999.9f};
		}
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (is_playback_going_on_for_vehicle(iParam0))
			{
				iVar0 = get_current_playback_for_vehicle(iParam0);
				vVar1 = {_0x92523B76657A517D(iVar0, fParam1 + to_float(iLocal_1956 - 1) * 2000f)};
				if (vVar1.x < vLocal_2656.x)
				{
					vLocal_2656.x = vVar1.x;
				}
				if (vVar1.y < vLocal_2656.y)
				{
					vLocal_2656.y = vVar1.y;
				}
				if (vVar1.z < vLocal_2656.z)
				{
					vLocal_2656.z = vVar1.z;
				}
				if (vVar1.x > vLocal_2659.x)
				{
					vLocal_2659.x = vVar1.x;
				}
				if (vVar1.y > vLocal_2659.y)
				{
					vLocal_2659.y = vVar1.y;
				}
				if (vVar1.z > vLocal_2659.z)
				{
					vLocal_2659.z = vVar1.z;
				}
			}
		}
		iLocal_1956++;
	}
	else if (!iLocal_106)
	{
		set_roads_back_to_original(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 1);
		vLocal_2656 = {vLocal_2656 + Vector(fLocal_1293 * -1f, fLocal_1293 * -1f, fLocal_1293 * -1f)};
		vLocal_2659 = {vLocal_2659 + Vector(fLocal_1293, fLocal_1293, fLocal_1293)};
		vLocal_2650 = {vLocal_2656};
		vLocal_2653 = {vLocal_2659};
		set_roads_in_area(vLocal_2650, vLocal_2653, false, 0);
		iLocal_1956 = 0;
	}
}

void func_237()
{
	iLocal_89 = 1;
}

void func_238()
{
	if (iLocal_3333 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
		{
			if (is_playback_going_on_for_vehicle(iLocal_3258))
			{
				if (get_time_position_in_recording(iLocal_3258) > 55000f)
				{
					STREAMING::REQUEST_MODEL(1938952078);
					STREAMING::REQUEST_MODEL(joaat("s_m_y_fireman_01"));
					request_anim_dict("missheist_agency3aig_lift_waitped_a");
					if ((STREAMING::HAS_MODEL_LOADED(1938952078) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_fireman_01"))) && has_anim_dict_loaded("missheist_agency3aig_lift_waitped_a"))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3264))
						{
							clear_area(-1129.566f, -2319.888f, 12.9445f, 10f, 0, 0, 0, false);
							iLocal_3264 = create_vehicle(1938952078, -1129.566f, -2319.888f, 12.9445f, 16.5423f, 1, true);
						}
						iLocal_3755[0] = start_particle_fx_looped_at_coord("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
						if (iLocal_3388 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3217, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, 0, 0, 0);
							iLocal_3388 = 1;
						}
						iLocal_3755[1] = start_particle_fx_looped_at_coord("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
						iLocal_3755[2] = start_particle_fx_looped_at_coord("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3223[0]))
						{
							iLocal_3223[0] = PED::CREATE_PED_inside_vehicle(iLocal_3264, 21, joaat("s_m_y_fireman_01"), -1, 1, true);
							set_blocking_of_non_temporary_events(iLocal_3223[0], true);
							set_ped_keep_task(iLocal_3223[0], true);
							task_vehicle_shoot_at_coord(iLocal_3223[0], -1147.07f, -2320.65f, 18.93f, 20f);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3223[1]))
						{
							iLocal_3223[1] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, 1, true);
							AI::TASK_PLAY_ANIM(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
							set_blocking_of_non_temporary_events(iLocal_3223[1], true);
							set_ped_keep_task(iLocal_3223[1], true);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3223[2]))
						{
							iLocal_3223[2] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, 1, true);
							AI::TASK_PLAY_ANIM(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
							set_blocking_of_non_temporary_events(iLocal_3223[2], true);
							set_ped_keep_task(iLocal_3223[2], true);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3223[3]))
						{
							iLocal_3223[3] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, 1, true);
							AI::TASK_PLAY_ANIM(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0, 0, 0, 0);
							set_blocking_of_non_temporary_events(iLocal_3223[3], true);
							set_ped_keep_task(iLocal_3223[3], true);
						}
						set_model_as_no_longer_needed(joaat("s_m_y_fireman_01"));
						set_model_as_no_longer_needed(1938952078);
						iLocal_3333 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3333 == 1)
	{
		if (iLocal_3543[0] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_3223[1]))
				{
					if (iLocal_3547[0] == 0)
					{
						if (is_entity_playing_anim(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_3547[0] = 1;
						}
					}
					if (iLocal_3547[0] == 1)
					{
						if (!is_entity_playing_anim(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							task_cower(iLocal_3223[1], -1);
							set_ped_keep_task(iLocal_3223[1], true);
							set_blocking_of_non_temporary_events(iLocal_3223[1], false);
							iLocal_3543[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[1] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[2]))
			{
				if (!PED::IS_PED_INJURED(iLocal_3223[2]))
				{
					if (iLocal_3547[1] == 0)
					{
						if (is_entity_playing_anim(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_3547[1] = 1;
						}
					}
					if (iLocal_3547[1] == 1)
					{
						if (!is_entity_playing_anim(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							task_cower(iLocal_3223[2], -1);
							set_ped_keep_task(iLocal_3223[2], true);
							set_blocking_of_non_temporary_events(iLocal_3223[2], false);
							iLocal_3543[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[2] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[3]))
			{
				if (!PED::IS_PED_INJURED(iLocal_3223[3]))
				{
					if (iLocal_3547[2] == 0)
					{
						if (is_entity_playing_anim(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_3547[2] = 1;
						}
					}
					if (iLocal_3547[2] == 1)
					{
						if (!is_entity_playing_anim(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							task_cower(iLocal_3223[3], -1);
							set_ped_keep_task(iLocal_3223[3], true);
							set_blocking_of_non_temporary_events(iLocal_3223[3], false);
							iLocal_3543[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_239()
{
	if (iLocal_3434 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
		request_vehicle_recording(true, "BB_AIChase");
		if (STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
		{
			if (is_vehicle_driveable(iLocal_3258, 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_3258))
				{
					if (get_time_position_in_recording(iLocal_3258) > 15500f)
					{
						set_player_wanted_level(player_id(), 2, 0);
						set_player_wanted_level_now(player_id(), 0);
						iLocal_3272[0] = create_vehicle(joaat("police3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, 1, true);
						iLocal_3251[0] = PED::CREATE_PED_inside_vehicle(iLocal_3272[0], 6, joaat("s_m_y_cop_01"), -1, 1, true);
						set_blocking_of_non_temporary_events(iLocal_3251[0], true);
						_0x153973AB99FE8980(iLocal_3272[0], "SOL_3_POLICE_CARS_Group", 0f);
						func_111(iLocal_3251[0], 0);
						set_vehicle_engine_on(iLocal_3272[0], true, 1, 0);
						start_playback_recorded_vehicle(iLocal_3272[0], true, "BB_AIChase", 1);
						give_weapon_to_ped(iLocal_3251[0], joaat("weapon_pistol"), 1000, true, true);
						set_vehicle_siren(iLocal_3272[0], true);
						set_model_as_no_longer_needed(joaat("police3"));
						set_model_as_no_longer_needed(joaat("s_m_y_cop_01"));
						iLocal_3434 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3434 == 1)
	{
		if (iLocal_3480[0] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3272[0]))
			{
				if (is_vehicle_driveable(iLocal_3272[0], 0))
				{
					if (is_playback_going_on_for_vehicle(iLocal_3272[0]))
					{
						set_playback_speed(iLocal_3272[0], fLocal_3323);
						if (get_time_position_in_recording(iLocal_3272[0]) > 13000f)
						{
							stop_playback_recorded_vehicle(iLocal_3272[0]);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3251[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_3251[0]))
						{
							set_blocking_of_non_temporary_events(iLocal_3251[0], true);
							if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
							{
								task_vehicle_chase(iLocal_3251[0], PLAYER::PLAYER_PED_ID());
								set_ped_keep_task(iLocal_3251[0], true);
							}
							else
							{
								task_combat_ped(iLocal_3251[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								set_ped_keep_task(iLocal_3251[0], true);
							}
							remove_vehicle_recording(true, "BB_AIChase");
							iLocal_3196 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_3480[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3483[0] == 0)
		{
			if (iLocal_3480[0] == 1)
			{
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3196 + 500)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3251[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_3251[0]))
						{
							if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
							{
								set_task_vehicle_chase_behavior_flag(iLocal_3251[0], 16, 1);
								set_task_vehicle_chase_behavior_flag(iLocal_3251[0], 1, 1);
								iLocal_3483[0] = 1;
							}
							else
							{
								iLocal_3483[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_240()
{
	if (!iLocal_3335)
	{
		if (is_vehicle_driveable(iLocal_3121[20], 0))
		{
			iLocal_3289 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
			set_cam_active(iLocal_3289, true);
			iLocal_3336 = 0;
			iLocal_3335 = 1;
		}
	}
	else if (func_255(&uLocal_28, 1, 0, 0) && iLocal_3437 == 0)
	{
		if (is_help_message_being_displayed())
		{
			clear_help(1);
		}
		if (func_231())
		{
			clear_prints();
			func_185();
		}
		if (iLocal_3365[2] == 0)
		{
			if (!is_audio_scene_active("SOL_3_CHOPPER_CAM"))
			{
				start_audio_scene("SOL_3_CHOPPER_CAM");
			}
			play_sound_frontend(iLocal_3219, "Trevor_4_747_TV", 0, 1);
			iLocal_3365[2] = 1;
		}
		func_246(1, 1, 30, 5, 0);
		if (iLocal_3354 == 0)
		{
			_push_scaleform_movie_function(iLocal_3293, "SET_TEXT");
			func_245("TRV4_NEWS1");
			func_245("");
			_pop_scaleform_movie_function_void();
			iLocal_3354 = 1;
		}
		if (iLocal_3355 == 0)
		{
			_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
			_push_scaleform_movie_function_parameter_float(1f);
			_push_scaleform_movie_function_parameter_float(0f);
			func_245("TRV4_NEWS2");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
			_push_scaleform_movie_function_parameter_float(0f);
			_push_scaleform_movie_function_parameter_float(0f);
			func_245("TRV4_NEWS6");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
			_push_scaleform_movie_function_parameter_float(0f);
			_push_scaleform_movie_function_parameter_float(1f);
			func_245("TRV4_NEWS7");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
			_push_scaleform_movie_function_parameter_float(0f);
			_push_scaleform_movie_function_parameter_float(2f);
			func_245("TRV4_NEWS8");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
			_push_scaleform_movie_function_parameter_float(0f);
			_push_scaleform_movie_function_parameter_float(3f);
			func_245("TRV4_NEWS9");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
			_push_scaleform_movie_function_parameter_float(0f);
			_push_scaleform_movie_function_parameter_float(4f);
			func_245("TRV4_NEWS10");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iLocal_3293, "DISPLAY_SCROLL_TEXT");
			_push_scaleform_movie_function_parameter_float(1f);
			_push_scaleform_movie_function_parameter_float(0f);
			_pop_scaleform_movie_function_void();
			iLocal_3201 = GAMEPLAY::GET_GAME_TIMER() - 5000;
			iLocal_3355 = 1;
		}
		if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3201 + 5000)
		{
			func_244();
			iLocal_3201 = GAMEPLAY::GET_GAME_TIMER();
		}
		if (iLocal_3356 == 0)
		{
			if (is_vehicle_driveable(iLocal_3258, 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_3258))
				{
					if (get_time_position_in_recording(iLocal_3258) > 25000f && get_time_position_in_recording(iLocal_3258) < 50000f)
					{
						_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
						_push_scaleform_movie_function_parameter_float(1f);
						_push_scaleform_movie_function_parameter_float(1f);
						func_245("TRV4_NEWS5");
						_pop_scaleform_movie_function_void();
						_push_scaleform_movie_function(iLocal_3293, "DISPLAY_SCROLL_TEXT");
						_push_scaleform_movie_function_parameter_float(1f);
						_push_scaleform_movie_function_parameter_float(1f);
						_pop_scaleform_movie_function_void();
						iLocal_3356 = 1;
					}
				}
			}
		}
		if (iLocal_3357 == 0)
		{
			if (is_vehicle_driveable(iLocal_3258, 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_3258))
				{
					if (get_time_position_in_recording(iLocal_3258) > 77600f && get_time_position_in_recording(iLocal_3258) < 115000f)
					{
						_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
						_push_scaleform_movie_function_parameter_float(1f);
						_push_scaleform_movie_function_parameter_float(2f);
						func_245("TRV4_NEWS3");
						_pop_scaleform_movie_function_void();
						_push_scaleform_movie_function(iLocal_3293, "DISPLAY_SCROLL_TEXT");
						_push_scaleform_movie_function_parameter_float(1f);
						_push_scaleform_movie_function_parameter_float(2f);
						_pop_scaleform_movie_function_void();
						iLocal_3357 = 1;
					}
				}
			}
		}
		if (iLocal_3358 == 0)
		{
			if (is_vehicle_driveable(iLocal_3258, 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_3258))
				{
					if (get_time_position_in_recording(iLocal_3258) > 115000f)
					{
						_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
						_push_scaleform_movie_function_parameter_float(1f);
						_push_scaleform_movie_function_parameter_float(3f);
						func_245("TRV4_NEWS4");
						_pop_scaleform_movie_function_void();
						_push_scaleform_movie_function(iLocal_3293, "DISPLAY_SCROLL_TEXT");
						_push_scaleform_movie_function_parameter_float(1f);
						_push_scaleform_movie_function_parameter_float(3f);
						_pop_scaleform_movie_function_void();
						iLocal_3358 = 1;
					}
				}
			}
		}
		set_text_render_id(iLocal_3184);
		draw_scaleform_movie_fullscreen(iLocal_3293, 255, 255, 255, false, 0);
		if (iLocal_3336 == 0)
		{
			func_199(1, 1, 1, 0);
			shake_cam(iLocal_3289, "ROAD_VIBRATION_SHAKE", 1f);
			set_cam_active(iLocal_3289, true);
			render_script_cams(true, false, 3000, 1, 0, 0);
			display_radar(false);
			special_ability_deactivate(player_id());
			func_243();
			iLocal_3336 = 1;
		}
		func_241();
		hide_hud_component_this_frame(6);
		hide_hud_component_this_frame(7);
		hide_hud_component_this_frame(8);
		hide_hud_component_this_frame(9);
		hide_hud_component_this_frame(1);
		hide_hud_component_this_frame(2);
		hide_hud_component_this_frame(15);
		hide_hud_component_this_frame(3);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 85, 1);
		set_frontend_radio_active(0);
	}
	else if (iLocal_3336)
	{
		func_199(0, 1, 1, 0);
		set_cam_active(iLocal_3289, false);
		render_script_cams(false, false, 3000, 1, 0, 0);
		display_radar(true);
		if (is_audio_scene_active("SOL_3_CHOPPER_CAM"))
		{
			stop_audio_scene("SOL_3_CHOPPER_CAM");
		}
		stop_sound(iLocal_3219);
		func_219();
		set_frontend_radio_active(1);
		iLocal_3365[2] = 0;
		iLocal_3336 = 0;
	}
}

void func_241()
{
	_0xEB2D525B57F42B40();
	func_242();
}

void func_242()
{
	Global_17118.f_134 = 1;
}

void func_243()
{
	Global_55756 = 1;
}

void func_244()
{
	if (iLocal_3186 > 4)
	{
		iLocal_3186 = false;
	}
	_push_scaleform_movie_function(iLocal_3293, "DISPLAY_SCROLL_TEXT");
	_push_scaleform_movie_function_parameter_int(false);
	_push_scaleform_movie_function_parameter_int(iLocal_3186);
	_pop_scaleform_movie_function_void();
	iLocal_3186++;
}

void func_245(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_246(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_254())
	{
		func_254();
	}
	else if (iParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_50 <= 225 && iLocal_44 == 0)
			{
				iLocal_50 += 30;
				if (iLocal_50 >= 225)
				{
					iLocal_44 = 1;
				}
			}
			else if (iLocal_50 >= 30)
			{
				iLocal_50 -= 30;
				if (iLocal_50 <= 30)
				{
					iLocal_44 = 0;
				}
			}
		}
		func_253(1, 200);
		if (iLocal_48 <= iParam2 && iLocal_43 == 0)
		{
			iLocal_48++;
			func_250(1, iLocal_48);
			if (iLocal_48 == iParam2)
			{
				iLocal_43 = 1;
				iLocal_49 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(iParam3, iParam2);
			}
		}
		else if (iLocal_48 > 0)
		{
			if (iLocal_48 > iLocal_49)
			{
				iLocal_48--;
				func_250(1, iLocal_48);
				if (iLocal_48 == iLocal_49)
				{
					iLocal_43 = 0;
				}
			}
		}
		if (iParam1)
		{
			func_247(1, 40, 1, 1, 1);
		}
	}
}

void func_247(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_254())
	{
		func_254();
	}
	else if (iParam0)
	{
		if (iParam2)
		{
			if (!func_249(0))
			{
				func_248(0);
			}
			else
			{
				draw_sprite("digitalOverlay", "nscuzz1", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 += 0.01f;
			}
			else
			{
				fLocal_51 = 0f;
			}
		}
		if (iParam3)
		{
			if (!func_249(1))
			{
				func_248(1);
			}
			else
			{
				draw_sprite("digitalOverlay", "nscuzz2", 0.5f, fLocal_52, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 += 0.02f;
			}
			else
			{
				fLocal_52 = 0f;
			}
		}
		if (iParam4)
		{
			if (!func_249(2))
			{
				func_248(2);
			}
			else
			{
				draw_sprite("digitalOverlay", "nscuzz3", 0.5f, fLocal_53, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_53 < 1f)
			{
				fLocal_53 += 0.028f;
			}
			else
			{
				fLocal_53 = 0f;
			}
		}
	}
}

void func_248(int iParam0)
{
	if (iParam0 < 32)
	{
		GAMEPLAY::SET_BIT(&iLocal_54, iParam0);
	}
}

bool func_249(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_54, iParam0))
	{
		return true;
	}
	return false;
}

void func_250(int iParam0, int iParam1)
{
	if (!func_254())
	{
		func_254();
	}
	else if (iParam0)
	{
		iLocal_46 = func_252(5);
		iLocal_45 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(false, 4);
		while (iLocal_47 == iLocal_46)
		{
			iLocal_46 = func_252(5);
		}
		if (iLocal_46 == 0)
		{
			if (!func_249(3))
			{
				func_248(3);
			}
			else
			{
				draw_sprite("digitalOverlay", "Static1", 0.5f, 0.5f, 1f * func_251(iLocal_40), 1f * func_251(iLocal_41), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 1)
		{
			if (!func_249(4))
			{
				func_248(4);
			}
			else
			{
				draw_sprite("digitalOverlay", "Static2", 0.5f, 0.5f, 1f * func_251(iLocal_40), 1f * func_251(iLocal_41), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 2)
		{
			if (!func_249(5))
			{
				func_248(5);
			}
			else
			{
				draw_sprite("digitalOverlay", "Static3", 0.5f, 0.5f, 1f * func_251(iLocal_40), 1f * func_251(iLocal_41), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 3)
		{
			if (!func_249(6))
			{
				func_248(6);
			}
			else
			{
				draw_sprite("digitalOverlay", "Static4", 0.5f, 0.5f, 1f * func_251(iLocal_40), 1f * func_251(iLocal_41), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 4)
		{
			if (!func_249(7))
			{
				func_248(7);
			}
			else
			{
				draw_sprite("digitalOverlay", "Static5", 0.5f, 0.5f, 1f * func_251(iLocal_40), 1f * func_251(iLocal_41), 0f, 255, 255, 255, iParam1, 0);
			}
		}
	}
}

float func_251(int iParam0)
{
	if (iParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

int func_252(int iParam0)
{
	if (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(false, 50) > 25)
	{
		iLocal_40 = true;
	}
	else
	{
		iLocal_40 = false;
	}
	if (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(false, 50) > 25)
	{
		iLocal_41 = true;
	}
	else
	{
		iLocal_41 = false;
	}
	return GAMEPLAY::GET_RANDOM_INT_IN_RANGE(false, iParam0);
}

void func_253(int iParam0, int iParam1)
{
	if (!func_254())
	{
		func_254();
	}
	else if (iParam0)
	{
		if (iLocal_42)
		{
			if (!func_249(8))
			{
				func_248(8);
			}
			else
			{
				draw_sprite("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 0;
		}
		else
		{
			if (!func_249(8))
			{
				func_248(8);
			}
			else
			{
				draw_sprite("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 1;
		}
	}
}

bool func_254()
{
	request_streamed_texture_dict("digitalOverlay", false);
	if (has_streamed_texture_dict_loaded("digitalOverlay"))
	{
		return true;
	}
	return false;
}

bool func_255(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0.f_1)
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= *uParam0.f_8 + *uParam0.f_9)
		{
			*uParam0.f_1 = 0;
		}
	}
	switch (*uParam0.f_5)
	{
		case 0:
			*uParam0.f_7 = 0;
			if (*uParam0.f_6 == 0)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_261(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 1;
						*uParam0.f_7 = 1;
					}
				}
				else if (func_260(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (func_260(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_261(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			if (func_259(uParam0))
			{
				*uParam0.f_7 = 1;
				*uParam0.f_5 = 4;
			}
			break;
		
		case 1:
			if (GAMEPLAY::GET_GAME_TIMER() - *uParam0.f_4 <= 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_261(iParam1, iParam2, iParam3))
						{
							*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
							*uParam0.f_5 = 3;
						}
					}
					else if (!func_260(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (!func_260(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!func_261(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
			}
			else
			{
				*uParam0.f_5 = 2;
			}
			break;
		
		case 2:
			if (*uParam0.f_6 == 0)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_261(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (!func_260(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (!func_260(iParam1, iParam2, iParam3) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || get_is_task_active(PLAYER::PLAYER_PED_ID(), 2))
				{
					*uParam0.f_5 = 0;
				}
				else if (!func_261(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			break;
		
		case 3:
			if (GAMEPLAY::GET_GAME_TIMER() - *uParam0.f_4 > 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_258(iParam1, iParam2, iParam3))
						{
							*uParam0.f_5 = 0;
						}
					}
					else if (func_257(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || func_257(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || get_is_task_active(PLAYER::PLAYER_PED_ID(), 2))
					{
						*uParam0.f_5 = 0;
					}
					else if (func_258(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_259(uParam0))
			{
				*uParam0.f_5 = 0;
			}
			break;
	}
	if (!func_268(iParam1, iParam2, iParam3))
	{
		*uParam0.f_5 = 0;
		*uParam0.f_7 = 0;
	}
	if (*uParam0.f_7)
	{
		func_256();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_256()
{
	GAMEPLAY::SET_BIT(&Global_2284, 4);
}

bool func_257(int iParam0, int iParam1, int iParam2)
{
	if (!func_268(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (is_disabled_control_just_released(0, 80))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_258(int iParam0, int iParam1, int iParam2)
{
	if (!func_268(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (is_follow_vehicle_cam_active())
		{
			if (is_disabled_control_just_released(0, 80))
			{
				set_cinematic_button_active(false);
				return true;
			}
		}
	}
	return false;
}

bool func_259(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_2 > 0)
	{
		iVar0 = *uParam0.f_10 / 2;
		if (*uParam0.f_2 + iVar0 > GAMEPLAY::GET_GAME_TIMER())
		{
			return true;
		}
	}
	return false;
}

bool func_260(int iParam0, int iParam1, int iParam2)
{
	if (!func_268(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (is_disabled_control_pressed(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_261(int iParam0, int iParam1, int iParam2)
{
	if (!func_268(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (is_follow_vehicle_cam_active())
		{
			if (is_disabled_control_pressed(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				set_cinematic_button_active(false);
				return true;
			}
		}
	}
	return false;
}

void func_262(int iParam0)
{
	if (iParam0)
	{
		func_266();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_265(0))
		{
			func_263(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_263(int iParam0)
{
	if (Global_14571)
	{
		func_264(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
	}
	if (!func_200())
	{
		Global_14413.f_1 = 3;
	}
}

void func_264(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_265(0))
		{
			Global_14571 = 1;
			if (iParam1)
			{
				get_mobile_phone_position(&Global_14350);
			}
			Global_14341 = {Global_14359[Global_14358 /*3*/]};
			set_mobile_phone_position(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = {Global_14366[Global_14358 /*3*/]};
		if (iParam1)
		{
			set_mobile_phone_position(Global_14350);
		}
		else
		{
			set_mobile_phone_position(Global_14341);
		}
	}
}

bool func_265(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 14))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	return false;
}

void func_266()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_267(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

bool func_268(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		if (!is_player_control_on(player_id()))
		{
			return false;
		}
	}
	if (iParam2)
	{
		return true;
	}
	if (is_player_switch_in_progress())
	{
		return false;
	}
	if (func_265(0))
	{
		return false;
	}
	if (func_269())
	{
		return false;
	}
	if (_network_is_text_chat_active())
	{
		return false;
	}
	if (Global_68058)
	{
		return false;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("appinternet")) > 0)
	{
		return false;
	}
	if (Global_52930)
	{
		return false;
	}
	if (iParam1)
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (is_ped_in_any_boat(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_sub(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
				{
					return false;
				}
			}
			else if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
				{
					return false;
				}
			}
			else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
			{
				return false;
			}
			if (is_gameplay_cam_looking_behind())
			{
				return false;
			}
		}
	}
	return true;
}

int func_269()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

void func_270(int iParam0, int iParam1, float fParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (is_playback_going_on_for_vehicle(iParam1))
		{
			set_playback_speed(iParam1, fParam2);
			vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
			vVar3 = {get_entity_rotation(iParam1, 2)};
			set_cam_coord(iParam0, vVar0);
			set_cam_rot(iParam0, vVar3, 2);
		}
	}
}

void func_271(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	Vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		set_entity_visible(iParam1, false, 0);
		set_entity_collision(iParam1, false, 0);
		set_entity_invincible(iParam1, true);
		ENTITY::SET_ENTITY_PROOFS(iParam1, true, true, true, true, true, false, 0, false);
		start_playback_recorded_vehicle(iParam1, iParam3, sParam2, 1);
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
		set_cam_coord(iParam0, vVar0);
		set_cam_rot(iParam0, get_entity_rotation(iParam1, 2), 2);
	}
}

void func_272()
{
	if (iLocal_3218 != -1)
	{
		if (iLocal_3389 == 1)
		{
			if (iLocal_3381 == 0)
			{
				release_sound_id(iLocal_3218);
				iLocal_3391 = 0;
				iLocal_3381 = 1;
			}
		}
	}
	if (iLocal_3213 != -1)
	{
		if (iLocal_3385 == 1)
		{
			if (iLocal_3383 == 0)
			{
				release_sound_id(iLocal_3213);
				iLocal_3392 = 0;
				iLocal_3383 = 1;
			}
		}
	}
	if (iLocal_3214 != -1)
	{
		if (iLocal_3390 == 1)
		{
			if (iLocal_3372 == 0)
			{
				release_sound_id(iLocal_3214);
				iLocal_3393 = 0;
				iLocal_3372 = 1;
			}
		}
	}
	if (iLocal_3215 != -1)
	{
		if (iLocal_3386 == 1)
		{
			if (iLocal_3382 == 0)
			{
				release_sound_id(iLocal_3215);
				iLocal_3394 = 0;
				iLocal_3382 = 1;
			}
		}
	}
	if (iLocal_3216 != -1)
	{
		if (iLocal_3387 == 1)
		{
			if (iLocal_3384 == 0)
			{
				release_sound_id(iLocal_3216);
				iLocal_3395 = 0;
				iLocal_3384 = 1;
			}
		}
	}
}

void func_273()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[19]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[19], 0))
		{
			if (!is_vehicle_siren_on(iLocal_3121[19]))
			{
				set_vehicle_siren(iLocal_3121[19], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[7]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[7], 0))
		{
			if (!is_vehicle_siren_on(iLocal_3121[7]))
			{
				set_vehicle_siren(iLocal_3121[7], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[8]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[8], 0))
		{
			if (!is_vehicle_siren_on(iLocal_3121[8]))
			{
				set_vehicle_siren(iLocal_3121[8], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[9]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[9], 0))
		{
			if (!is_vehicle_siren_on(iLocal_3121[9]))
			{
				set_vehicle_siren(iLocal_3121[9], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[10]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[10], 0))
		{
			if (!is_vehicle_siren_on(iLocal_3121[10]))
			{
				set_vehicle_siren(iLocal_3121[10], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[11]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[11], 0))
		{
			if (!is_vehicle_siren_on(iLocal_3121[11]))
			{
				set_vehicle_siren(iLocal_3121[11], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[13]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[13], 0))
		{
			if (!is_vehicle_siren_on(iLocal_3121[13]))
			{
				set_vehicle_siren(iLocal_3121[13], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[14]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[14], 0))
		{
			if (!is_vehicle_siren_on(iLocal_3121[14]))
			{
				set_vehicle_siren(iLocal_3121[14], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[15]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[15], 0))
		{
			if (!is_vehicle_siren_on(iLocal_3121[15]))
			{
				set_vehicle_siren(iLocal_3121[15], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[16]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[16], 0))
		{
			if (!is_vehicle_siren_on(iLocal_3121[16]))
			{
				set_vehicle_siren(iLocal_3121[16], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[17]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[17], 0))
		{
			if (!is_vehicle_siren_on(iLocal_3121[17]))
			{
				set_vehicle_siren(iLocal_3121[17], true);
			}
		}
	}
}

void func_274()
{
	if (func_305())
	{
		fLocal_3324 = 0.5f;
	}
	else if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (_0x53AF99BAA671CA47(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) > 40f)
		{
			fLocal_3324 = 0.85f;
		}
		else
		{
			fLocal_3324 = 0.9f;
		}
	}
	else
	{
		fLocal_3324 = 0.9f;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3258, 0))
	{
		if (is_vehicle_driveable(iLocal_3258, 0))
		{
			if (is_playback_going_on_for_vehicle(iLocal_3258))
			{
				if (iLocal_3359 == 0)
				{
					if (get_time_position_in_recording(iLocal_3258) < 10000f)
					{
						if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3258, 1) < 100f || is_entity_on_screen(iLocal_3258))
						{
							func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_3324, 0);
							set_playback_speed(iLocal_3258, fLocal_3323);
							func_275(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_3324, 0);
							set_playback_speed(iLocal_3258, fLocal_3323);
							func_275(iLocal_3258, fLocal_3323);
						}
					}
				}
				else if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3258, 1) > 175f)
				{
					fLocal_3323 = 0.6f;
					set_playback_speed(iLocal_3258, fLocal_3323);
					func_275(iLocal_3258, fLocal_3323);
				}
				else if (get_time_position_in_recording(iLocal_3258) < 10000f)
				{
					func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_3324, 0);
					set_playback_speed(iLocal_3258, fLocal_3323);
					func_275(iLocal_3258, fLocal_3323);
				}
				if (get_time_position_in_recording(iLocal_3258) > 10000f && get_time_position_in_recording(iLocal_3258) < 23000f)
				{
					if (is_vehicle_driveable(iLocal_3121[8], 0))
					{
						func_301(iLocal_3121[8], PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_3324, 1);
						set_playback_speed(iLocal_3258, fLocal_3323);
						func_275(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_3324, 1);
						set_playback_speed(iLocal_3258, fLocal_3323);
						func_275(iLocal_3258, fLocal_3323);
					}
				}
				if (get_time_position_in_recording(iLocal_3258) > 23000f && get_time_position_in_recording(iLocal_3258) < 32000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[7]))
					{
						if (is_vehicle_driveable(iLocal_3121[7], 0))
						{
							func_301(iLocal_3121[7], PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_3324, 0);
							set_playback_speed(iLocal_3258, fLocal_3323);
							func_275(iLocal_3258, fLocal_3323);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[8]))
						{
							if (is_vehicle_driveable(iLocal_3121[8], 0))
							{
								func_301(iLocal_3121[8], PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3324, 0);
								set_playback_speed(iLocal_3258, fLocal_3323);
								func_275(iLocal_3258, fLocal_3323);
							}
							else
							{
								func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
								set_playback_speed(iLocal_3258, fLocal_3323);
								func_275(iLocal_3258, fLocal_3323);
							}
						}
						else
						{
							func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
							set_playback_speed(iLocal_3258, fLocal_3323);
							func_275(iLocal_3258, fLocal_3323);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[8]))
					{
						if (is_vehicle_driveable(iLocal_3121[8], 0))
						{
							func_301(iLocal_3121[8], PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3324, 0);
							set_playback_speed(iLocal_3258, fLocal_3323);
							func_275(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
							set_playback_speed(iLocal_3258, fLocal_3323);
							func_275(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
						set_playback_speed(iLocal_3258, fLocal_3323);
						func_275(iLocal_3258, fLocal_3323);
					}
				}
				if (get_time_position_in_recording(iLocal_3258) > 32000f && get_time_position_in_recording(iLocal_3258) < 39000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[7]))
					{
						if (is_vehicle_driveable(iLocal_3121[7], 0))
						{
							func_301(iLocal_3121[7], PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_3324, 1);
							set_playback_speed(iLocal_3258, fLocal_3323);
							func_275(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3324, 1);
							set_playback_speed(iLocal_3258, fLocal_3323);
							func_275(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3324, 1);
						set_playback_speed(iLocal_3258, fLocal_3323);
						func_275(iLocal_3258, fLocal_3323);
					}
				}
				if (get_time_position_in_recording(iLocal_3258) > 39000f && get_time_position_in_recording(iLocal_3258) < 56000f)
				{
					if (is_vehicle_driveable(iLocal_3121[8], 0))
					{
						func_301(iLocal_3121[8], PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
						set_playback_speed(iLocal_3258, fLocal_3323);
						func_275(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_3324, 0);
						set_playback_speed(iLocal_3258, fLocal_3323);
						func_275(iLocal_3258, fLocal_3323);
					}
				}
				if (get_time_position_in_recording(iLocal_3258) > 56000f && get_time_position_in_recording(iLocal_3258) < 65000f)
				{
					if (is_vehicle_driveable(iLocal_3121[11], 0))
					{
						func_301(iLocal_3121[11], PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_3324, 0);
						set_playback_speed(iLocal_3258, fLocal_3323);
						func_275(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_3324, 0);
						set_playback_speed(iLocal_3258, fLocal_3323);
						func_275(iLocal_3258, fLocal_3323);
					}
				}
				if (get_time_position_in_recording(iLocal_3258) > 65000f && get_time_position_in_recording(iLocal_3258) < 90000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[13]))
					{
						if (is_vehicle_driveable(iLocal_3121[13], 0))
						{
							func_301(iLocal_3121[13], PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_3324, 0);
							set_playback_speed(iLocal_3258, fLocal_3323);
							func_275(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3324, 0);
							set_playback_speed(iLocal_3258, fLocal_3323);
							func_275(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3324, 0);
						set_playback_speed(iLocal_3258, fLocal_3323);
						func_275(iLocal_3258, fLocal_3323);
					}
				}
				if (get_time_position_in_recording(iLocal_3258) > 90000f && get_time_position_in_recording(iLocal_3258) < 110000f)
				{
					func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_3324, 1);
					set_playback_speed(iLocal_3258, fLocal_3323);
					func_275(iLocal_3258, fLocal_3323);
				}
				if (get_time_position_in_recording(iLocal_3258) > 110000f)
				{
					func_301(iLocal_3258, PLAYER::PLAYER_PED_ID(), &fLocal_3323, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_3324, 0);
					set_playback_speed(iLocal_3258, fLocal_3323);
					func_275(iLocal_3258, fLocal_3323);
				}
			}
		}
	}
}

void func_275(int iParam0, float fParam1)
{
	Vector3 fVar0;
	Vector3 vVar1;
	int iVar4;
	
	fVar0 = get_frame_time();
	fVar0 *= 1000f;
	iLocal_106 = false;
	if (!iLocal_88)
	{
		if (iLocal_87)
		{
			func_300();
			if (is_player_playing(player_id()))
			{
				vVar1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
				clear_area(vVar1, 1000f, 1, 0, 0, false);
			}
			iLocal_88 = true;
		}
	}
	else if (!iLocal_87)
	{
		func_182();
		iLocal_88 = false;
	}
	if (iLocal_87)
	{
		fParam1 = 1f;
		set_vehicle_density_multiplier_this_frame(0f);
	}
	if (!iLocal_81)
	{
		if (iLocal_76)
		{
			fLocal_1278 = 0f;
		}
		else
		{
			fLocal_1278 = 1f;
		}
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (is_playback_going_on_for_vehicle(iParam0))
			{
				if (is_player_playing(player_id()))
				{
					if (func_299(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_86 = 1;
					}
					else
					{
						iLocal_86 = 0;
					}
				}
				fLocal_1275 = get_time_position_in_recording(iParam0);
				set_playback_speed(iParam0, fParam1 * fLocal_1276 * fLocal_1278);
				if (iLocal_85)
				{
					func_298(iParam0, fLocal_1275);
					func_297(iParam0, fLocal_1285);
					if (fLocal_1280 > 1000f)
					{
						if (iLocal_1962 == 0)
						{
							func_296(iParam0, fLocal_1285);
						}
						fVar0 = fLocal_1275 + 4000f + to_float(iLocal_1962) * 2000f;
						func_295(iParam0, fVar0, fLocal_1279);
						iLocal_1962++;
						if (iLocal_1962 > 2)
						{
							fLocal_1280 = 0f;
						}
					}
					else
					{
						iLocal_1962 = false;
						fLocal_1280 += get_frame_time() * 1000f;
					}
				}
			}
		}
		iVar4 = 0;
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (is_playback_going_on_for_vehicle(iParam0))
			{
				iVar4 = 1;
			}
		}
		if (fLocal_1275 == 0f || is_screen_faded_out())
		{
			iVar4 = 1;
		}
		if (iVar4 && !iLocal_93)
		{
			if (!iLocal_75)
			{
				func_292(iParam0, fParam1 * fLocal_1276 * fLocal_1278, 0);
				if (!iLocal_96)
				{
				}
				iLocal_96 = 0;
			}
			if (iLocal_78)
			{
				func_291(iParam0);
			}
			if (!iLocal_75)
			{
				func_278(iParam0, fParam1 * fLocal_1276 * fLocal_1278, 0);
			}
		}
		if (iLocal_83)
		{
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_3164 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
					vLocal_2641 = {ENTITY::GET_ENTITY_COORDS(iLocal_3164, 1)};
					get_entity_quaternion(iLocal_3164, &fLocal_989, &fLocal_990, &fLocal_991, &fLocal_992);
				}
			}
			iLocal_83 = 0;
		}
		if (iLocal_82)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3164))
			{
				func_174(iLocal_3165);
				iLocal_3165 = iLocal_3164;
			}
			if (is_vehicle_driveable(iLocal_3165, 0))
			{
				set_entity_coords(iLocal_3165, vLocal_2641, 1, false, 0, 1);
				set_entity_quaternion(iLocal_3165, fLocal_989, fLocal_990, fLocal_991, fLocal_992);
			}
			fLocal_1274 = fLocal_1277;
			iLocal_75 = 1;
			iLocal_82 = 0;
		}
		if (iLocal_75)
		{
			while (!func_276(&iParam0, fLocal_1274))
			{
				wait(false);
			}
			iLocal_76 = 1;
		}
		if (iLocal_89)
		{
			iLocal_89 = 0;
		}
	}
}

bool func_276(int iParam0, Vector3 fParam1)
{
	if (!iLocal_90)
	{
		iLocal_75 = 1;
		func_169();
		if (is_vehicle_driveable(*iParam0, 0))
		{
			if (is_playback_going_on_for_vehicle(*iParam0))
			{
				stop_playback_recorded_vehicle(*iParam0);
				set_vehicle_fixed(*iParam0);
			}
			if (!iLocal_1949 == -1)
			{
				while (!func_277(iParam0, iLocal_1949, fParam1, 1, 0, 0, 0, 0))
				{
					wait(false);
				}
				if (!iLocal_80)
				{
					iLocal_76 = 1;
					fLocal_1278 = 0f;
					iLocal_1950 = 0;
					iLocal_1952 = 0;
					iLocal_1951 = 0;
					iLocal_1946 = 0;
					iLocal_1947 = 0;
					iLocal_1948 = 0;
					iLocal_1953 = 0;
					iLocal_1954 = 0;
					iLocal_1955 = 0;
				}
			}
		}
		iLocal_90 = 1;
	}
	else
	{
		if (is_vehicle_driveable(*iParam0, 0))
		{
			if (is_playback_going_on_for_vehicle(*iParam0))
			{
				set_playback_speed(*iParam0, 1f * fLocal_1276 * fLocal_1278);
				func_277(iParam0, iLocal_1949, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1275 = fParam1;
		iLocal_1956 = 0;
		iLocal_1959 = 0;
		fLocal_1290 = 0f;
		fLocal_1289 = 0f;
		func_278(*iParam0, 1f * fLocal_1276 * fLocal_1278, 1);
		func_292(*iParam0, 1f * fLocal_1276 * fLocal_1278, 1);
		func_291(*iParam0);
		if ((iLocal_1953 == 0 && iLocal_1954 == 0) && iLocal_1955 == 0)
		{
			iLocal_76 = 0;
			iLocal_75 = 0;
			iLocal_90 = 0;
			return true;
		}
	}
	return false;
}

bool func_277(auto uParam0, int iParam1, Vector3 fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		request_vehicle_recording(iParam1, &cLocal_2668);
		if (has_vehicle_recording_been_loaded(iParam1, &cLocal_2668))
		{
			if (is_vehicle_driveable(*uParam0, 0))
			{
				if (!is_playback_going_on_for_vehicle(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (iParam4)
					{
						start_playback_recorded_vehicle_using_ai(*uParam0, iParam1, &cLocal_2668, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1957 && iParam1 != iLocal_1958)
						{
							if (iParam7)
							{
								start_playback_recorded_vehicle_with_flags(*uParam0, iParam1, &cLocal_2668, 2 | 4, 0, 786603);
							}
							else if (iParam6)
							{
								start_playback_recorded_vehicle_with_flags(*uParam0, iParam1, &cLocal_2668, 1 | 4, 0, 786603);
							}
							else
							{
								start_playback_recorded_vehicle(*uParam0, iParam1, &cLocal_2668, 1);
							}
						}
						else
						{
							start_playback_recorded_vehicle(*uParam0, iParam1, &cLocal_2668, 1);
						}
						skip_time_in_playback_recorded_vehicle(*uParam0, fParam2);
						if (iParam5)
						{
							_0x1F2E4E06DEA8992B(*uParam0, 1);
						}
						return true;
					}
				}
				else if (get_current_playback_for_vehicle(*uParam0) == get_vehicle_recording_id(iParam1, &cLocal_2668))
				{
					fVar0 = get_time_position_in_recording(*uParam0);
					skip_time_in_playback_recorded_vehicle(*uParam0, fParam2 - fVar0);
					if (!iParam3)
					{
						stop_playback_recorded_vehicle(*uParam0);
						request_vehicle_recording(iParam1, &cLocal_2668);
					}
					if (iParam5)
					{
						_0x1F2E4E06DEA8992B(*uParam0, 1);
					}
					return true;
				}
				else
				{
					stop_playback_recorded_vehicle(*uParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (iParam4)
					{
						start_playback_recorded_vehicle_using_ai(*uParam0, iParam1, &cLocal_2668, 10f, 786603);
					}
					else if (iParam1 != iLocal_1957 && iParam1 != iLocal_1958)
					{
						if (iParam7)
						{
							start_playback_recorded_vehicle_with_flags(*uParam0, iParam1, &cLocal_2668, 2 | 4, 0, 786603);
						}
						else if (iParam6)
						{
							start_playback_recorded_vehicle_with_flags(*uParam0, iParam1, &cLocal_2668, 1 | 4, 0, 786603);
						}
						else
						{
							start_playback_recorded_vehicle(*uParam0, iParam1, &cLocal_2668, 1);
						}
					}
					else
					{
						start_playback_recorded_vehicle(*uParam0, iParam1, &cLocal_2668, 1);
					}
					skip_time_in_playback_recorded_vehicle(*uParam0, fParam2);
					if (iParam5)
					{
						_0x1F2E4E06DEA8992B(*uParam0, 1);
					}
					return true;
				}
			}
		}
	}
	return false;
}

void func_278(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 fVar12;
	Vector3 fVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	auto uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar15 = is_player_playing(player_id());
	iVar16 = can_create_random_driver();
	uVar17 = can_create_random_bike_rider();
	iVar18 = false;
	if (iVar15)
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar2 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		}
		vVar9 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
	}
	if (is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = iLocal_1952;
		while (iVar0 < 35)
		{
			if (iLocal_1858[iVar0] != 99)
			{
				if (iLocal_1858[iVar0] == 0)
				{
					if (iLocal_1822[iVar0] > 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_1275 > fLocal_1137[iVar0] - 7000f * fParam1)
							{
								if (func_290(iLocal_2877[iVar0]))
								{
									GAMEPLAY::SET_BIT(&(iLocal_1894[iVar0]), false);
								}
								else if (is_this_model_a_bike(iLocal_2877[iVar0]))
								{
									GAMEPLAY::SET_BIT(&(iLocal_1894[iVar0]), 2);
								}
								GAMEPLAY::CLEAR_BIT(&(iLocal_1894[iVar0]), true);
								iLocal_1858[iVar0]++;
								iLocal_1954++;
							}
						}
						else
						{
							fVar12 = fLocal_1275 - fLocal_1137[iVar0];
							fVar12 *= fLocal_1173[iVar0];
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_289(iLocal_1822[iVar0]))
								{
									if (func_290(iLocal_2877[iVar0]))
									{
										GAMEPLAY::SET_BIT(&(iLocal_1894[iVar0]), false);
									}
									else if (is_this_model_a_bike(iLocal_2877[iVar0]))
									{
										GAMEPLAY::SET_BIT(&(iLocal_1894[iVar0]), 2);
									}
									GAMEPLAY::CLEAR_BIT(&(iLocal_1894[iVar0]), true);
									iLocal_1858[iVar0]++;
									iLocal_1954++;
								}
								else
								{
									iLocal_1858[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1858[iVar0] = 99;
					}
				}
				else if (iLocal_1858[iVar0] == 1)
				{
					iVar14 = false;
					request_vehicle_recording(iLocal_1822[iVar0], &cLocal_2668);
					if (GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], false))
					{
						STREAMING::REQUEST_MODEL(func_178());
						iVar14 = STREAMING::HAS_MODEL_LOADED(func_178());
					}
					else if (!iLocal_102 && ((!GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], 2) && iVar16) || (GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], 2) && uVar17)))
					{
						iVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_181());
						iVar14 = STREAMING::HAS_MODEL_LOADED(func_181());
					}
					if (iVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3121[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2877[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2877[iVar0]) && has_vehicle_recording_been_loaded(iLocal_1822[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 >= fLocal_1137[iVar0] - fLocal_1288 * fParam1)
								{
									if ((iLocal_89 || iParam2) || (!iLocal_106 && !func_288(vLocal_2535[iVar0 /*3*/], vVar9, 5f, fLocal_1286)))
									{
										if (iLocal_85)
										{
											func_287(vLocal_2535[iVar0 /*3*/], vVar9, fLocal_1279);
										}
										iLocal_3121[iVar0] = create_vehicle(iLocal_2877[iVar0], vLocal_2535[iVar0 /*3*/], 0, 0, false);
										if (iLocal_2877[iVar0] == joaat("polmav"))
										{
											set_vehicle_livery(iLocal_3121[iVar0], false);
										}
										if (uLocal_98 && !GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], false))
										{
											func_286(iLocal_3121[iVar0]);
										}
										if (GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], 3))
										{
											_0x3910051CCECDB00C(iLocal_3121[iVar0], true);
										}
										set_entity_coords_no_offset(iLocal_3121[iVar0], vLocal_2535[iVar0 /*3*/], 0, 0, 1);
										set_entity_quaternion(iLocal_3121[iVar0], fLocal_993[iVar0], fLocal_1029[iVar0], fLocal_1065[iVar0], fLocal_1101[iVar0]);
										if (is_this_model_a_car(iLocal_2877[iVar0]) || is_this_model_a_bike(iLocal_2877[iVar0]))
										{
											set_vehicle_on_ground_properly(iLocal_3121[iVar0]);
										}
										if (!GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], false))
										{
											set_vehicle_engine_on(iLocal_3121[iVar0], true, 1, 0);
											if (TIME::GET_CLOCK_HOURS() > 19 || TIME::GET_CLOCK_HOURS() < 7)
											{
												set_vehicle_lights(iLocal_3121[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_3121[iVar0], true);
										set_model_as_no_longer_needed(iLocal_2877[iVar0]);
										iLocal_1954--;
										iLocal_1858[iVar0]++;
										iLocal_106 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[iVar0], 0) && is_vehicle_driveable(iLocal_3121[iVar0], 0))
						{
							set_entity_coords_no_offset(iLocal_3121[iVar0], vLocal_2535[iVar0 /*3*/], 0, 0, 1);
							set_entity_quaternion(iLocal_3121[iVar0], fLocal_993[iVar0], fLocal_1029[iVar0], fLocal_1065[iVar0], fLocal_1101[iVar0]);
							if (is_this_model_a_car(iLocal_2877[iVar0]) || is_this_model_a_bike(iLocal_2877[iVar0]))
							{
								set_vehicle_on_ground_properly(iLocal_3121[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3121[iVar0], true);
							set_model_as_no_longer_needed(iLocal_2877[iVar0]);
							iLocal_1954--;
							iLocal_1858[iVar0]++;
						}
					}
				}
				else if (iLocal_1858[iVar0] == 2)
				{
					request_vehicle_recording(iLocal_1822[iVar0], &cLocal_2668);
					if (!GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], true))
					{
						iVar14 = false;
						if (GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], false))
						{
							STREAMING::REQUEST_MODEL(func_178());
							iVar14 = STREAMING::HAS_MODEL_LOADED(func_178());
							iVar19 = 2;
						}
						else if (!iLocal_102 && ((!GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], 2) && iVar16) || (GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], 2) && uVar17)))
						{
							iVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_181());
							iVar14 = STREAMING::HAS_MODEL_LOADED(func_181());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_3121[iVar0], 0))
						{
							if (!iLocal_106 && is_vehicle_seat_free(iLocal_3121[iVar0], -1))
							{
								if (iVar14)
								{
									if ((vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_3121[iVar0], 1), vVar9) < 10000f || iParam2) || iLocal_89)
									{
										func_284(&(iLocal_3121[iVar0]), iVar19, 1);
										GAMEPLAY::SET_BIT(&(iLocal_1894[iVar0]), true);
									}
								}
							}
						}
					}
					if (is_vehicle_driveable(iLocal_3121[iVar0], 0))
					{
						if (fLocal_1275 >= fLocal_1137[iVar0])
						{
							if (14 > iLocal_1947)
							{
								fVar12 = fLocal_1275 - fLocal_1137[iVar0];
								fVar12 *= fLocal_1173[iVar0];
								if (has_vehicle_recording_been_loaded(iLocal_1822[iVar0], &cLocal_2668))
								{
									if (fVar12 < get_total_duration_of_vehicle_recording(iLocal_1822[iVar0], &cLocal_2668))
									{
										vVar3 = {ENTITY::GET_ENTITY_COORDS(iLocal_3121[iVar0], 1)};
										vVar6 = {get_position_of_vehicle_recording_at_time(iLocal_1822[iVar0], fVar12, &cLocal_2668)};
										if (((!func_288(vVar3, vVar9, 5f, fLocal_1286) && func_288(vVar6, vVar9, 5f, fLocal_1286)) && !iLocal_89) && !iParam2)
										{
											if (!GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], true))
											{
												func_284(&(iLocal_3121[iVar0]), iVar19, 1);
											}
											iLocal_1947++;
											iLocal_1858[iVar0]++;
										}
										else if (((!iLocal_106 || GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], true)) || iLocal_89) || iParam2)
										{
											if (func_277(&(iLocal_3121[iVar0]), iLocal_1822[iVar0], fVar12, 1, 0, 0, iLocal_104, iLocal_103))
											{
												set_playback_speed(iLocal_3121[iVar0], fParam1 * fLocal_1173[iVar0]);
												if (is_vehicle_driveable(iLocal_3121[iVar0], 0))
												{
													if (GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], false))
													{
														set_vehicle_engine_on(iLocal_3121[iVar0], true, 1, 0);
														set_vehicle_siren(iLocal_3121[iVar0], true);
														set_vehicle_lights(iLocal_3121[iVar0], 2);
														if (!is_this_model_a_bike(iLocal_2877[iVar0]))
														{
															set_siren_with_no_driver(iLocal_3121[iVar0], 1);
														}
													}
												}
												if (!GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], true))
												{
													func_284(&(iLocal_3121[iVar0]), iVar19, 1);
												}
												iLocal_1947++;
												iLocal_1858[iVar0]++;
											}
										}
									}
									else
									{
										if (!GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], true))
										{
											func_284(&(iLocal_3121[iVar0]), iVar19, 1);
										}
										iLocal_1947++;
										iLocal_1858[iVar0]++;
									}
								}
							}
							else
							{
								if (!GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], true))
								{
									func_284(&(iLocal_3121[iVar0]), iVar19, 1);
								}
								iLocal_1947++;
								iLocal_1858[iVar0]++;
							}
						}
					}
					else
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_1894[iVar0], true))
						{
							func_284(&(iLocal_3121[iVar0]), iVar19, 1);
						}
						iLocal_1947++;
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 3)
				{
					if (is_vehicle_driveable(iLocal_3121[iVar0], 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3121[iVar0]))
						{
							iVar1 = get_ped_in_vehicle_seat(iLocal_3121[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (iVar15)
								{
									if (((!iLocal_79 && !iLocal_76) && !iLocal_95) && (((!iLocal_104 && !iLocal_103) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3121[iVar0])) || func_283(iLocal_3121[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											iVar14 = false;
											if (iLocal_97)
											{
												iVar14 = true;
											}
											else
											{
												fVar13 = get_entity_speed(iVar2);
												if (fVar13 < 1f)
												{
													iVar14 = true;
												}
												else if (absf(fVar13 - get_entity_speed(iLocal_3121[iVar0])) > 15f)
												{
													iVar14 = true;
												}
												else if (!func_282(iLocal_3121[iVar0], iVar2, 45f))
												{
													iVar14 = true;
												}
												else if (func_280(iVar2, iLocal_3121[iVar0], 0))
												{
													iVar14 = true;
												}
											}
											if (iVar14)
											{
												func_279(iLocal_3121[iVar0]);
												iLocal_1858[iVar0]++;
											}
										}
									}
									else
									{
										set_playback_speed(iLocal_3121[iVar0], fParam1 * fLocal_1173[iVar0]);
									}
								}
							}
							else
							{
								stop_playback_recorded_vehicle(iLocal_3121[iVar0]);
							}
						}
						else
						{
							iLocal_1858[iVar0]++;
						}
					}
					else
					{
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 4)
				{
					if (is_vehicle_driveable(iLocal_3121[iVar0], 0))
					{
						if (!is_playback_going_on_for_vehicle(iLocal_3121[iVar0]))
						{
							iLocal_1858[iVar0]++;
						}
						else
						{
							iVar1 = get_ped_in_vehicle_seat(iLocal_3121[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								set_playback_speed(iLocal_3121[iVar0], fParam1 * fLocal_1173[iVar0]);
							}
							else
							{
								stop_playback_recorded_vehicle(iLocal_3121[iVar0]);
							}
							if (has_vehicle_recording_been_loaded(iLocal_1822[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 > fLocal_1137[iVar0] + get_total_duration_of_vehicle_recording(iLocal_1822[iVar0], &cLocal_2668))
								{
									stop_playback_recorded_vehicle(iLocal_3121[iVar0]);
								}
							}
							else
							{
								stop_playback_recorded_vehicle(iLocal_3121[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 5)
				{
					if (!iLocal_3121[iVar0] == iLocal_3166)
					{
						if (is_vehicle_driveable(iLocal_3121[iVar0], 0))
						{
							iVar1 = get_ped_in_vehicle_seat(iLocal_3121[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = AI::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = get_entity_speed(iLocal_3121[iVar0]);
									if (fVar13 < 8f)
									{
										fVar13 = 8f;
									}
									if (fVar13 > 62.9f)
									{
										fVar13 = 62.9f;
									}
									set_drive_task_cruise_speed(iVar1, fVar13);
								}
							}
						}
						if (!iLocal_87 && !iLocal_100)
						{
							if (iLocal_1822[iVar0] > 0)
							{
								remove_vehicle_recording(iLocal_1822[iVar0], &cLocal_2668);
							}
						}
						if (!iLocal_77)
						{
							if (!iLocal_105)
							{
								func_174(iLocal_3121[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[iVar0]))
						{
							delete_vehicle(&(iLocal_3121[iVar0]));
						}
					}
					iLocal_1947--;
					iLocal_1858[iVar0] = 99;
				}
				if (!iVar18)
				{
					iLocal_1952 = iVar0;
					iVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_173();
	}
}

void func_279(int iParam0)
{
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_175(iParam0);
		set_playback_to_use_ai(iParam0, 786603);
	}
}

bool func_280(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	Vector3 vVar15;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	}
	if (is_vehicle_driveable(iParam1, 0))
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
		if (iParam2)
		{
			vVar15 = {ENTITY::GET_ENTITY_VELOCITY(iParam1)};
			vVar12 = {vVar15 / FtoV(vmag(vVar15))};
		}
		else
		{
			vVar6 = {get_offset_from_entity_in_world_coords(iParam1, 0f, 5f, 0f)};
			vVar12 = {vVar6 - vVar3};
		}
	}
	vVar9 = {vVar3 - vVar0};
	vVar9.z = 0f;
	vVar12.z = 0f;
	if (func_281(vVar9, vVar12) < 0f)
	{
		return true;
	}
	return false;
}

float func_281(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

bool func_282(int iParam0, int iParam1, float fParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		vVar0 = {get_entity_speed_vector(iParam0, 0)};
	}
	else
	{
		return false;
	}
	if (is_vehicle_driveable(iParam1, 0))
	{
		vVar3 = {get_entity_speed_vector(iParam1, 0)};
	}
	else
	{
		return false;
	}
	vVar0.z = 0f;
	vVar3.z = 0f;
	fVar6 = func_281(vVar0, vVar3);
	if (fVar6 < 0f)
	{
		return false;
	}
	fVar6 = get_angle_between_2d_vectors(vVar0.x, vVar0.y, vVar3.x, vVar3.y);
	if (!fVar6 < fParam2)
	{
		return false;
	}
	return true;
}

bool func_283(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_101)
	{
		iVar1 = get_players_last_vehicle();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (is_vehicle_attached_to_trailer(iVar1))
				{
					if (get_vehicle_trailer_vehicle(iVar1, &iVar0))
					{
						if (is_vehicle_driveable(iVar0, 0))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_284(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
	{
		if (is_vehicle_seat_free(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_inside_vehicle(*uParam0, 6, func_178(), -1, 0, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_2684);
				set_model_as_no_longer_needed(func_178());
			}
			else if (iParam1 == 1)
			{
				iVar0 = create_random_ped_as_driver(*uParam0, 1);
				if (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(*uParam0)))
				{
					give_ped_helmet(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = PED::CREATE_PED_inside_vehicle(*uParam0, 4, func_181(), -1, 0, false);
				if (iLocal_107)
				{
					set_model_as_no_longer_needed(func_181());
				}
			}
			if (iParam2)
			{
				set_entity_only_damaged_by_player(iVar0, true);
				set_ped_suffers_critical_hits(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (iLocal_108)
			{
				set_ped_flee_attributes(iVar0, 8192, true);
				set_ped_flee_attributes(iVar0, 65536, true);
				set_ped_flee_attributes(iVar0, 2, false);
				_0x25367DE49D64CF16(*uParam0, 1);
			}
			set_blocking_of_non_temporary_events(iVar0, true);
			func_285(iVar0);
			iLocal_106 = true;
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_285(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		set_ped_as_no_longer_needed(&iParam0);
	}
}

void func_286(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(false, 12);
	if (iLocal_2914 >= -1 && iLocal_2915 >= -1)
	{
		while (iVar0 == iLocal_2914 || iVar0 == iLocal_2915)
		{
			iVar0++;
		}
	}
	else if (iLocal_2914 >= -1)
	{
		if (iVar0 == iLocal_2914)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			set_vehicle_colours(iParam0, false, false);
			break;
		
		case 1:
			set_vehicle_colours(iParam0, 2, 2);
			break;
		
		case 2:
			set_vehicle_colours(iParam0, 4, 4);
			break;
		
		case 3:
			set_vehicle_colours(iParam0, 27, 27);
			break;
		
		case 4:
			set_vehicle_colours(iParam0, 7, 7);
			break;
		
		case 5:
			set_vehicle_colours(iParam0, 73, 73);
			break;
		
		case 6:
			set_vehicle_colours(iParam0, 68, 68);
			break;
		
		case 7:
			set_vehicle_colours(iParam0, 62, 62);
			break;
		
		case 8:
			set_vehicle_colours(iParam0, 132, 132);
			break;
		
		case 9:
			set_vehicle_colours(iParam0, 117, false);
			break;
		
		case 10:
			set_vehicle_colours(iParam0, 52, 52);
			break;
		
		case 11:
			set_vehicle_colours(iParam0, 88, 88);
			break;
		
		case 12:
			set_vehicle_colours(iParam0, true, true);
			break;
		
		case 13:
			set_vehicle_colours(iParam0, 36, 36);
			break;
		
		case 14:
			set_vehicle_colours(iParam0, 95, 95);
			break;
		
		default:
			set_vehicle_colours(iParam0, 73, 73);
			break;
	}
}

void func_287(Vector3 vParam0, Vector3 vParam1, Vector3 fParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = true;
	if (!iLocal_88)
	{
		if (!func_288(vParam0, vParam3, fParam6, 200f))
		{
			if (is_player_playing(player_id()))
			{
				iVar1 = get_players_last_vehicle();
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iVar1, vParam0, fParam6, fParam6, fParam6, false, true, 0))
					{
						iVar0 = false;
					}
				}
			}
			if (iVar0)
			{
				clear_area_of_vehicles(vParam0, fParam6, 0, 0, 0, 0, false);
			}
		}
	}
}

bool func_288(Vector3 vParam0, Vector3 vParam1, Vector3 fParam2, float fParam3)
{
	if (!is_screen_faded_out())
	{
		if (!iLocal_88)
		{
			if (!iLocal_75)
			{
				if (vmag2(vParam3 - vParam0) - fParam6 < fParam7 * fParam7)
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam6))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

float func_289(int iParam0)
{
	float fVar0;
	
	request_vehicle_recording(iParam0, &cLocal_2668);
	while (!has_vehicle_recording_been_loaded(iParam0, &cLocal_2668))
	{
		wait(false);
	}
	fVar0 = get_total_duration_of_vehicle_recording(iParam0, &cLocal_2668);
	remove_vehicle_recording(iParam0, &cLocal_2668);
	return fVar0;
}

bool func_290(int iParam0)
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return true;
	}
	return false;
}

void func_291(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;
	int iVar8;
	
	if (is_player_playing(player_id()))
	{
		vVar1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
	}
	if (is_vehicle_driveable(iParam0, 0))
	{
		iVar7 = false;
		iVar8 = false;
		iVar0 = iLocal_1951;
		while (iVar0 < 15)
		{
			switch (iLocal_1930[iVar0])
			{
				case 0:
					if (!iLocal_2861[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vLocal_2489[iVar0 /*3*/], fLocal_1273, fLocal_1273, fLocal_1273, false, true, 0))
						{
							iLocal_1953++;
							iLocal_1930[iVar0]++;
						}
					}
					else
					{
						iLocal_1930[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_1948)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3105[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2861[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2861[iVar0]))
							{
								if ((iLocal_75 || iLocal_89) || (!iLocal_106 && !func_288(vLocal_2489[iVar0 /*3*/], vVar1, 5f, fLocal_1286)))
								{
									if (iLocal_85)
									{
										func_287(vLocal_2489[iVar0 /*3*/], vVar1, fLocal_1279);
									}
									iLocal_3105[iVar0] = create_vehicle(iLocal_2861[iVar0], vLocal_2489[iVar0 /*3*/], 0, 0, false);
									if (iLocal_2861[iVar0] == joaat("polmav"))
									{
										set_vehicle_livery(iLocal_3105[iVar0], false);
									}
									set_entity_quaternion(iLocal_3105[iVar0], fLocal_1209[iVar0], fLocal_1225[iVar0], fLocal_1241[iVar0], fLocal_1257[iVar0]);
									set_model_as_no_longer_needed(iLocal_2861[iVar0]);
									if (is_vehicle_model(iLocal_3105[iVar0], func_179()))
									{
										set_vehicle_siren(iLocal_3105[iVar0], true);
										if (!is_this_model_a_bike(iLocal_2861[iVar0]))
										{
											set_siren_with_no_driver(iLocal_3105[iVar0], 1);
										}
									}
									if (is_vehicle_model(iLocal_3105[iVar0], func_180()))
									{
										set_vehicle_colours(iLocal_3105[iVar0], false, false);
									}
									_0x3910051CCECDB00C(iLocal_3105[iVar0], true);
									iLocal_1953--;
									iLocal_1948++;
									iLocal_1930[iVar0]++;
									iLocal_106 = true;
								}
							}
						}
						else
						{
							iLocal_1953--;
							iLocal_1948++;
							iLocal_1930[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!iVar7)
					{
						if (is_vehicle_driveable(iLocal_3105[iVar0], 0))
						{
							vVar4 = {ENTITY::GET_ENTITY_COORDS(iLocal_3105[iVar0], 1)};
						}
						if (fLocal_1287 == 0f || vdist2(vVar1, vVar4) < fLocal_1287 * fLocal_1287)
						{
							if (!func_280(iLocal_3105[iVar0], iParam0, 0))
							{
								if (!iLocal_77)
								{
									func_174(iLocal_3105[iVar0]);
								}
								else
								{
									delete_vehicle(&(iLocal_3105[iVar0]));
								}
								iLocal_1948--;
								iLocal_1930[iVar0] = 99;
								iVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1930[iVar0] != 99)
			{
				if (!iVar8)
				{
					iLocal_1951 = iVar0;
					iVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_176();
	}
}

void func_292(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	Vector3 fVar15;
	Vector3 fVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	auto uVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	Vector3 vVar25;
	
	iVar5 = false;
	iVar18 = is_player_playing(player_id());
	iVar19 = can_create_random_driver();
	uVar20 = can_create_random_bike_rider();
	if (iVar18)
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar5 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		}
		vVar12 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
	}
	iVar1 = 0;
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (is_playback_going_on_for_vehicle(iParam0))
		{
			fLocal_1275 = get_time_position_in_recording(iParam0);
		}
		iVar22 = -1;
		iVar23 = false;
		iVar24 = false;
		iVar0 = iLocal_1950;
		while (iVar0 < 175 && !iVar23)
		{
			if (iLocal_1470[iVar0] != 99)
			{
				if (iLocal_1470[iVar0] == 0)
				{
					if (iLocal_1294[iVar0] > 0 && iLocal_2685[iVar0] != 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_1275 < fLocal_813[iVar0] + 20000f)
							{
								if (fLocal_1275 >= fLocal_813[iVar0] - 7000f * fParam1)
								{
									if (func_290(iLocal_2685[iVar0]))
									{
										GAMEPLAY::SET_BIT(&(iLocal_1646[iVar0]), false);
									}
									else if (is_this_model_a_bike(iLocal_2685[iVar0]))
									{
										GAMEPLAY::SET_BIT(&(iLocal_1646[iVar0]), 2);
									}
									GAMEPLAY::CLEAR_BIT(&(iLocal_1646[iVar0]), true);
									iLocal_1955++;
									iLocal_1470[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									iVar23 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_294(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = fLocal_1275 - fLocal_813[iVar0];
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_289(iLocal_1294[iVar0]))
								{
									if (func_290(iLocal_2685[iVar0]))
									{
										GAMEPLAY::SET_BIT(&(iLocal_1646[iVar0]), false);
									}
									else if (is_this_model_a_bike(iLocal_2685[iVar0]))
									{
										GAMEPLAY::SET_BIT(&(iLocal_1646[iVar0]), 2);
									}
									GAMEPLAY::CLEAR_BIT(&(iLocal_1646[iVar0]), true);
									iLocal_1955++;
									iLocal_1470[iVar0]++;
								}
								else
								{
									func_294(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_294(iVar0, 1090519040);
					}
				}
				else if (iLocal_1470[iVar0] == 1)
				{
					request_vehicle_recording(iLocal_1294[iVar0], &cLocal_2668);
					iVar17 = false;
					if (GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], false))
					{
						STREAMING::REQUEST_MODEL(func_178());
						if (STREAMING::HAS_MODEL_LOADED(func_178()))
						{
							iVar17 = true;
						}
					}
					else if (!iLocal_102 && ((!GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], 2) && iVar19) || (GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], 2) && uVar20)))
					{
						iVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_181());
						iVar17 = STREAMING::HAS_MODEL_LOADED(func_181());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2916[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2685[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_2685[iVar0]) && has_vehicle_recording_been_loaded(iLocal_1294[iVar0], &cLocal_2668)) && iVar17)
						{
							if (fLocal_1275 >= fLocal_813[iVar0] - fLocal_1288 * fParam1)
							{
								if ((iLocal_89 || iParam2) || (!iLocal_106 && !func_288(vLocal_1963[iVar0 /*3*/], vVar12, 5f, fLocal_1286)))
								{
									if (iLocal_85)
									{
										func_287(vLocal_1963[iVar0 /*3*/], vVar12, fLocal_1279);
									}
									iLocal_2916[iVar0] = create_vehicle(iLocal_2685[iVar0], vLocal_1963[iVar0 /*3*/], 0, 0, false);
									if (iLocal_2685[iVar0] == joaat("polmav"))
									{
										set_vehicle_livery(iLocal_2916[iVar0], false);
									}
									if (uLocal_98 && !GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], false))
									{
										func_286(iLocal_2916[iVar0]);
									}
									set_entity_coords_no_offset(iLocal_2916[iVar0], vLocal_1963[iVar0 /*3*/], 0, 0, 1);
									set_entity_quaternion(iLocal_2916[iVar0], fLocal_109[iVar0], fLocal_285[iVar0], fLocal_461[iVar0], fLocal_637[iVar0]);
									if (is_this_model_a_car(iLocal_2685[iVar0]) || is_this_model_a_bike(iLocal_2685[iVar0]))
									{
										set_vehicle_on_ground_properly(iLocal_2916[iVar0]);
									}
									if (GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], 3))
									{
										_0x3910051CCECDB00C(iLocal_2916[iVar0], true);
									}
									if (!GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], false))
									{
										set_vehicle_engine_on(iLocal_2916[iVar0], true, 1, 0);
										if (TIME::GET_CLOCK_HOURS() > 19 || TIME::GET_CLOCK_HOURS() < 7)
										{
											set_vehicle_lights(iLocal_2916[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2916[iVar0], true);
									set_entity_only_damaged_by_player(iLocal_2916[iVar0], true);
									set_model_as_no_longer_needed(iLocal_2685[iVar0]);
									iLocal_1955--;
									iLocal_1470[iVar0]++;
									iLocal_106 = true;
								}
								else if (fLocal_1275 > fLocal_813[iVar0])
								{
									iLocal_1955--;
									func_294(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1470[iVar0] == 2)
				{
					iVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1961 || iLocal_1961 == 0)) || iLocal_89) || iParam2)
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], true))
						{
							if (GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], false))
							{
								STREAMING::REQUEST_MODEL(func_178());
								iVar17 = STREAMING::HAS_MODEL_LOADED(func_178());
								iVar21 = 2;
							}
							else if (!iLocal_102 && ((!GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], 2) && iVar19) || (GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], 2) && uVar20)))
							{
								iVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_181());
								iVar17 = STREAMING::HAS_MODEL_LOADED(func_181());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2916[iVar0], 0))
							{
								if (!iLocal_106 && is_vehicle_seat_free(iLocal_2916[iVar0], -1))
								{
									if (iVar17)
									{
										if ((vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_2916[iVar0], 1), vVar12) < 10000f || iParam2) || iLocal_89)
										{
											func_284(&(iLocal_2916[iVar0]), iVar21, 0);
											GAMEPLAY::SET_BIT(&(iLocal_1646[iVar0]), true);
										}
									}
								}
							}
						}
						if (is_vehicle_driveable(iLocal_2916[iVar0], 0))
						{
							request_vehicle_recording(iLocal_1294[iVar0], &cLocal_2668);
							if (fLocal_1275 >= fLocal_813[iVar0])
							{
								if (12 > iLocal_1946)
								{
									fVar15 = fLocal_1275 - fLocal_813[iVar0];
									if (has_vehicle_recording_been_loaded(iLocal_1294[iVar0], &cLocal_2668))
									{
										if (fVar15 < get_total_duration_of_vehicle_recording(iLocal_1294[iVar0], &cLocal_2668))
										{
											vVar6 = {ENTITY::GET_ENTITY_COORDS(iLocal_2916[iVar0], 1)};
											vVar9 = {get_position_of_vehicle_recording_at_time(iLocal_1294[iVar0], fVar15, &cLocal_2668)};
											if (!func_288(vVar6, vVar12, 5f, fLocal_1286) && func_288(vVar9, vVar12, 5f, fLocal_1286))
											{
												if (!GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], true))
												{
													func_284(&(iLocal_2916[iVar0]), iVar21, 0);
												}
												func_294(iVar0, 1090519040);
											}
											else if (((!iLocal_106 || GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], true)) || iLocal_89) || iParam2)
											{
												if (func_277(&(iLocal_2916[iVar0]), iLocal_1294[iVar0], fVar15, 1, 0, 0, 1, iLocal_103))
												{
													if (!GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], true))
													{
														func_284(&(iLocal_2916[iVar0]), iVar21, 0);
													}
													set_entity_collision(iLocal_2916[iVar0], true, 0);
													set_playback_speed(iLocal_2916[iVar0], fParam1);
													iLocal_1946++;
													iLocal_1470[iVar0]++;
												}
											}
										}
										else
										{
											if (!GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], true))
											{
												func_284(&(iLocal_2916[iVar0]), iVar21, 0);
											}
											func_294(iVar0, 1090519040);
										}
									}
									else if (fVar15 > get_total_duration_of_vehicle_recording(iLocal_1294[iVar0], &cLocal_2668))
									{
										if (!GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], true))
										{
											func_284(&(iLocal_2916[iVar0]), iVar21, 0);
										}
										func_294(iVar0, 1090519040);
									}
								}
								else
								{
									if (!GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], true))
									{
										func_284(&(iLocal_2916[iVar0]), iVar21, 0);
									}
									func_294(iVar0, 1090519040);
								}
							}
							else if (iLocal_86 && !iLocal_94)
							{
								if (!GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], true))
								{
									func_284(&(iLocal_2916[iVar0]), iVar21, 0);
								}
								func_294(iVar0, 1090519040);
							}
						}
						else
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], true))
							{
								func_284(&(iLocal_2916[iVar0]), iVar21, 0);
							}
							func_294(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1961 = iVar0;
					}
				}
				else if (iLocal_1470[iVar0] == 3)
				{
					if (is_vehicle_driveable(iLocal_2916[iVar0], 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_2916[iVar0]))
						{
							iVar4 = get_ped_in_vehicle_seat(iLocal_2916[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (iVar18)
								{
									iVar24 = false;
									if (!iLocal_84)
									{
										if ((!iLocal_79 && !iLocal_76) && func_283(iLocal_2916[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1960 || iLocal_1960 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, 0))
												{
													iVar17 = false;
													if (!func_293(iLocal_2916[iVar0], iVar5) || func_280(iVar5, iLocal_2916[iVar0], 0))
													{
														iVar24 = true;
													}
												}
												iLocal_1960 = iVar0;
												iVar2++;
											}
										}
										else if (((!iLocal_99 && !GAMEPLAY::IS_BIT_SET(iLocal_1646[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1960 || iLocal_1960 == 0))
										{
											vVar25 = {get_offset_from_entity_given_world_coords(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_2916[iVar0], 1))};
											if (vVar25.y < 0f)
											{
												if (absf(vVar25.y) > absf(vVar25.x))
												{
													iVar24 = true;
												}
											}
											iVar2++;
											iLocal_1960 = iVar0;
										}
									}
									if (iVar24)
									{
										func_279(iLocal_2916[iVar0]);
										iLocal_1470[iVar0]++;
									}
									else
									{
										set_playback_speed(iLocal_2916[iVar0], fParam1);
									}
								}
							}
							else
							{
								stop_playback_recorded_vehicle(iLocal_2916[iVar0]);
							}
						}
						else
						{
							iLocal_1470[iVar0]++;
						}
					}
					else
					{
						iLocal_1470[iVar0]++;
					}
				}
				else if (iLocal_1470[iVar0] == 4)
				{
					if (is_vehicle_driveable(iLocal_2916[iVar0], 0))
					{
						if (!is_playback_going_on_for_vehicle(iLocal_2916[iVar0]))
						{
							iLocal_1470[iVar0]++;
						}
						else
						{
							iVar4 = get_ped_in_vehicle_seat(iLocal_2916[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								set_playback_speed(iLocal_2916[iVar0], fParam1);
							}
							else
							{
								stop_playback_recorded_vehicle(iLocal_2916[iVar0]);
							}
							if (has_vehicle_recording_been_loaded(iLocal_1294[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 > fLocal_813[iVar0] + get_total_duration_of_vehicle_recording(iLocal_1294[iVar0], &cLocal_2668))
								{
									stop_playback_recorded_vehicle(iLocal_2916[iVar0]);
								}
							}
							else
							{
								stop_playback_recorded_vehicle(iLocal_2916[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1470[iVar0]++;
					}
				}
				else if (iLocal_1470[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2916[iVar0], 0))
					{
						fVar16 = get_entity_speed(iLocal_2916[iVar0]);
					}
					iLocal_1946--;
					func_294(iVar0, fVar16);
				}
				if (iVar22 == -1)
				{
					iVar22 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar22 != -1)
		{
			iLocal_1950 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1960 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1961 = 0;
		}
	}
	else
	{
		func_177();
	}
}

bool func_293(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		vVar0 = {get_entity_speed_vector(iParam0, 0)};
	}
	else
	{
		return false;
	}
	if (is_vehicle_driveable(iParam1, 0))
	{
		vVar3 = {get_entity_speed_vector(iParam1, 0)};
	}
	else
	{
		return false;
	}
	vVar0.z = 0f;
	vVar3.z = 0f;
	fVar6 = func_281(vVar0, vVar3);
	if (fVar6 < 0f)
	{
		return false;
	}
	return true;
}

void func_294(int iParam0, Vector3 fParam1)
{
	int iVar0;
	
	if (!iLocal_2685[iParam0] == 0)
	{
		set_model_as_no_longer_needed(iLocal_2685[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2916[iParam0], 0))
	{
		set_entity_collision(iLocal_2916[iParam0], true, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2916[iParam0], false);
		iVar0 = get_ped_in_vehicle_seat(iLocal_2916[iParam0], -1);
		if (!PED::IS_PED_INJURED(iVar0) && iVar0 != PLAYER::PLAYER_PED_ID())
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			task_vehicle_mission(iVar0, iLocal_2916[iParam0], false, 1, fParam1, 786603, 5f, 5f, 1);
			set_ped_flee_attributes(iVar0, 8192, true);
			if (iLocal_108)
			{
				set_ped_flee_attributes(iVar0, 65536, true);
				set_ped_flee_attributes(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			set_drive_task_cruise_speed(iVar0, fParam1);
		}
	}
	if (!iLocal_77)
	{
		if (!iLocal_105)
		{
			func_285(iVar0);
			func_174(iLocal_2916[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2916[iParam0]))
		{
			delete_vehicle(&(iLocal_2916[iParam0]));
		}
	}
	if (!iLocal_87 && !iLocal_100)
	{
		if (iLocal_1294[iParam0] > 0)
		{
			remove_vehicle_recording(iLocal_1294[iParam0], &cLocal_2668);
		}
	}
	iLocal_1470[iParam0] = 99;
}

void func_295(int iParam0, Vector3 fParam1, float fParam2)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	Vector3 fVar13;
	
	if (is_player_playing(player_id()))
	{
		vVar10 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
	}
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (is_playback_going_on_for_vehicle(iParam0))
		{
			iVar0 = get_current_playback_for_vehicle(iParam0);
			vVar1 = {_0x92523B76657A517D(iVar0, fParam1)};
			vVar4 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
			vVar7 = {vVar4 - vVar1};
			fVar13 = vmag(vVar7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_287(vVar1, vVar10, fVar13);
		}
	}
}

void func_296(int iParam0, float fParam1)
{
	if (!iLocal_88)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (is_player_playing(player_id()))
			{
				if (vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > fParam1 * fParam1)
				{
					set_vehicle_population_budget(1);
				}
				else
				{
					set_vehicle_population_budget(0);
				}
			}
		}
	}
}

void func_297(int iParam0, float fParam1)
{
	if (!iLocal_88)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (is_player_playing(player_id()))
			{
				if (vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > fParam1 * fParam1)
				{
					set_vehicle_density_multiplier_this_frame(1f);
				}
				else
				{
					set_vehicle_density_multiplier_this_frame(0f);
				}
			}
		}
	}
}

void func_298(int iParam0, float fParam1)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	float fVar3;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && is_playback_going_on_for_vehicle(iParam0))
	{
		fVar1 = fLocal_1289 + 2000f;
		fVar2 = fLocal_1290 + 2000f;
		iVar4 = false;
		if (fVar1 < fParam1 + 25000f)
		{
			iVar0 = get_current_playback_for_vehicle(iParam0);
			if (fVar1 <= get_total_duration_of_vehicle_recording_id(iVar0))
			{
				if (iLocal_1956 == 0)
				{
					vLocal_2656 = {_0x92523B76657A517D(iVar0, fLocal_1289)};
					iLocal_1956++;
				}
				else if (iLocal_1956 == 1)
				{
					vLocal_2659 = {_0x92523B76657A517D(iVar0, fVar1)};
					iLocal_1956++;
				}
				else if (!iLocal_106)
				{
					if (vLocal_2656.x > vLocal_2659.x)
					{
						fVar3 = vLocal_2656.x;
						vLocal_2656.x = vLocal_2659.x;
						vLocal_2659.x = fVar3;
					}
					if (vLocal_2656.y > vLocal_2659.y)
					{
						fVar3 = vLocal_2656.y;
						vLocal_2656.y = vLocal_2659.y;
						vLocal_2659.y = fVar3;
					}
					if (vLocal_2656.z > vLocal_2659.z)
					{
						fVar3 = vLocal_2656.z;
						vLocal_2656.z = vLocal_2659.z;
						vLocal_2659.z = fVar3;
					}
					vLocal_2656 = {vLocal_2656 - Vector(fLocal_1293, fLocal_1293, fLocal_1293)};
					vLocal_2659 = {vLocal_2659 + Vector(fLocal_1293, fLocal_1293, fLocal_1293)};
					set_roads_in_area(vLocal_2656, vLocal_2659, false, 0);
					fLocal_1289 = fVar1;
					iLocal_1956 = 0;
				}
			}
		}
		if (fVar2 < fParam1 - 8000f)
		{
			iVar0 = get_current_playback_for_vehicle(iParam0);
			if (iLocal_1959 == 0)
			{
				vLocal_2662 = {_0x92523B76657A517D(iVar0, fLocal_1290)};
				iLocal_1959++;
			}
			else if (iLocal_1959 == 1)
			{
				vLocal_2665 = {_0x92523B76657A517D(iVar0, fVar2)};
				iLocal_1959++;
			}
			else if (!iLocal_106 && !iVar4)
			{
				if (vLocal_2662.x > vLocal_2665.x)
				{
					fVar3 = vLocal_2662.x;
					vLocal_2662.x = vLocal_2665.x;
					vLocal_2665.x = fVar3;
				}
				if (vLocal_2662.y > vLocal_2665.y)
				{
					fVar3 = vLocal_2662.y;
					vLocal_2662.y = vLocal_2665.y;
					vLocal_2665.y = fVar3;
				}
				if (vLocal_2662.z > vLocal_2665.z)
				{
					fVar3 = vLocal_2662.z;
					vLocal_2662.z = vLocal_2665.z;
					vLocal_2665.z = fVar3;
				}
				vLocal_2662 = {vLocal_2662 - Vector(fLocal_1293, fLocal_1293, fLocal_1293)};
				vLocal_2665 = {vLocal_2665 + Vector(fLocal_1293, fLocal_1293, fLocal_1293)};
				set_roads_back_to_original(vLocal_2662, vLocal_2665, 1);
				fLocal_1290 = fVar2;
				iLocal_1959 = 0;
			}
		}
	}
}

bool func_299(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	float fVar15;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (is_ped_in_vehicle(iParam0, iParam1, 0))
			{
				return false;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	}
	if (is_vehicle_driveable(iParam1, 0))
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
		vVar6 = {get_offset_from_entity_in_world_coords(iParam1, 0f, 5f, 0f)};
		vVar12 = {vVar6 - vVar3};
	}
	vVar9 = {vVar3 - vVar0};
	vVar9.z = 0f;
	vVar12.z = 0f;
	fVar15 = func_281(vVar9, vVar12);
	if (fVar15 < 0f)
	{
		return true;
	}
	return false;
}

void func_300()
{
	set_all_vehicle_generators_active_in_area(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, 1);
	set_number_of_parked_vehicles(0);
	set_garbage_trucks(0);
	set_all_low_priority_vehicle_generators_active(0);
	set_vehicle_density_multiplier_this_frame(0f);
	set_vehicle_population_budget(0);
	set_ped_population_budget(3);
}

void func_301(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10)
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
	int iVar9;
	int iVar10;
	
	if (iLocal_91 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_91 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1284;
	}
	fVar0 = fParam3 * fParam7;
	if (!fVar0 > fParam3)
	{
		fVar0 = fParam3 + 0.1f;
	}
	fVar5 = fParam3 * fParam9;
	fVar6 = fParam6 - fParam5 * 0.4f + fParam5;
	fVar2 = func_304(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 *= -1f;
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (func_299(iParam1, iParam0))
		{
			if (is_ped_in_any_vehicle(iParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_303(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_302(iParam0, iParam1);
				fVar1 += -15f;
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = 75f - fVar1 / 75f;
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = fParam5 - fParam4 - fVar3 - fParam4 / fParam5 - fParam4 * fVar0 - fParam3 * fVar7 + fParam3;
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_92 = 1;
		}
		else if (iLocal_92)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_92 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = fVar4 - *fParam2;
	if (fVar1 > 0f)
	{
		fVar1 = get_frame_time();
		fVar8 = fLocal_1291 * fParam3 * fVar1;
		fVar1 = fVar4 - *fParam2;
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 += fVar1;
	}
	else
	{
		fVar1 = get_frame_time();
		fVar8 = fLocal_1292 * fParam3 * fVar1;
		fVar1 = fVar4 - *fParam2;
		if (fVar1 < fVar8 * -1f)
		{
			fVar1 = fVar8 * -1f;
		}
		*fParam2 += fVar1;
	}
	if (iParam10)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (is_ped_in_any_vehicle(iParam1, 0))
			{
				iVar9 = get_vehicle_ped_is_in(iParam1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9, 0))
				{
					iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
					if (is_this_model_a_car(iVar10) || is_this_model_a_bike(iVar10))
					{
						if (is_vehicle_driveable(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 -= fParam3;
							fVar1 /= fVar0 - fParam3;
							fVar1 *= fParam8;
							fVar1 *= fLocal_1282 - fLocal_1283;
							fVar1 += fLocal_1283;
							fLocal_1281 = fVar1;
							if (fLocal_1281 < fLocal_1283)
							{
								fLocal_1281 = fLocal_1283;
							}
							if (fLocal_1281 > fLocal_1282)
							{
								fLocal_1281 = fLocal_1282;
							}
							set_air_drag_multiplier_for_players_vehicle(player_id(), fLocal_1281);
						}
					}
				}
			}
		}
	}
}

float func_302(int iParam0, int iParam1)
{
	struct<2> Var0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	float fVar12;
	int iVar13;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = get_entity_forward_x(iParam0);
		Var0.f_1 = get_entity_forward_y(iParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
		if (is_ped_in_any_vehicle(iParam1, 0))
		{
			iVar13 = get_vehicle_ped_is_in(iParam1, 0);
			vVar9.x = get_entity_forward_x(iVar13);
			vVar9.y = get_entity_forward_y(iVar13);
		}
		else
		{
			vVar6 = {get_offset_from_entity_in_world_coords(iParam1, 0f, 5f, 0f)};
			vVar9 = {vVar6 - vVar3};
		}
	}
	fVar12 = get_angle_between_2d_vectors(Var0, Var0.f_1, vVar9.x, vVar9.y);
	return fVar12;
}

float func_303(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
	}
	vVar6 = {vVar3 - vVar0};
	vVar6.z = 0f;
	fVar9 = vmag(vVar6);
	return fVar9;
}

float func_304(int iParam0, int iParam1)
{
	struct<2> Var0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 fVar12;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		Var0 = get_entity_forward_x(iParam0);
		Var0.f_1 = get_entity_forward_y(iParam0);
		vVar6 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar9 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
	}
	vVar3 = {vVar9 - vVar6};
	fVar12 = get_angle_between_2d_vectors(vVar3.x, vVar3.y, Var0, Var0.f_1);
	fVar12 += -90f;
	if (fVar12 < 0f)
	{
		fVar12 *= -1f;
	}
	vVar3.z = 0f;
	return vmag(vVar3) * sin(fVar12);
}

bool func_305()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
	{
		if (is_vehicle_driveable(iLocal_3258, 0))
		{
			if (!is_entity_on_screen(iLocal_3258))
			{
				iLocal_3403 = 1;
			}
			else
			{
				iLocal_3403 = 0;
			}
		}
		else
		{
			iLocal_3403 = 1;
		}
	}
	else
	{
		iLocal_3403 = 1;
	}
	iLocal_3190 = 0;
	while (iLocal_3190 <= 24)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[iLocal_3190]))
		{
			if (is_vehicle_driveable(iLocal_3121[iLocal_3190], 0))
			{
				if (!is_entity_on_screen(iLocal_3121[iLocal_3190]))
				{
					iLocal_3404[iLocal_3190] = 1;
				}
				else
				{
					iLocal_3404[iLocal_3190] = 0;
				}
			}
			else
			{
				iLocal_3404[iLocal_3190] = 1;
			}
		}
		else
		{
			iLocal_3404[iLocal_3190] = 1;
		}
		iLocal_3190++;
	}
	if (((((((((((((((((((((((((iLocal_3403 == 1 && iLocal_3404[0] == 1) && iLocal_3404[1] == 1) && iLocal_3404[2] == 1) && iLocal_3404[3] == 1) && iLocal_3404[4] == 1) && iLocal_3404[5] == 1) && iLocal_3404[6] == 1) && iLocal_3404[7] == 1) && iLocal_3404[8] == 1) && iLocal_3404[9] == 1) && iLocal_3404[10] == 1) && iLocal_3404[11] == 1) && iLocal_3404[12] == 1) && iLocal_3404[13] == 1) && iLocal_3404[14] == 1) && iLocal_3404[15] == 1) && iLocal_3404[16] == 1) && iLocal_3404[17] == 1) && iLocal_3404[18] == 1) && iLocal_3404[19] == 1) && iLocal_3404[20] == 1) && iLocal_3404[21] == 1) && iLocal_3404[22] == 1) && iLocal_3404[23] == 1) && iLocal_3404[24] == 1)
	{
		return true;
	}
	return false;
}

void func_306()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[4]))
	{
		if (is_vehicle_driveable(iLocal_3121[4], 0))
		{
			if (is_playback_going_on_for_vehicle(iLocal_3121[4]))
			{
				vLocal_3303 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
				vVar3 = {ENTITY::GET_ENTITY_COORDS(iLocal_3121[4], 1)};
				if (vLocal_3303.x < vVar3.x - 10f && !is_entity_on_screen(iLocal_3121[4]))
				{
					stop_playback_recorded_vehicle(iLocal_3121[4]);
					set_vehicle_as_no_longer_needed(&(iLocal_3121[4]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[3]))
	{
		if (is_vehicle_driveable(iLocal_3121[3], 0))
		{
			if (is_playback_going_on_for_vehicle(iLocal_3121[3]))
			{
				vLocal_3303 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
				vVar0 = {ENTITY::GET_ENTITY_COORDS(iLocal_3121[3], 1)};
				if (vLocal_3303.x < vVar0.x - 10f && !is_entity_on_screen(iLocal_3121[3]))
				{
					stop_playback_recorded_vehicle(iLocal_3121[3]);
					set_vehicle_as_no_longer_needed(&(iLocal_3121[3]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[21]))
	{
		if (is_vehicle_driveable(iLocal_3121[21], 0))
		{
			if (is_playback_going_on_for_vehicle(iLocal_3121[21]))
			{
				vLocal_3303 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
				vVar6 = {ENTITY::GET_ENTITY_COORDS(iLocal_3121[21], 1)};
				if (vLocal_3303.x < vVar6.x - 10f && !is_entity_on_screen(iLocal_3121[21]))
				{
					stop_playback_recorded_vehicle(iLocal_3121[21]);
					set_vehicle_as_no_longer_needed(&(iLocal_3121[21]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[0]))
	{
		if (is_vehicle_driveable(iLocal_3121[0], 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				if (is_vehicle_driveable(iLocal_3258, 0))
				{
					if (is_playback_going_on_for_vehicle(iLocal_3258))
					{
						if (get_time_position_in_recording(iLocal_3258) > 50000f && !is_entity_on_screen(iLocal_3121[0]))
						{
							if (is_playback_going_on_for_vehicle(iLocal_3121[0]))
							{
								stop_playback_recorded_vehicle(iLocal_3121[0]);
							}
							set_vehicle_as_no_longer_needed(&(iLocal_3121[0]));
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3264))
	{
		if (is_vehicle_driveable(iLocal_3264, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				if (is_vehicle_driveable(iLocal_3258, 0))
				{
					if (is_playback_going_on_for_vehicle(iLocal_3258))
					{
						if (get_time_position_in_recording(iLocal_3258) > 90000f && !is_entity_on_screen(iLocal_3264))
						{
							stop_particle_fx_looped(iLocal_3755[0], 0);
							stop_particle_fx_looped(iLocal_3755[1], 0);
							stop_particle_fx_looped(iLocal_3755[2], 0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[0]))
							{
								set_ped_as_no_longer_needed(&(iLocal_3223[0]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[1]))
							{
								set_ped_as_no_longer_needed(&(iLocal_3223[1]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[2]))
							{
								set_ped_as_no_longer_needed(&(iLocal_3223[2]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[3]))
							{
								set_ped_as_no_longer_needed(&(iLocal_3223[3]));
							}
							set_vehicle_as_no_longer_needed(&iLocal_3264);
							remove_anim_dict("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_307(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	Vector3 fVar1;
	float fVar2;
	
	fVar2 = fParam2 * fParam3;
	if (does_blip_exist(iParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (is_entity_a_vehicle(iParam1))
			{
				if (is_vehicle_driveable(get_vehicle_index_from_entity_index(iParam1), 0))
				{
					fVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(255f * fVar1 - fVar2 / fParam2 - fVar2);
						if (iVar0 <= 0)
						{
							iVar0 = false;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						set_blip_flashes(iParam0, 1);
						set_blip_alpha(iParam0, 255 - iVar0);
					}
					else
					{
						set_blip_flashes(iParam0, 0);
						set_blip_alpha(iParam0, 255);
					}
				}
			}
			else if (is_entity_a_ped(iParam1))
			{
				if (!PED::IS_PED_INJURED(get_ped_index_from_entity_index(iParam1)))
				{
					fVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(255f * fVar1 - fVar2 / fParam2 - fVar2);
						if (iVar0 <= 0)
						{
							iVar0 = false;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						set_blip_flashes(iParam0, 1);
						set_blip_alpha(iParam0, 255 - iVar0);
					}
					else
					{
						set_blip_flashes(iParam0, 0);
						set_blip_alpha(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_308()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[2]))
	{
		if (is_vehicle_driveable(iLocal_3121[2], 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				if (is_vehicle_driveable(iLocal_3258, 0))
				{
					if (is_playback_going_on_for_vehicle(iLocal_3258))
					{
						if (get_time_position_in_recording(iLocal_3258) < 50530f)
						{
							if (!_is_vehicle_engine_on(iLocal_3121[2]))
							{
								set_vehicle_engine_on(iLocal_3121[2], true, 1, 0);
							}
						}
						else if (_is_vehicle_engine_on(iLocal_3121[2]))
						{
							set_vehicle_engine_on(iLocal_3121[2], false, 0, 0);
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[5]))
	{
		if (is_vehicle_driveable(iLocal_3121[5], 0))
		{
			if (!_is_vehicle_engine_on(iLocal_3121[5]))
			{
				set_vehicle_engine_on(iLocal_3121[5], true, 1, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260[0]))
	{
		if (is_vehicle_driveable(iLocal_3260[0], 0))
		{
			if (!_is_vehicle_engine_on(iLocal_3260[0]))
			{
				set_vehicle_engine_on(iLocal_3260[0], true, 1, 0);
			}
			if (is_vehicle_seat_free(iLocal_3260[0], -1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3254[0]))
				{
					STREAMING::REQUEST_MODEL(joaat("s_m_m_gentransport"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_gentransport")))
					{
						iLocal_3254[0] = PED::CREATE_PED_inside_vehicle(iLocal_3260[0], 26, joaat("s_m_m_gentransport"), -1, 1, true);
						set_model_as_no_longer_needed(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260[1]))
	{
		if (is_vehicle_driveable(iLocal_3260[1], 0))
		{
			if (!_is_vehicle_engine_on(iLocal_3260[1]))
			{
				set_vehicle_engine_on(iLocal_3260[1], true, 1, 0);
			}
			if (is_vehicle_seat_free(iLocal_3260[1], -1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3254[1]))
				{
					STREAMING::REQUEST_MODEL(joaat("s_m_m_gentransport"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_gentransport")))
					{
						iLocal_3254[1] = PED::CREATE_PED_inside_vehicle(iLocal_3260[1], 26, joaat("s_m_m_gentransport"), -1, 1, true);
						set_model_as_no_longer_needed(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

void func_309()
{
	if (iLocal_3181 == 0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Cop_Cars", false);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Plane_Explosion", false);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Tanker_Explosion", false);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TV_Monitors", false);
		if (iLocal_3392 == 0)
		{
			iLocal_3213 = AUDIO::GET_SOUND_ID();
			iLocal_3392 = 1;
		}
		if (iLocal_3393 == 0)
		{
			iLocal_3214 = AUDIO::GET_SOUND_ID();
			iLocal_3393 = 1;
		}
		if (iLocal_3394 == 0)
		{
			iLocal_3215 = AUDIO::GET_SOUND_ID();
			iLocal_3394 = 1;
		}
		if (iLocal_3395 == 0)
		{
			iLocal_3216 = AUDIO::GET_SOUND_ID();
			iLocal_3395 = 1;
		}
		if (iLocal_3396 == 0)
		{
			iLocal_3217 = AUDIO::GET_SOUND_ID();
			iLocal_3396 = 1;
		}
		if (iLocal_3391 == 0)
		{
			iLocal_3218 = AUDIO::GET_SOUND_ID();
			iLocal_3391 = 1;
		}
		if (iLocal_3397 == 0)
		{
			iLocal_3219 = AUDIO::GET_SOUND_ID();
			iLocal_3397 = 1;
		}
		if (iLocal_3345 == 1)
		{
			func_104();
			iLocal_3345 = 0;
		}
		if (!does_cam_exist(iLocal_3289))
		{
			iLocal_3289 = create_cam("DEFAULT_SCRIPTED_CAMERA", true);
			set_cam_fov(iLocal_3289, 40f);
		}
		iLocal_3343 = 0;
		iLocal_3337 = 0;
		iLocal_3349 = 0;
		iLocal_3333 = 0;
		iLocal_3328 = 0;
		iLocal_3334 = 0;
		iLocal_3327 = 0;
		iLocal_3363 = 0;
		iLocal_3365[0] = 0;
		iLocal_3369[0] = 0;
		iLocal_3365[1] = 0;
		iLocal_3369[1] = 0;
		iLocal_3365[2] = 0;
		iLocal_3372 = 0;
		iLocal_3373 = 0;
		iLocal_3331 = 0;
		iLocal_3332 = 0;
		iLocal_3330 = 0;
		iLocal_3377 = 0;
		iLocal_3380 = 0;
		iLocal_3381 = 0;
		iLocal_3382 = 0;
		iLocal_3384 = 0;
		iLocal_3383 = 0;
		iLocal_3385 = 0;
		iLocal_3386 = 0;
		iLocal_3387 = 0;
		iLocal_3388 = 0;
		iLocal_3389 = 0;
		iLocal_3390 = 0;
		iLocal_3398 = 0;
		iLocal_3399 = 0;
		iLocal_3401 = 0;
		iLocal_3402 = 0;
		iLocal_3434 = 0;
		iLocal_3435 = 0;
		iLocal_3551 = 0;
		iLocal_3351 = 1;
		iLocal_3352 = 1;
		iLocal_3360 = 1;
		iLocal_3440 = 0;
		iLocal_3441 = 0;
		iLocal_3466 = 0;
		iLocal_3468 = 0;
		iLocal_3475 = 0;
		iLocal_3476 = 0;
		iLocal_3478 = 0;
		iLocal_3480[0] = 0;
		iLocal_3480[1] = 0;
		iLocal_3483[0] = 0;
		iLocal_3483[1] = 0;
		iLocal_3486 = 0;
		iLocal_3487 = 0;
		iLocal_3489 = 0;
		iLocal_3508 = 0;
		iLocal_3509 = 0;
		iLocal_3510 = 0;
		iLocal_3540 = 0;
		iLocal_3541 = 0;
		iLocal_3552 = 0;
		iLocal_3185 = 0;
		iLocal_3198 = 0;
		iLocal_3189 = 0;
		while (iLocal_3189 <= 2)
		{
			iLocal_3543[iLocal_3189] = 0;
			iLocal_3547[iLocal_3189] = 0;
			iLocal_3189++;
		}
		iLocal_3189 = 0;
		while (iLocal_3189 <= 2)
		{
			iLocal_3571[iLocal_3189] = 0;
			iLocal_3189++;
		}
		iLocal_3189 = 0;
		while (iLocal_3189 <= 6)
		{
			iLocal_3490[iLocal_3189] = 0;
			iLocal_3498[iLocal_3189] = 0;
			iLocal_3189++;
		}
		request_ptfx_asset();
		iLocal_89 = 1;
		iLocal_95 = true;
		func_254();
		iLocal_3184 = get_default_script_rendertarget_render_id();
		clear_area(-823.71f, -2548.2f, 13.75f, 20f, 1, 0, 0, false);
		set_ped_non_creation_area(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		set_ped_paths_in_area(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, false, 0);
		set_roads_in_area(-482f, -2118f, 6f, -1072f, -2724f, 17f, false, 1);
		func_110(2, 1);
		func_311("BB_Chase", 45, 0, 1);
		set_max_wanted_level(3);
		func_17(&uLocal_3578, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		if (is_screen_faded_out())
		{
			if (!func_24())
			{
				load_scene(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			func_21(iLocal_3259, -1, 1);
		}
		iLocal_3182 = 0;
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		set_player_control(player_id(), true, 0);
		func_310();
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3271))
		{
			iLocal_3271 = create_vehicle(joaat("blista"), 0f, 0f, 1f, 0f, 1, true);
		}
		while (!has_vehicle_recording_been_loaded(45, "BB_Chase"))
		{
			wait(false);
		}
		if (is_screen_faded_out())
		{
			if (is_vehicle_driveable(iLocal_3259, 0))
			{
				set_vehicle_engine_on(iLocal_3259, true, 1, 0);
				set_vehicle_forward_speed(iLocal_3259, 30f);
				set_player_control(player_id(), true, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
		{
			if (is_vehicle_driveable(iLocal_3258, 0))
			{
				start_playback_recorded_vehicle(iLocal_3258, 45, "BB_Chase", 1);
				settimerb(false);
				func_237();
				_set_unk_map_flag(2);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
				{
					if (is_vehicle_driveable(iLocal_3259, 0))
					{
						set_vehicle_as_no_longer_needed(&iLocal_3259);
					}
				}
				if (!is_screen_faded_in())
				{
					do_screen_fade_in(800);
				}
				iLocal_3181 = 0;
				iLocal_3180 = 4;
			}
		}
	}
}

void func_310()
{
	vLocal_2489[0 /*3*/] = {-583.6427f, -2157.497f, 5.7947f};
	fLocal_1209[0] = -0.0003f;
	fLocal_1225[0] = -0.0085f;
	fLocal_1241[0] = 0.9998f;
	fLocal_1257[0] = 0.0158f;
	iLocal_2861[0] = joaat("blista");
	vLocal_1963[4 /*3*/] = {-827.2035f, -2575.697f, 13.5688f};
	fLocal_109[4] = 0.0004f;
	fLocal_285[4] = -0.0003f;
	fLocal_461[4] = -0.2526f;
	fLocal_637[4] = 0.9676f;
	iLocal_1294[4] = 50;
	fLocal_813[4] = 20310f;
	iLocal_2685[4] = joaat("manana");
	vLocal_2489[1 /*3*/] = {-1033.717f, -2949.014f, 13.4922f};
	fLocal_1209[1] = 0.0032f;
	fLocal_1225[1] = -0.0003f;
	fLocal_1241[1] = -0.0255f;
	fLocal_1257[1] = 0.9997f;
	iLocal_2861[1] = joaat("bison2");
	vLocal_2535[0 /*3*/] = {-1178.365f, -2845.981f, 13.9027f};
	fLocal_993[0] = 0.0018f;
	fLocal_1029[0] = 0.0123f;
	fLocal_1065[0] = 0.9644f;
	fLocal_1101[0] = 0.2642f;
	iLocal_1822[0] = 9;
	fLocal_1137[0] = 22357f;
	fLocal_1173[0] = 1f;
	iLocal_2877[0] = joaat("buzzard");
	vLocal_2535[1 /*3*/] = {-1376.197f, -2755.167f, 14.0646f};
	fLocal_993[1] = -0.0012f;
	fLocal_1029[1] = 0.0013f;
	fLocal_1065[1] = 0.8439f;
	fLocal_1101[1] = -0.5365f;
	iLocal_1822[1] = 10;
	fLocal_1137[1] = 27135f;
	fLocal_1173[1] = 1f;
	iLocal_2877[1] = joaat("packer");
	vLocal_2535[2 /*3*/] = {-1342.543f, -2688.482f, 22.8254f};
	fLocal_993[2] = 0.0057f;
	fLocal_1029[2] = -0.0014f;
	fLocal_1065[2] = -0.2451f;
	fLocal_1101[2] = 0.9695f;
	iLocal_1822[2] = 11;
	fLocal_1137[2] = 35135f;
	fLocal_1173[2] = 1f;
	iLocal_2877[2] = joaat("jet");
	vLocal_2535[3 /*3*/] = {-898.3506f, -2698.965f, 20.159f};
	fLocal_993[3] = 0.0065f;
	fLocal_1029[3] = 0.0191f;
	fLocal_1065[3] = -0.2629f;
	fLocal_1101[3] = 0.9646f;
	iLocal_1822[3] = 3;
	fLocal_1137[3] = 6764f;
	fLocal_1173[3] = 1f;
	iLocal_2877[3] = joaat("bus");
	vLocal_2535[4 /*3*/] = {-576.655f, -2231.905f, 5.2834f};
	fLocal_993[4] = 0.0043f;
	fLocal_1029[4] = 0.0331f;
	fLocal_1065[4] = -0.3125f;
	fLocal_1101[4] = 0.9493f;
	iLocal_1822[4] = 4;
	fLocal_1137[4] = 2102f;
	fLocal_1173[4] = 1f;
	iLocal_2877[4] = joaat("bison");
	vLocal_2535[5 /*3*/] = {-994.9925f, -3154.125f, 23.1145f};
	fLocal_993[5] = 0.0056f;
	fLocal_1029[5] = 0.0029f;
	fLocal_1065[5] = 0.4915f;
	fLocal_1101[5] = 0.8708f;
	iLocal_1822[5] = 21;
	fLocal_1137[5] = 92500f;
	fLocal_1173[5] = 1f;
	iLocal_2877[5] = joaat("jet");
	vLocal_2535[7 /*3*/] = {-553.3315f, -2073.951f, 6.8909f};
	fLocal_993[7] = 0.0072f;
	fLocal_1029[7] = 0.0176f;
	fLocal_1065[7] = 0.9739f;
	fLocal_1101[7] = -0.2263f;
	iLocal_1822[7] = 54;
	fLocal_1137[7] = 0f;
	fLocal_1173[7] = 1f;
	iLocal_2877[7] = joaat("police3");
	vLocal_2535[8 /*3*/] = {-561.7264f, -2076.761f, 6.7664f};
	fLocal_993[8] = -0.027f;
	fLocal_1029[8] = 0.0016f;
	fLocal_1065[8] = 0.9169f;
	fLocal_1101[8] = -0.3981f;
	iLocal_1822[8] = 108;
	fLocal_1137[8] = 150f;
	fLocal_1173[8] = 1f;
	iLocal_2877[8] = joaat("police3");
	vLocal_2535[11 /*3*/] = {-1563.918f, -2745.409f, 13.5643f};
	fLocal_993[11] = -0.0022f;
	fLocal_1029[11] = -0.0019f;
	fLocal_1065[11] = 0.928f;
	fLocal_1101[11] = -0.3726f;
	iLocal_1822[11] = 111;
	fLocal_1137[11] = 36000f;
	fLocal_1173[11] = 1f;
	iLocal_2877[11] = joaat("police3");
	vLocal_2535[12 /*3*/] = {-1026.024f, -2336.396f, 13.5678f};
	fLocal_993[12] = -0.0083f;
	fLocal_1029[12] = -0.0054f;
	fLocal_1065[12] = 0.55f;
	fLocal_1101[12] = 0.8351f;
	iLocal_1822[12] = 112;
	fLocal_1137[12] = 60000f;
	fLocal_1173[12] = 1f;
	iLocal_2877[12] = joaat("police3");
	vLocal_2535[13 /*3*/] = {-1013.316f, -2340.457f, 13.5678f};
	fLocal_993[13] = -0.0086f;
	fLocal_1029[13] = -0.005f;
	fLocal_1065[13] = 0.5052f;
	fLocal_1101[13] = 0.8629f;
	iLocal_1822[13] = 113;
	fLocal_1137[13] = 60000f;
	fLocal_1173[13] = 1f;
	iLocal_2877[13] = joaat("police3");
	vLocal_2535[14 /*3*/] = {-1221.049f, -2731.169f, 13.5681f};
	fLocal_993[14] = -0.0083f;
	fLocal_1029[14] = -0.0057f;
	fLocal_1065[14] = 0.6469f;
	fLocal_1101[14] = 0.7625f;
	iLocal_1822[14] = 61;
	fLocal_1137[14] = 80000f;
	fLocal_1173[14] = 1f;
	iLocal_2877[14] = joaat("police3");
	vLocal_2535[15 /*3*/] = {-1227.203f, -2735.872f, 13.568f};
	fLocal_993[15] = -0.0041f;
	fLocal_1029[15] = -0.0091f;
	fLocal_1065[15] = 0.9133f;
	fLocal_1101[15] = 0.4072f;
	iLocal_1822[15] = 62;
	fLocal_1137[15] = 80000f;
	fLocal_1173[15] = 1f;
	iLocal_2877[15] = joaat("police3");
	vLocal_2535[19 /*3*/] = {-1240.048f, -2203.457f, 14.0347f};
	fLocal_993[19] = 0.0002f;
	fLocal_1029[19] = 0.0018f;
	fLocal_1065[19] = 0.9611f;
	fLocal_1101[19] = -0.2763f;
	iLocal_1822[19] = 66;
	fLocal_1137[19] = 55125f;
	fLocal_1173[19] = 1f;
	iLocal_2877[19] = 1938952078;
	vLocal_2535[20 /*3*/] = {-438.0192f, -2060.751f, 73.6354f};
	fLocal_993[20] = -0.0005f;
	fLocal_1029[20] = 0.0018f;
	fLocal_1065[20] = 0.9559f;
	fLocal_1101[20] = 0.2938f;
	iLocal_1822[20] = 67;
	fLocal_1137[20] = 0f;
	fLocal_1173[20] = 1f;
	iLocal_2877[20] = joaat("maverick");
	vLocal_2535[21 /*3*/] = {-546.8047f, -2187.925f, 5.8819f};
	fLocal_993[21] = -0.0252f;
	fLocal_1029[21] = -0.0034f;
	fLocal_1065[21] = 0.9369f;
	fLocal_1101[21] = 0.3487f;
	iLocal_1822[21] = 5;
	fLocal_1137[21] = 3834f;
	fLocal_1173[21] = 1f;
	iLocal_2877[21] = joaat("blista");
	vLocal_2535[22 /*3*/] = {-1001.674f, -2947.732f, 13.3947f};
	fLocal_993[22] = 0.001f;
	fLocal_1029[22] = -0.0004f;
	fLocal_1065[22] = 0.8616f;
	fLocal_1101[22] = 0.5075f;
	iLocal_1822[22] = 6;
	fLocal_1137[22] = 20176f;
	fLocal_1173[22] = 1f;
	iLocal_2877[22] = joaat("airtug");
	vLocal_2535[23 /*3*/] = {-1249.588f, -2525.9f, 13.3942f};
	fLocal_993[23] = 0.001f;
	fLocal_1029[23] = -0.0001f;
	fLocal_1065[23] = 0.9749f;
	fLocal_1101[23] = -0.2228f;
	iLocal_1822[23] = 7;
	fLocal_1137[23] = 48538f;
	fLocal_1173[23] = 1f;
	iLocal_2877[23] = joaat("airtug");
	vLocal_2535[24 /*3*/] = {-1362.538f, -2625.609f, 13.3895f};
	fLocal_993[24] = -0.0001f;
	fLocal_1029[24] = 0.0018f;
	fLocal_1065[24] = 0.5344f;
	fLocal_1101[24] = 0.8452f;
	iLocal_1822[24] = 8;
	fLocal_1137[24] = 75112f;
	fLocal_1173[24] = 1f;
	iLocal_2877[24] = joaat("airtug");
}

void func_311(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	
	StringCopy(&cLocal_2668, sParam0, 64);
	iLocal_85 = true;
	iLocal_90 = 0;
	iLocal_1946 = 0;
	iLocal_1947 = 0;
	iLocal_1948 = 0;
	iLocal_1949 = iParam1;
	iLocal_1950 = 0;
	iLocal_1951 = 0;
	iLocal_1952 = 0;
	iLocal_1956 = 0;
	iLocal_1959 = 0;
	iLocal_1957 = -1;
	iLocal_1958 = -1;
	iLocal_1960 = 0;
	iLocal_1961 = 0;
	fLocal_1289 = 0f;
	fLocal_1290 = 0f;
	fLocal_1275 = 0f;
	iLocal_91 = 0;
	if (is_player_playing(player_id()))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
		vLocal_2644.x = vVar0.x - 100f;
		vLocal_2644.y = vVar0.y - 100f;
		vLocal_2644.z = vVar0.z - 100f;
		vLocal_2647.x = vVar0.x + 100f;
		vLocal_2647.y = vVar0.y + 100f;
		vLocal_2647.z = vVar0.z + 100f;
		set_roads_in_area(vLocal_2644, vLocal_2647, false, 0);
		if (iParam2)
		{
			clear_area_of_vehicles(vVar0, 500f, 0, 0, 0, 0, false);
		}
	}
	add_relationship_group("rgh_traffic", &iLocal_2684);
	func_300();
	if (iParam3)
	{
		func_163(1);
	}
	if (is_player_playing(player_id()))
	{
		set_dispatch_cops_for_player(player_id(), 0);
		set_create_random_cops(false);
	}
	func_168();
}

void func_312()
{
	if (iLocal_3181 == 0)
	{
		_0x293220DA1B46CEBC(0f, 14f, 4);
		if (iLocal_3345 == 1)
		{
			func_104();
			iLocal_3345 = 0;
		}
		iLocal_3359 = 0;
		iLocal_3360 = 0;
		iLocal_3362 = 0;
		iLocal_3364 = 0;
		iLocal_3379 = 0;
		iLocal_3327 = 0;
		iLocal_3328 = 0;
		iLocal_3331 = 0;
		iLocal_3333 = 0;
		iLocal_3334 = 0;
		iLocal_3335 = 0;
		iLocal_3336 = 0;
		iLocal_3337 = 0;
		iLocal_3338 = 0;
		iLocal_3343 = 0;
		iLocal_3352 = 0;
		iLocal_3350 = 0;
		iLocal_3439 = 0;
		iLocal_3442 = 0;
		iLocal_3523 = 0;
		iLocal_3378 = 0;
		iLocal_3351 = 1;
		iLocal_3185 = 0;
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_3361 = 1;
		}
		else
		{
			iLocal_3361 = 0;
		}
		func_17(&uLocal_3578, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		set_ignore_no_gps_flag(1);
		set_roads_in_area(-617f, -2274f, 0f, -406.01f, -2044f, 15f, false, 1);
		iLocal_3188 = GAMEPLAY::GET_GAME_TIMER();
		if (is_screen_faded_out())
		{
			if (!func_24())
			{
				load_scene(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			func_21(0, -1, 1);
			set_vehicle_as_no_longer_needed(&iLocal_3259);
			set_vehicle_as_no_longer_needed(&iLocal_3276);
			set_vehicle_as_no_longer_needed(&iLocal_3277);
		}
		if (!is_screen_faded_in())
		{
			do_screen_fade_in(800);
		}
		if (!does_blip_exist(iLocal_3287))
		{
			iLocal_3287 = func_317(vLocal_3300, 0);
		}
		trigger_music_event("TRV4_GAMEPLAY_START");
		vLocal_3318 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3350 == 0 && iLocal_3364 == 1)
		{
			if (!func_231() || !is_subtitle_preference_switched_on())
			{
				func_20("TRV4_GO1", 7500, 1);
				iLocal_3350 = 1;
			}
		}
		if (iLocal_3378 == 0 && !func_316())
		{
			if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_3300, 1) < 800f)
			{
				iLocal_3187 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(false, 2);
				if (iLocal_3187 == 0)
				{
					play_police_report("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					_0x293220DA1B46CEBC(0f, 6f, 3);
					iLocal_3378 = 1;
				}
				if (iLocal_3187 == 1)
				{
					play_police_report("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					_0x293220DA1B46CEBC(0f, 6f, 3);
					iLocal_3378 = 1;
				}
			}
		}
		if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_3300, 1) < 600f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio")))
				{
					iLocal_3258 = create_vehicle(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, 1, true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_3258, false, true, true, true, false, false, 0, false);
					set_vehicle_colours(iLocal_3258, 27, 27);
					set_model_as_no_longer_needed(joaat("cogcabrio"));
					_0x153973AB99FE8980(iLocal_3258, "SOL_3_MOLLY_CAR_Group", 0f);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
			{
				STREAMING::REQUEST_MODEL(joaat("ig_molly"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("ig_molly")))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
					{
						if (is_vehicle_driveable(iLocal_3258, 0))
						{
							iLocal_3222 = PED::CREATE_PED_inside_vehicle(iLocal_3258, 26, joaat("ig_molly"), -1, 1, true);
							set_entity_invincible(iLocal_3222, true);
							set_ped_can_be_targetted(iLocal_3222, false);
							set_model_as_no_longer_needed(joaat("cogcabrio"));
							set_model_as_no_longer_needed(joaat("ig_molly"));
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3222, 1862763509);
							iLocal_3360 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
			{
				PED::DELETE_PED(&iLocal_3222);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				delete_vehicle(&iLocal_3258);
			}
		}
		if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_3300, 1) < 500f)
		{
			if (iLocal_3362 == 0)
			{
				iLocal_3293 = unk_0x67D02A194A2FC2BD("BREAKING_NEWS");
				STREAMING::REQUEST_MODEL(joaat("police3"));
				STREAMING::REQUEST_MODEL(joaat("maverick"));
				STREAMING::REQUEST_MODEL(joaat("bison"));
				STREAMING::REQUEST_MODEL(joaat("blista"));
				request_vehicle_recording(45, "BB_Chase");
				request_vehicle_recording(35, "BB_Chase");
				request_vehicle_recording(2, "BB_Chase");
				request_vehicle_recording(54, "BB_Chase");
				request_vehicle_recording(55, "BB_Chase");
				request_vehicle_recording(67, "BB_Chase");
				func_160(1, "BB_Chase");
				prepare_music_event("TRV4_CHASE");
				iLocal_3362 = 1;
			}
		}
		else if (iLocal_3362 == 1)
		{
			set_model_as_no_longer_needed(joaat("police3"));
			set_model_as_no_longer_needed(joaat("maverick"));
			set_model_as_no_longer_needed(joaat("bison"));
			set_model_as_no_longer_needed(joaat("blista"));
			remove_vehicle_recording(45, "BB_Chase");
			remove_vehicle_recording(35, "BB_Chase");
			remove_vehicle_recording(2, "BB_Chase");
			remove_vehicle_recording(54, "BB_Chase");
			remove_vehicle_recording(55, "BB_Chase");
			remove_vehicle_recording(67, "BB_Chase");
			func_315(1, "BB_Chase");
			cancel_music_event("TRV4_CHASE");
			iLocal_3362 = 0;
		}
		if (iLocal_3379 == 0)
		{
			if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3188 + 135000)
			{
				clear_prints();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_3188 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_3379 = 1;
			}
		}
		if (iLocal_3379 == 1)
		{
			if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3188 + 135000)
			{
				func_209("TRV4_FAIL1");
			}
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!is_audio_scene_active("SOL_3_DRIVE_TO_AIRPORT"))
			{
				start_audio_scene("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_3439 == 0)
			{
				trigger_music_event("TRV4_CAR_ENTERED");
				iLocal_3439 = 1;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
			{
				iLocal_3259 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3259, false, true, false, false, false, false, 0, false);
				add_vehicle_upsidedown_check(iLocal_3259);
				set_vehicle_has_strong_axles(iLocal_3259, true);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
		{
			if (is_vehicle_driveable(iLocal_3259, 0))
			{
				if (iLocal_3361 == 0)
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_3259, false, false, false, false, false, false, 0, false);
					iLocal_3361 = 1;
				}
				if (iLocal_3353 == 1)
				{
					remove_vehicle_upsidedown_check(iLocal_3259);
					iLocal_3353 = 0;
				}
				if (does_entity_belong_to_this_script(iLocal_3259, 1))
				{
					set_vehicle_as_no_longer_needed(&iLocal_3259);
				}
			}
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_3442 == 0)
			{
				_0x3D3D15AF7BCAAF83(156, 1, 0);
				_0xA905192A6781C41B(-244f, -1842.74f, 28.48f);
				_0xA905192A6781C41B(-1.5f, -2014.4f, 11.5f);
				_0xA905192A6781C41B(-498.7f, -2136.5f, 8.4f);
				_0x3DDA37128DD1ACA8(1);
				iLocal_3442 = 1;
			}
		}
		else if (iLocal_3442 == 1)
		{
			_0x3DDA37128DD1ACA8(0);
			iLocal_3442 = 0;
		}
		if ((iLocal_3362 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_3258)) && ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
		{
			if (is_vehicle_driveable(iLocal_3258, 0))
			{
				if (has_entity_been_damaged_by_weapon(iLocal_3258, func_314(PLAYER::PLAYER_PED_ID()), 0))
				{
					func_313();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (is_vehicle_driveable(iLocal_3258, 0))
			{
				if (is_player_free_aiming_at_entity(player_id(), iLocal_3258))
				{
					func_313();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (is_vehicle_driveable(iLocal_3258, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_3258, 1), 200f, 132f, 100f, false, true, 0))
				{
					iLocal_3359 = 0;
					func_313();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (is_vehicle_driveable(iLocal_3258, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, false, true, 0))
				{
					iLocal_3359 = 1;
					func_313();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (is_vehicle_driveable(iLocal_3258, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, false, true, 0))
				{
					_0x67EEDEA1B9BAFD94();
					set_ignore_no_gps_flag(0);
					iLocal_3359 = 1;
					func_313();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
		}
	}
}

void func_313()
{
	while (((!STREAMING::HAS_MODEL_LOADED(joaat("police3")) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison"))) || !STREAMING::HAS_MODEL_LOADED(joaat("blista")))
	{
		wait(false);
	}
	while (((((!has_vehicle_recording_been_loaded(45, "BB_Chase") || !has_vehicle_recording_been_loaded(35, "BB_Chase")) || !has_vehicle_recording_been_loaded(2, "BB_Chase")) || !has_vehicle_recording_been_loaded(54, "BB_Chase")) || !has_vehicle_recording_been_loaded(55, "BB_Chase")) || !has_vehicle_recording_been_loaded(67, "BB_Chase"))
	{
		wait(false);
	}
}

auto func_314(int iParam0)
{
	auto uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

void func_315(int iParam0, char* sParam1)
{
	remove_vehicle_recording(iParam0, sParam1);
}

bool func_316()
{
	if (Global_15712 == 4)
	{
		if (is_mobile_phone_call_ongoing())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

int func_317(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_206(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

void func_318()
{
	if (iLocal_3181 == 0)
	{
		iLocal_3338 = 1;
		iLocal_3467 = 0;
		iLocal_3488 = 0;
		iLocal_3506 = 0;
		while (iLocal_3338 == 1)
		{
			_0x208784099002BC30("M_LegalTrouble", 0);
			switch (iLocal_3183)
			{
				case 0:
					request_cutscene("sol_3_int", 8);
					if (func_362())
					{
						while (!func_334(61, &uLocal_3743, 0, 1, 0, 0, 0))
						{
							wait(false);
						}
						iLocal_3438 = 0;
						set_player_control(player_id(), false, 0);
						func_193(1, 1, 1, 0);
						register_entity_for_cutscene(PLAYER::PLAYER_PED_ID(), "Michael", 0, false, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Global_88108[0]))
						{
							if (is_vehicle_driveable(Global_88108[0], 0))
							{
								set_entity_as_mission_entity(Global_88108[0], true, 1);
								iLocal_3259 = Global_88108[0];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_88108[1]))
						{
							if (is_vehicle_driveable(Global_88108[1], 0))
							{
								set_entity_as_mission_entity(Global_88108[1], true, 1);
								iLocal_3276 = Global_88108[1];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_88108[2]))
						{
							if (is_vehicle_driveable(Global_88108[2], 0))
							{
								set_entity_as_mission_entity(Global_88108[2], true, 1);
								iLocal_3277 = Global_88108[2];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_88108[3]))
						{
							if (is_vehicle_driveable(Global_88108[3], 0))
							{
								set_entity_as_mission_entity(Global_88108[3], true, 1);
								iLocal_3278 = Global_88108[3];
							}
						}
						start_cutscene(0);
						_0x48621C9FCA3EBD28(4);
						func_333();
						if (!is_screen_faded_in())
						{
							do_screen_fade_in(250);
						}
						iLocal_3183++;
					}
					break;
				
				case 1:
					if (iLocal_3467 == 0)
					{
						if (is_cutscene_active())
						{
							if (iLocal_3506 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_3278))
								{
									if (is_vehicle_driveable(iLocal_3278, 0))
									{
										if (is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(iLocal_3278)))
										{
											_set_vehicle_landing_gear(iLocal_3278, 2);
											set_entity_coords(iLocal_3278, -1048.722f, -506.8387f, 35.0386f, 1, false, 0, 1);
											set_entity_heading(iLocal_3278, 357.1288f);
											set_vehicle_doors_shut(iLocal_3278, 1);
											set_vehicle_on_ground_properly(iLocal_3278);
											func_323(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
											iLocal_3506 = 1;
										}
										if (((is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(iLocal_3278)) || is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iLocal_3278))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3278))) || is_this_model_a_quadbike(ENTITY::GET_ENTITY_MODEL(iLocal_3278)))
										{
											if ((((((((ENTITY::GET_ENTITY_MODEL(iLocal_3278) != joaat("bus") && ENTITY::GET_ENTITY_MODEL(iLocal_3278) != joaat("pounder")) && ENTITY::GET_ENTITY_MODEL(iLocal_3278) != joaat("packer")) && ENTITY::GET_ENTITY_MODEL(iLocal_3278) != joaat("airbus")) && ENTITY::GET_ENTITY_MODEL(iLocal_3278) != joaat("ambulance")) && ENTITY::GET_ENTITY_MODEL(iLocal_3278) != joaat("barracks")) && ENTITY::GET_ENTITY_MODEL(iLocal_3278) != joaat("barracks2")) && ENTITY::GET_ENTITY_MODEL(iLocal_3278) != joaat("benson")) && ENTITY::GET_ENTITY_MODEL(iLocal_3278) != joaat("biff"))
											{
												set_entity_coords(iLocal_3278, -1027.657f, -486.6945f, 35.9571f, 1, false, 0, 1);
												set_entity_heading(iLocal_3278, 207.7515f);
												set_vehicle_on_ground_properly(iLocal_3278);
												func_323(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
												iLocal_3506 = 1;
											}
										}
										if ((((!is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(iLocal_3278)) && !is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(iLocal_3278))) && !is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iLocal_3278))) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3278))) && !is_this_model_a_quadbike(ENTITY::GET_ENTITY_MODEL(iLocal_3278)))
										{
											delete_vehicle(&iLocal_3278);
											iLocal_3506 = 1;
										}
									}
								}
							}
							func_321(&uLocal_3743, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_3467 = 1;
						}
					}
					if (iLocal_3438 == 0)
					{
						add_relationship_group("SecGuards", &iLocal_3576);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_3576);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3576, 1862763509);
						request_additional_text("TREV4", false);
						iLocal_3438 = 1;
					}
					if (iLocal_3488 == 0)
					{
						if (is_cutscene_playing())
						{
							clear_ped_wetness(PLAYER::PLAYER_PED_ID());
							clear_ped_blood_damage(PLAYER::PLAYER_PED_ID());
							reset_ped_visible_damage(PLAYER::PLAYER_PED_ID());
							if (get_cutscene_time() > 120000)
							{
								trigger_music_event("TRV4_START");
								iLocal_3488 = 1;
							}
						}
					}
					if (can_set_exit_state_for_registered_entity("Michael", false))
					{
						set_entity_coords(PLAYER::PLAYER_PED_ID(), -1012.268f, -480.0742f, 38.9757f, 1, false, 0, 1);
						set_entity_heading(PLAYER::PLAYER_PED_ID(), 121.4087f);
						simulate_player_input_gait(player_id(), 2f, 3000, 0, 1, 0);
						_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						force_ped_motion_state(PLAYER::PLAYER_PED_ID(), -530524, false, 0, 0);
					}
					if (can_set_exit_state_for_camera(0))
					{
						set_gameplay_cam_relative_heading(0f);
					}
					if (!is_cutscene_active())
					{
						func_320(61);
						if (iLocal_3488 == 0)
						{
							trigger_music_event("TRV4_START_CS_SKIP");
							iLocal_3488 = 1;
						}
						_0x81CBAE94390F9F89();
						func_193(0, 1, 1, 0);
						iLocal_3183++;
					}
					break;
				
				case 2:
					set_player_control(player_id(), true, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
					{
						if (is_vehicle_driveable(iLocal_3259, 0))
						{
							if (does_entity_belong_to_this_script(iLocal_3259, 1))
							{
								set_vehicle_as_no_longer_needed(&iLocal_3259);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
					{
						if (is_vehicle_driveable(iLocal_3276, 0))
						{
							if (does_entity_belong_to_this_script(iLocal_3276, 1))
							{
								set_vehicle_as_no_longer_needed(&iLocal_3276);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3277))
					{
						if (is_vehicle_driveable(iLocal_3277, 0))
						{
							if (does_entity_belong_to_this_script(iLocal_3277, 1))
							{
								set_vehicle_as_no_longer_needed(&iLocal_3277);
							}
						}
					}
					func_319();
					iLocal_3338 = 0;
					iLocal_3183 = 0;
					iLocal_3181 = 0;
					iLocal_3180 = 2;
					break;
			}
			wait(false);
		}
	}
}

void func_319()
{
	Global_55755 = 0;
}

void func_320(int iParam0)
{
	if (Global_88533 != -1)
	{
		if (iParam0 == Global_88533)
		{
			Global_88537 = 1;
			return;
		}
	}
}

void func_321(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		set_player_control(player_id(), is_player_control_on(player_id()), 64);
	}
	if (!is_cutscene_playing())
	{
		set_player_control(player_id(), !iParam1, 0);
	}
	if (iParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			remove_ped_helmet(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!iParam1 && iParam6)
	{
		_0xC819F3CBB62BF692(0, 0f, 3, 0);
	}
	else
	{
		render_script_cams(iParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (iParam1)
	{
		clear_help(1);
	}
	else
	{
		if (does_cam_exist(*uParam0.f_4))
		{
			if (is_cam_active(*uParam0.f_4))
			{
				set_cam_active(*uParam0.f_4, false);
			}
			destroy_cam(*uParam0.f_4, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			set_entity_visible(PLAYER::PLAYER_PED_ID(), true, 0);
		}
		iVar0 = get_players_last_vehicle();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			set_entity_visible(iVar0, true, 0);
		}
		release_named_script_audio_bank("TIME_LAPSE");
		if (is_audio_scene_active("TOD_SHIFT_SCENE"))
		{
			stop_sound(*uParam0.f_10);
			release_named_script_audio_bank("TIME_LAPSE");
			stop_audio_scene("TOD_SHIFT_SCENE");
		}
	}
	func_193(iParam1, 1, 0, 0);
	func_322();
	if (!iParam1 && iParam5)
	{
		if (*uParam0.f_5)
		{
			set_clock_time(*uParam0.f_7, false, false);
		}
		else
		{
			set_clock_time(*uParam0.f_8, false, false);
		}
	}
	if (!iParam1)
	{
		if (is_screen_faded_out())
		{
			do_screen_fade_in(250);
		}
	}
	if (!iParam1)
	{
		if (Global_101154.f_18807.f_4801 != -15)
		{
			Global_101154.f_18807.f_4801 = func_80();
		}
	}
}

void func_322()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		_remove_notification(Global_101154.f_12831[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

void func_323(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	auto uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_93091.f_4))
	{
		if (is_vehicle_driveable(Global_93091.f_4, 0))
		{
			if (func_332(24) != Global_93091.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_329(ENTITY::GET_ENTITY_COORDS(Global_93091.f_4, 1), iParam5, &vVar0, &uVar3))
					{
						vParam0 = {vVar0};
						fParam3 = uVar3;
					}
				}
				func_324(Global_93091.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_324(int iParam0, Vector3 vParam1, Vector3 fParam2, int iParam3, int iParam4)
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[25]) && is_vehicle_driveable(Global_68319.f_484[25], 0))
			{
				if (Global_68319.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!iParam6)
		{
			if ((is_big_vehicle(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_328(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_39(iParam0, &Var0);
		if (func_68(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
			fParam4 = get_entity_heading(iParam0);
		}
		if (iParam5 == 24)
		{
			if (GAMEPLAY::GET_HASH_KEY(get_this_script_name()) != joaat("vehicle_gen_controller"))
			{
				Global_69307 = GAMEPLAY::GET_HASH_KEY(get_this_script_name());
			}
		}
		func_326(iParam5, &Var0, vParam1, fParam4, func_34(iParam0));
		func_325(iParam5, iParam0, 0);
	}
}

void func_325(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_141(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 12) && !GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68319.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_69226 != -1 && Global_69226 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (is_vehicle_driveable(iParam1, 0))
		{
			if (!is_entity_a_mission_entity(iParam1))
			{
				set_entity_as_mission_entity(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_101154.f_18807.f_4801 = func_80();
			}
			if (iParam1 != Global_68319.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_332(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && is_vehicle_driveable(iVar0, 0)) && iParam1 != iVar0)
					{
						func_127(iVar0, 145);
					}
				}
				Global_69225 = iParam1;
				Global_69226 = iParam0;
				Global_69227 = iParam2;
			}
		}
	}
}

void func_326(int iParam0, auto uParam1, Vector3 vParam2, Vector3 fParam3, int iParam4)
{
	if (func_141(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 10))
		{
			func_327(iParam0);
			func_138(uParam1, &(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]));
			if (GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 11))
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_134(iParam0, 1);
		}
	}
}

void func_327(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_141(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iParam0]))
		{
			set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
			set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
			Global_68319.f_139[iParam0] = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			func_134(iParam0, 0);
		}
	}
}

void func_328(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_327(iParam0);
	func_134(iParam0, 0);
}

bool func_329(Vector3 vParam0, int iParam1, auto uParam2, auto uParam3)
{
	int iVar0;
	
	iVar0 = func_330(vParam0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = {-827.351f, 157.785f, 68.2143f};
			*uParam5 = 85.1509f;
			return true;
			break;
		
		case 1:
		case 2:
			*uParam4 = {1992.523f, 3813.916f, 31.1008f};
			*uParam5 = 122.1498f;
			return true;
			break;
		
		case 3:
			*uParam4 = {-1184.258f, -1496.556f, 3.3895f};
			*uParam5 = 303.2098f;
			return true;
			break;
		
		case 4:
			*uParam4 = {118.1067f, -1325.906f, 28.3706f};
			*uParam5 = 123.5016f;
			return true;
			break;
		
		case 5:
			*uParam4 = {-18.118f, -1455.126f, 29.5004f};
			*uParam5 = 273.2822f;
			return true;
			break;
		
		case 6:
			*uParam4 = {1.5947f, 543.4017f, 173.4644f};
			*uParam5 = 310.7556f;
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

int func_330(Vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= 10 - 1)
	{
		if (Global_86649[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86649[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_331(iVar0) || iParam4 == 0)
				{
					fVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vParam0, Global_86649[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_331(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[iParam0], false);
}

int func_332(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68319.f_139[iParam0];
}

void func_333()
{
	Global_55755 = 1;
}

int func_334(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<2> Var0;
	
	func_361(iParam0, &Var0);
	func_360(iParam0, &Var0, &(Var0.f_1));
	return func_335(uParam1, &Var0, iParam2, iParam3, iParam4, iParam5, iParam6);
}

bool func_335(auto uParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	Vector3 fVar1;
	int iVar2;
	Vector3 fVar3;
	int iVar4;
	Vector3 fVar5;
	
	*uParam0.f_7 = *uParam1;
	*uParam0.f_8 = *uParam1.f_1;
	if ((func_393(0) && !iParam2) && !iParam4)
	{
		if (*uParam0.f_5)
		{
			set_clock_time(*uParam0.f_7, false, false);
		}
		else
		{
			set_clock_time(*uParam0.f_8, false, false);
		}
		return true;
	}
	if (*uParam0.f_2 == 0)
	{
		if (*uParam0.f_7 != -1 && *uParam0.f_8 != -1)
		{
			if (iParam2 || !func_358(*uParam0.f_8, *uParam0.f_7))
			{
				if (request_ambient_audio_bank("TIME_LAPSE", 0))
				{
					*uParam0.f_6 = 0;
					*uParam0.f_2 = 1;
				}
			}
			else
			{
				*uParam0.f_2 = -1;
				return true;
			}
		}
		else
		{
			*uParam0.f_2 = -1;
			return true;
		}
	}
	hide_hud_and_radar_this_frame();
	hide_hud_component_this_frame(7);
	set_ped_density_multiplier_this_frame(0f);
	if (*uParam0.f_2 == 1)
	{
		if (iParam2)
		{
			destroy_cam(*uParam0.f_4, 0);
			*uParam0.f_4 = create_cam("DEFAULT_SPLINE_CAMERA", false);
			add_cam_spline_node(*uParam0.f_4, *uParam1.f_2, *uParam1.f_5, *uParam1.f_15, 3, 2);
			if (*uParam1.f_17 < 0)
			{
				add_cam_spline_node(*uParam0.f_4, *uParam1.f_8, *uParam1.f_11, *uParam1.f_15, 3, 2);
			}
			else
			{
				add_cam_spline_node(*uParam0.f_4, *uParam1.f_2, *uParam1.f_5, *uParam1.f_15, 3, 2);
			}
			set_cam_fov(*uParam0.f_4, *uParam1.f_14);
			set_cam_active(*uParam0.f_4, true);
			if (!iParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					set_entity_visible(PLAYER::PLAYER_PED_ID(), false, 0);
				}
				iVar0 = get_players_last_vehicle();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!is_entity_a_mission_entity(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, 0);
					}
					set_entity_visible(iVar0, false, 0);
				}
			}
			fVar1 = get_cam_far_clip(*uParam0.f_4);
			_0x23B59D8912F94246();
			clear_area_of_cops(*uParam1.f_2, fVar1, 0);
			remove_particle_fx_in_range(*uParam1.f_2, fVar1);
			remove_decals_in_range(*uParam1.f_2, fVar1);
			if (iParam3)
			{
				clear_area(*uParam1.f_2, 5000f, 1, 1, 0, false);
			}
			func_357(uParam0.f_1, 0, 0, 0, get_clock_day_of_month(), get_clock_month(), get_clock_year());
			func_321(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			*uParam0.f_2 = 2;
		}
		else if (!func_358(*uParam0.f_7, *uParam0.f_8))
		{
			if (*uParam0.f_5)
			{
				destroy_cam(*uParam0.f_4, 0);
				*uParam0.f_4 = create_cam("DEFAULT_SPLINE_CAMERA", false);
				add_cam_spline_node(*uParam0.f_4, *uParam1.f_2, *uParam1.f_5, *uParam1.f_15, 3, 2);
				if (*uParam1.f_17 < 0)
				{
					add_cam_spline_node(*uParam0.f_4, *uParam1.f_8, *uParam1.f_11, *uParam1.f_15, 3, 2);
				}
				else
				{
					add_cam_spline_node(*uParam0.f_4, *uParam1.f_2, *uParam1.f_5, *uParam1.f_15, 3, 2);
				}
				set_cam_fov(*uParam0.f_4, *uParam1.f_14);
				set_cam_active(*uParam0.f_4, true);
				if (!iParam6)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						set_entity_visible(PLAYER::PLAYER_PED_ID(), false, 0);
					}
					iVar2 = get_players_last_vehicle();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!is_entity_a_mission_entity(iVar2))
						{
							set_entity_as_mission_entity(iVar2, true, 0);
						}
						set_entity_visible(iVar2, false, 0);
					}
				}
				fVar3 = get_cam_far_clip(*uParam0.f_4);
				_0x23B59D8912F94246();
				clear_area_of_cops(*uParam1.f_2, fVar3, 0);
				remove_particle_fx_in_range(*uParam1.f_2, fVar3);
				remove_decals_in_range(*uParam1.f_2, fVar3);
				if (iParam3)
				{
					clear_area(*uParam1.f_2, 5000f, 1, 1, 0, false);
				}
				func_357(uParam0.f_1, 0, 0, 8, get_clock_day_of_month(), get_clock_month(), get_clock_year());
				func_321(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				*uParam0.f_2 = 2;
			}
			else
			{
				release_named_script_audio_bank("TIME_LAPSE");
				*uParam0.f_2 = -1;
				return true;
			}
		}
		else if (!*uParam0.f_5)
		{
			destroy_cam(*uParam0.f_4, 0);
			*uParam0.f_4 = create_cam("DEFAULT_SPLINE_CAMERA", false);
			add_cam_spline_node(*uParam0.f_4, *uParam1.f_2, *uParam1.f_5, *uParam1.f_15, 3, 2);
			if (*uParam1.f_17 < 0)
			{
				add_cam_spline_node(*uParam0.f_4, *uParam1.f_8, *uParam1.f_11, *uParam1.f_15, 3, 2);
			}
			else
			{
				add_cam_spline_node(*uParam0.f_4, *uParam1.f_2, *uParam1.f_5, *uParam1.f_15, 3, 2);
			}
			set_cam_fov(*uParam0.f_4, *uParam1.f_14);
			_0xD1B0F412F109EA5D(*uParam0.f_4, 3);
			set_cam_active(*uParam0.f_4, true);
			if (!iParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					set_entity_visible(PLAYER::PLAYER_PED_ID(), false, 0);
				}
				iVar4 = get_players_last_vehicle();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!is_entity_a_mission_entity(iVar4))
					{
						set_entity_as_mission_entity(iVar4, true, 0);
					}
					set_entity_visible(iVar4, false, 0);
				}
			}
			fVar5 = get_cam_far_clip(*uParam0.f_4);
			_0x23B59D8912F94246();
			clear_area_of_cops(*uParam1.f_2, fVar5, 0);
			remove_particle_fx_in_range(*uParam1.f_2, fVar5);
			remove_decals_in_range(*uParam1.f_2, fVar5);
			if (iParam3)
			{
				clear_area(*uParam1.f_2, 5000f, 0, 1, 0, false);
			}
			func_357(uParam0.f_1, 0, 0, 0, get_clock_day_of_month(), get_clock_month(), get_clock_year());
			func_321(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			*uParam0.f_2 = 2;
		}
		else
		{
			release_named_script_audio_bank("TIME_LAPSE");
			*uParam0.f_2 = -1;
			return true;
		}
	}
	if (*uParam0.f_2 == 2)
	{
		if (iParam3)
		{
			clear_area(*uParam1.f_2, 5000f, 0, 1, 0, false);
		}
		if (!*uParam0.f_5)
		{
			if (func_338(*uParam0.f_8, 0, uParam1.f_18, uParam1.f_22, uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (*uParam1.f_17 < 0)
				{
					*uParam0.f_9 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_2 = 3;
				}
				else
				{
					*uParam0.f_4 = create_cam("DEFAULT_SPLINE_CAMERA", false);
					add_cam_spline_node(*uParam0.f_4, *uParam1.f_2, *uParam1.f_5, *uParam1.f_15, 3, 2);
					add_cam_spline_node(*uParam0.f_4, *uParam1.f_8, *uParam1.f_11, *uParam1.f_15, 3, 2);
					set_cam_fov(*uParam0.f_4, *uParam1.f_14);
					_0xD1B0F412F109EA5D(*uParam0.f_4, 3);
					set_cam_active(*uParam0.f_4, true);
					*uParam0.f_9 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_2 = 22;
				}
			}
		}
		else if (func_338(*uParam0.f_7, 0, uParam1.f_18, uParam1.f_22, uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (*uParam1.f_17 < 0)
			{
				*uParam0.f_9 = GAMEPLAY::GET_GAME_TIMER();
				*uParam0.f_2 = 3;
			}
			else
			{
				*uParam0.f_4 = create_cam("DEFAULT_SPLINE_CAMERA", false);
				add_cam_spline_node(*uParam0.f_4, *uParam1.f_2, *uParam1.f_5, *uParam1.f_15, 3, 2);
				add_cam_spline_node(*uParam0.f_4, *uParam1.f_8, *uParam1.f_11, *uParam1.f_15, 3, 2);
				set_cam_fov(*uParam0.f_4, *uParam1.f_14);
				_0xD1B0F412F109EA5D(*uParam0.f_4, 3);
				set_cam_active(*uParam0.f_4, true);
				*uParam0.f_9 = GAMEPLAY::GET_GAME_TIMER();
				*uParam0.f_2 = 22;
			}
		}
		if (!iParam5)
		{
			if (func_336(1000) || *uParam0.f_6)
			{
				*uParam0.f_6 = 1;
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(250);
				}
				if (!is_screen_faded_out())
				{
					hide_hud_and_radar_this_frame();
					hide_hud_component_this_frame(7);
					return false;
				}
				if (*uParam0.f_3 != 0)
				{
					func_338(*uParam0.f_7, 0, uParam1.f_18, uParam1.f_22, uParam0, 1f, 0, 1, 1065353216);
				}
				*uParam0.f_2 = 4;
			}
		}
	}
	if (*uParam0.f_2 == 22)
	{
		if (iParam3)
		{
			clear_area(*uParam1.f_2, 5000f, 0, 1, 0, false);
		}
		if (does_cam_exist(*uParam0.f_4) && is_cam_interpolating(*uParam0.f_4))
		{
		}
		else
		{
			*uParam0.f_9 = GAMEPLAY::GET_GAME_TIMER();
			*uParam0.f_2 = 3;
		}
		if (!iParam5)
		{
			if (func_336(1000) || *uParam0.f_6)
			{
				*uParam0.f_6 = 1;
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(250);
				}
				if (!is_screen_faded_out())
				{
					hide_hud_and_radar_this_frame();
					hide_hud_component_this_frame(7);
					return false;
				}
				*uParam0.f_2 = 4;
			}
		}
	}
	if (*uParam0.f_2 == 3)
	{
		if (iParam3)
		{
			clear_area(*uParam1.f_2, 5000f, 0, 1, 0, false);
		}
		if (*uParam0.f_9 + 1000 > GAMEPLAY::GET_GAME_TIMER())
		{
			*uParam0.f_2 = 4;
		}
	}
	if (*uParam0.f_2 == 4)
	{
		*uParam0.f_6 = 0;
		*uParam0.f_2 = -1;
		return true;
	}
	if (*uParam0.f_2 == -1)
	{
		return true;
	}
	return false;
}

bool func_336(int iParam0)
{
	if (is_screen_faded_in())
	{
		if (GAMEPLAY::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			Global_27 = GAMEPLAY::GET_GAME_TIMER();
		}
		Global_28 = GAMEPLAY::GET_GAME_TIMER();
		if (GAMEPLAY::GET_GAME_TIMER() - Global_27 > iParam0)
		{
			if (func_337())
			{
				Global_27 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
	}
	return false;
}

bool func_337()
{
	if (is_pause_menu_active())
	{
		return false;
	}
	if (is_control_just_pressed(0, 18) || is_control_just_pressed(2, 18))
	{
		return true;
	}
	return false;
}

bool func_338(int iParam0, int iParam1, char* sParam2, char* sParam3, auto uParam4, float fParam5, int iParam6, int iParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	auto uVar6;
	auto uVar7;
	auto uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (*uParam4.f_3)
	{
		case 0:
			*uParam4 = func_80();
			iVar5 = func_80();
			func_88(&iVar5, iParam0);
			func_89(&iVar5, iParam1);
			func_90(&iVar5, 0);
			if (func_355(*uParam4, iVar5))
			{
				func_354(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_352(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			*uParam4.f_11 = iVar1 + iVar2 * 60 + iVar3 + iParam6 * 3600;
			func_345(to_float(*uParam4.f_11) / 3600f);
			if (iParam7)
			{
				_0x5F0F3F56635809EF(0.6f);
				_set_far_shadows_suppressed(0);
				_0x0AE73D8DF3A762B2(0);
			}
			func_344();
			*uParam4.f_10 = AUDIO::GET_SOUND_ID();
			play_sound_frontend(*uParam4.f_10, "TIME_LAPSE_MASTER", 0, 1);
			start_audio_scene("TOD_SHIFT_SCENE");
			func_322();
			*uParam4.f_3++;
			break;
		
		case 1:
		case 2:
			if ((does_cam_exist(*uParam4.f_4) && is_cam_interpolating(*uParam4.f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (does_cam_exist(*uParam4.f_4) && is_cam_interpolating(*uParam4.f_4))
				{
					fVar0 = get_cam_spline_phase(*uParam4.f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (*uParam4.f_3 == 1)
					{
						if (GAMEPLAY::GET_HASH_KEY(sParam2) != 0)
						{
							_set_weather_type_over_time(sParam2, fParam8);
						}
						if (GAMEPLAY::GET_HASH_KEY(sParam3) != 0)
						{
							_clear_cloud_hat();
							_set_cloud_hat_transition(sParam3, 0);
						}
						*uParam4.f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_354(&iVar5, *uParam4.f_11, 0, 0, 0, 0, 0);
				set_clock_time(func_343(iVar5), func_342(iVar5), func_341(iVar5));
				if (iParam7)
				{
					_0x03FC694AE06C5A20();
				}
				stop_sound(*uParam4.f_10);
				release_named_script_audio_bank("TIME_LAPSE");
				if (iParam7)
				{
					_0x0AE73D8DF3A762B2(1);
					_set_far_shadows_suppressed(1);
				}
				return true;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_340(fVar11 - fVar9 / fVar10 - fVar9, 0f, 1f);
			iVar4 = round(IntToFloat(*uParam4.f_11) * fVar12);
			iVar5 = *uParam4;
			func_354(&iVar5, iVar4, 0, 0, 0, 0, 0);
			set_clock_time(func_343(iVar5), func_342(iVar5), func_341(iVar5));
			if (func_339(iVar5) != get_clock_day_of_month())
			{
				set_clock_date(func_339(iVar5), func_87(iVar5), func_85(iVar5));
			}
			func_241();
			_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return false;
}

int func_339(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

float func_340(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_341(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_342(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_343(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

bool func_344()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return false;
	}
	if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return false;
	}
	set_veh_radio_station(iVar0, "OFF");
	return true;
}

void func_345(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_351(&(Global_101154.f_16793.f_175[iVar0 /*19*/].f_5)))
		{
			func_346(&(Global_101154.f_16793.f_175[iVar0 /*19*/].f_5), fParam0 * 60f);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_351(&(Global_101154.f_16793.f_362[iVar1 /*3*/])))
		{
			func_346(&(Global_101154.f_16793.f_362[iVar1 /*3*/]), fParam0 * 60f);
		}
		iVar1++;
	}
	skip_radio_forward();
}

void func_346(int iParam0, float fParam1)
{
	if (func_351(iParam0))
	{
		func_347(iParam0, func_349(iParam0) + fParam1);
	}
}

void func_347(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_348(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - fParam1;
	GAMEPLAY::SET_BIT(iParam0, true);
	GAMEPLAY::CLEAR_BIT(iParam0, 2);
	*iParam0.f_2 = 0f;
}

float func_348(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return to_float(iVar0) / 1000f;
	}
	return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
}

float func_349(auto uParam0)
{
	if (func_351(uParam0))
	{
		if (func_350(uParam0))
		{
			return *uParam0.f_2;
		}
		else
		{
			return func_348(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - *uParam0.f_1;
		}
	}
	return *uParam0.f_1;
}

int func_350(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

int func_351(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, true);
}

void func_352(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_355(iParam0, iParam1))
	{
		iVar0 = func_87(iParam1);
		iVar1 = func_85(iParam0);
		iVar2 = func_85(iParam0) - func_85(iParam1);
		iVar3 = func_87(iParam0) - func_87(iParam1);
		iVar4 = func_339(iParam0) - func_339(iParam1);
		iVar5 = func_343(iParam0) - func_343(iParam1);
		iVar6 = func_342(iParam0) - func_342(iParam1);
		iVar7 = func_341(iParam0) - func_341(iParam1);
	}
	else
	{
		iVar0 = func_87(iParam0);
		iVar1 = func_85(iParam1);
		iVar2 = func_85(iParam1) - func_85(iParam0);
		iVar3 = func_87(iParam1) - func_87(iParam0);
		iVar4 = func_339(iParam1) - func_339(iParam0);
		iVar5 = func_343(iParam1) - func_343(iParam0);
		iVar6 = func_342(iParam1) - func_342(iParam0);
		iVar7 = func_341(iParam1) - func_341(iParam0);
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6--;
	}
	while (iVar7 > 59)
	{
		iVar7 -= 60;
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5--;
	}
	while (iVar6 > 59)
	{
		iVar6 -= 60;
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4--;
	}
	while (iVar5 > 23)
	{
		iVar5 -= 24;
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2--;
		}
		iVar4 += func_84(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_353(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2--;
	}
	while (iVar3 > 12)
	{
		iVar3 -= 12;
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_353(Vector3 fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = fParam2 - fParam1;
	fParam0 -= IntToFloat(round(fParam0 - fParam1 / fVar0)) * fVar0;
	if (fParam0 < fParam1)
	{
		fParam0 += fVar0;
	}
	return fParam0;
}

void func_354(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_85(*iParam0);
	iVar1 = func_87(*iParam0);
	iVar2 = func_339(*iParam0);
	iVar3 = func_343(*iParam0);
	iVar4 = func_342(*iParam0);
	iVar5 = func_341(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 += iParam1;
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 -= 60;
	}
	iVar4 += iParam2;
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 -= 60;
	}
	iVar3 += iParam3;
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 -= 24;
	}
	iVar2 += iParam4;
	iVar6 = func_84(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_84(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_357(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_355(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_356(iParam1) || !func_356(iParam0))
	{
		return true;
	}
	iVar0 = func_85(iParam0);
	iVar1 = func_85(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_87(iParam0);
	iVar1 = func_87(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_339(iParam0);
	iVar1 = func_339(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_343(iParam0);
	iVar1 = func_343(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_342(iParam0);
	iVar1 = func_342(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_341(iParam0);
	iVar1 = func_341(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

bool func_356(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_341(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_342(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_343(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_85(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_87(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_339(iParam0);
	if (iVar5 < 1 || iVar5 > func_84(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_357(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_90(uParam0, iParam1);
	func_89(uParam0, iParam2);
	func_88(uParam0, iParam3);
	func_82(uParam0, iParam5);
	func_83(uParam0, iParam4);
	func_81(uParam0, iParam6);
}

int func_358(int iParam0, int iParam1)
{
	return func_359(TIME::GET_CLOCK_HOURS(), iParam0, iParam1);
}

bool func_359(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	iVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (iVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!iVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

void func_360(int iParam0, auto uParam1, auto uParam2)
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		
		default:
			*uParam1 = Global_82399[iParam0 /*34*/].f_14;
			*uParam2 = Global_82399[iParam0 /*34*/].f_13;
			break;
	}
}

void func_361(int iParam0, auto uParam1)
{
	*uParam1.f_17 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			*uParam1.f_2 = {-58.1338f, -1115.653f, 25.8856f};
			*uParam1.f_5 = {18.4907f, 0f, 3.566f};
			*uParam1.f_8 = {-58.3857f, -1115.083f, 26.0824f};
			*uParam1.f_11 = {18.4907f, 0f, 2.0628f};
			*uParam1.f_14 = 40.0256f;
			*uParam1.f_15 = 4000;
			StringCopy(uParam1.f_18, "EXTRASUNNY", 16);
			StringCopy(uParam1.f_22, "cirrocumulus", 16);
			*uParam1.f_16 = 0;
			break;
		
		case 17:
		case 18:
			*uParam1.f_2 = {-830.1f, 171.4f, 71.5f};
			*uParam1.f_5 = {17.5f, 0f, -76f};
			*uParam1.f_8 = {-829.5f, 171.6f, 71.7f};
			*uParam1.f_11 = {17.9f, 0f, -75.4f};
			*uParam1.f_14 = 47.9931f;
			*uParam1.f_15 = 6600;
			*uParam1.f_16 = 0;
			StringCopy(uParam1.f_18, "EXTRASUNNY", 16);
			StringCopy(uParam1.f_22, "cirrocumulus", 16);
			break;
		
		case 21:
		case 22:
			*uParam1.f_2 = {-776.5807f, 181.1033f, 72.2059f};
			*uParam1.f_5 = {11.8135f, 0f, 95.7275f};
			*uParam1.f_8 = {-776.8288f, 181.0926f, 72.2551f};
			*uParam1.f_11 = {11.8134f, 0f, 95.7284f};
			*uParam1.f_14 = 46.7255f;
			*uParam1.f_15 = 5500;
			*uParam1.f_16 = 0;
			StringCopy(uParam1.f_18, "EXTRASUNNY", 16);
			StringCopy(uParam1.f_22, "cirrocumulus", 16);
			break;
		
		case 20:
			switch (func_91())
			{
				case 0:
					*uParam1.f_2 = {-846.3013f, 186.777f, 72.0316f};
					*uParam1.f_5 = {4.202026f, 0f, -111.2882f};
					*uParam1.f_8 = {-846.1907f, 186.7339f, 72.0403f};
					*uParam1.f_11 = {4.202f, 0f, -111.2882f};
					*uParam1.f_14 = 47f;
					*uParam1.f_15 = 5500;
					*uParam1.f_16 = 0;
					break;
				
				case 2:
					*uParam1.f_2 = {-846.3013f, 186.777f, 72.0316f};
					*uParam1.f_5 = {4.202026f, 0f, -111.2882f};
					*uParam1.f_8 = {-846.1907f, 186.7339f, 72.0403f};
					*uParam1.f_11 = {4.202f, 0f, -111.2882f};
					*uParam1.f_14 = 47f;
					*uParam1.f_15 = 5500;
					*uParam1.f_16 = 0;
					break;
			}
			break;
		
		case 40:
			*uParam1.f_2 = {-8.0845f, -1450.367f, 36.8585f};
			*uParam1.f_5 = {13.3776f, 0f, 4.513f};
			*uParam1.f_8 = {-9.0519f, -1450.444f, 36.8585f};
			*uParam1.f_11 = {13.3776f, 0f, 4.513f};
			*uParam1.f_14 = 39.9659f;
			*uParam1.f_15 = 7200;
			*uParam1.f_16 = 0;
			break;
		
		case 27:
			*uParam1.f_2 = {-1576.132f, 5160.888f, 24.1175f};
			*uParam1.f_5 = {4.8389f, -0.011f, 92.1057f};
			*uParam1.f_8 = {-1576.132f, 5160.888f, 24.1175f};
			*uParam1.f_11 = {4.8389f, -0.011f, 92.1057f};
			*uParam1.f_14 = 40f;
			*uParam1.f_15 = 7200;
			*uParam1.f_16 = 0;
			break;
		
		case 43:
			*uParam1.f_2 = {-7.205f, -1471.656f, 31.1614f};
			*uParam1.f_5 = {9.3776f, 0f, 11.4737f};
			*uParam1.f_8 = {-7.2909f, -1471.232f, 31.2546f};
			*uParam1.f_11 = {9.3776f, 0f, 11.4737f};
			*uParam1.f_14 = 38.5265f;
			*uParam1.f_15 = 5000;
			*uParam1.f_16 = 0;
			break;
		
		case 61:
			*uParam1.f_2 = {-1060.658f, -464.0052f, 44.994f};
			*uParam1.f_5 = {5.6441f, 0f, -138.7474f};
			*uParam1.f_8 = {-1060.658f, -464.0052f, 44.994f};
			*uParam1.f_11 = {4.8242f, 0f, -118.3167f};
			*uParam1.f_14 = 37f;
			*uParam1.f_15 = 5000;
			*uParam1.f_16 = 0;
			break;
		
		case 91:
		case 93:
			*uParam1.f_2 = {1406.112f, 3590.231f, 34.4113f};
			*uParam1.f_5 = {17.5005f, 0f, 55.9579f};
			*uParam1.f_8 = {1405.673f, 3590.525f, 34.4113f};
			*uParam1.f_11 = {18.4979f, 0f, 55.9579f};
			*uParam1.f_14 = 56.3199f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			break;
		
		case 69:
		case 86:
		case 90:
			*uParam1.f_2 = {739.1493f, -990.3961f, 29.85194f};
			*uParam1.f_5 = {17.19917f, 0f, 44.21184f};
			*uParam1.f_8 = {738.4197f, -989.6462f, 30.17581f};
			*uParam1.f_11 = {17.19917f, 0f, 44.21184f};
			*uParam1.f_14 = 47.56362f;
			*uParam1.f_15 = 6000;
			StringCopy(uParam1.f_18, "EXTRASUNNY", 16);
			StringCopy(uParam1.f_22, "cirrocumulus", 16);
			*uParam1.f_16 = 0;
			break;
		
		case 70:
			*uParam1.f_2 = {2503.9f, -288.8f, 112.8f};
			*uParam1.f_5 = {-0.2f, 0f, -169.6f};
			*uParam1.f_8 = {2503.9f, -288.8f, 112.8f};
			*uParam1.f_11 = {-0.2f, 0f, -169.6f};
			*uParam1.f_14 = 47.6f;
			*uParam1.f_15 = 5000;
			StringCopy(uParam1.f_18, "EXTRASUNNY", 16);
			StringCopy(uParam1.f_22, "cirrocumulus", 16);
			*uParam1.f_16 = 1;
			break;
		
		case 45:
			*uParam1.f_2 = {-458.5666f, 1010.097f, 316.3736f};
			*uParam1.f_5 = {14.47186f, 0f, -18.28884f};
			*uParam1.f_8 = {-457.3f, 1011.6f, 316.9f};
			*uParam1.f_11 = {14.5f, 0f, -18.5f};
			*uParam1.f_14 = 50f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			break;
		
		case 49:
			*uParam1.f_2 = {-723.9982f, -155.7184f, 38.12362f};
			*uParam1.f_5 = {30.12048f, 0f, -99.11243f};
			*uParam1.f_8 = {-722.4385f, -155.7817f, 37.4443f};
			*uParam1.f_11 = {2.0429f, 0f, -101.5132f};
			*uParam1.f_14 = 45f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			break;
		
		case 9:
			switch (func_91())
			{
				case 2:
					*uParam1.f_2 = {416.3221f, -960.2586f, 30.6696f};
					*uParam1.f_5 = {21.5747f, 0f, -135.2969f};
					*uParam1.f_8 = {416.8894f, -960.832f, 30.9887f};
					*uParam1.f_11 = {21.9916f, 0f, -135.2969f};
					*uParam1.f_14 = 47.1057f;
					*uParam1.f_15 = 6000;
					*uParam1.f_16 = 0;
					break;
				
				case 1:
					*uParam1.f_2 = {1393.363f, -2052.581f, 65.4054f};
					*uParam1.f_5 = {2.5107f, 0f, 51.1167f};
					*uParam1.f_8 = {1393.456f, -2052.656f, 68.146f};
					*uParam1.f_11 = {2.5107f, 0f, 51.1167f};
					*uParam1.f_14 = 35.9859f;
					*uParam1.f_15 = 6000;
					*uParam1.f_16 = 0;
					break;
			}
			break;
		
		case 30:
			*uParam1.f_2 = {59.3f, -751.7f, 46.8f};
			*uParam1.f_5 = {61.9f, 0f, -63.8f};
			*uParam1.f_8 = {59.3f, -751.7f, 46.8f};
			*uParam1.f_11 = {61.9f, 0f, -63.8f};
			*uParam1.f_14 = 46.6f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			break;
		
		case 39:
			*uParam1.f_2 = {3841.93f, 4464.658f, 2.6587f};
			*uParam1.f_5 = {8.4859f, 0.0024f, 143.0775f};
			*uParam1.f_8 = {3842.54f, 4464.184f, 2.6587f};
			*uParam1.f_11 = {8.4859f, 0.0024f, 142.0089f};
			*uParam1.f_14 = 34.1544f;
			*uParam1.f_15 = 3000;
			*uParam1.f_16 = 0;
			break;
		
		case 71:
			*uParam1.f_2 = {-1193.1f, -1525.3f, 4.4f};
			*uParam1.f_5 = {9.4f, 0f, -78.8f};
			*uParam1.f_8 = {-1192.2f, -1525.1f, 4.4f};
			*uParam1.f_11 = {9.4f, 0f, -78.5f};
			*uParam1.f_14 = 30.4f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			break;
		
		case 74:
			*uParam1.f_2 = {-24.2f, -2417.6f, 7.8f};
			*uParam1.f_5 = {10.4f, 0f, 80.4f};
			*uParam1.f_8 = {-23.8f, -2414.8f, 7.8f};
			*uParam1.f_11 = {10.4f, 0f, 81.4f};
			*uParam1.f_14 = 48.1095f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			break;
		
		case 84:
		case 85:
		case 65:
			*uParam1.f_2 = {146.9733f, -1310.644f, 30.85177f};
			*uParam1.f_5 = {16.26885f, -2.1E-05f, 45.00475f};
			*uParam1.f_8 = {146.9733f, -1310.644f, 30.85177f};
			*uParam1.f_11 = {16.26885f, -2.1E-05f, 45.00475f};
			*uParam1.f_14 = 39.4027f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			break;
		
		case 62:
		case 15:
		case 16:
			*uParam1.f_2 = {1998.215f, 3816.983f, 33.0117f};
			*uParam1.f_5 = {5.9088f, 0f, 89.1989f};
			*uParam1.f_8 = {1997.154f, 3817.004f, 33.1215f};
			*uParam1.f_11 = {5.9088f, 0f, 89.1989f};
			*uParam1.f_14 = 36.8186f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			if (iParam0 == 62)
			{
				if (func_91() != 2)
				{
					*uParam1.f_2 = {0f, 0f, 0f};
					*uParam1.f_5 = {0f, 0f, 0f};
					*uParam1.f_8 = {0f, 0f, 0f};
					*uParam1.f_11 = {0f, 0f, 0f};
					*uParam1.f_14 = -1f;
					*uParam1.f_15 = -1;
					*uParam1.f_16 = 0;
				}
			}
			break;
		
		case 63:
			*uParam1.f_2 = {1576f, 3363.9f, 55.5f};
			*uParam1.f_5 = {0.5f, 0f, -123.8f};
			*uParam1.f_8 = {1575.2f, 3364.4f, 49.2f};
			*uParam1.f_11 = {-4.3f, 0f, -124.1f};
			*uParam1.f_14 = 50f;
			*uParam1.f_15 = 8000;
			*uParam1.f_16 = 0;
			break;
		
		case 64:
			*uParam1.f_2 = {1566f, 3378.8f, 42.8f};
			*uParam1.f_5 = {-2.4f, 0f, -126.3f};
			*uParam1.f_8 = {1567.6f, 3376.9f, 45f};
			*uParam1.f_11 = {1.6f, 0f, -124.6f};
			*uParam1.f_14 = 34.7f;
			*uParam1.f_15 = 8000;
			*uParam1.f_16 = 0;
			break;
		
		case 24:
			*uParam1.f_2 = {1339.573f, -2550.873f, 56.28254f};
			*uParam1.f_5 = {-2.348373f, -2.1E-05f, 159.736f};
			*uParam1.f_8 = {1334.491f, -2549.345f, 47.69109f};
			*uParam1.f_11 = {2.789334f, -2.1E-05f, -156.4397f};
			*uParam1.f_14 = 25.66f;
			*uParam1.f_15 = 8000;
			*uParam1.f_16 = 0;
			break;
		
		case 25:
			*uParam1.f_2 = {2383.651f, 2624.787f, 46.9527f};
			*uParam1.f_5 = {14.6191f, 0f, 64.366f};
			*uParam1.f_8 = {2383.929f, 2622.802f, 47.2707f};
			*uParam1.f_11 = {33.17714f, -0.13073f, 12.31436f};
			*uParam1.f_14 = 35.31843f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			break;
		
		case 26:
			*uParam1.f_2 = {1755.519f, -1474.981f, 126.1743f};
			*uParam1.f_5 = {4.5341f, 0f, 89.6405f};
			*uParam1.f_8 = {1772.26f, -1475.085f, 125.9465f};
			*uParam1.f_11 = {5.8327f, 0f, 89.6405f};
			*uParam1.f_14 = 32.7f;
			*uParam1.f_15 = 6500;
			*uParam1.f_16 = 0;
			break;
		
		case 3:
			*uParam1.f_2 = {-1514.257f, -947.7281f, 15.0253f};
			*uParam1.f_5 = {-3.5807f, -0.0001f, -46.3209f};
			*uParam1.f_8 = {-1512.601f, -949.2796f, 14.8827f};
			*uParam1.f_11 = {-4.7682f, -0.0001f, -34.1393f};
			*uParam1.f_14 = 29.9555f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			break;
		
		case 4:
			*uParam1.f_2 = {-698.2578f, -934.4238f, 31.6909f};
			*uParam1.f_5 = {-22.0467f, 0f, 32.1888f};
			*uParam1.f_8 = {-697.8695f, -935.0406f, 31.9861f};
			*uParam1.f_11 = {-20.6093f, 0f, 32.1888f};
			*uParam1.f_14 = 30f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			break;
		
		case 5:
			*uParam1.f_2 = {221.8613f, -830.6434f, 45.3154f};
			*uParam1.f_5 = {-13.9263f, 0f, 140.7092f};
			*uParam1.f_8 = {227.5233f, -832.8285f, 45.3154f};
			*uParam1.f_11 = {-13.9263f, 0f, 140.7092f};
			*uParam1.f_14 = 35f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			break;
		
		case 6:
			*uParam1.f_2 = {-23.3747f, -120.3161f, 64.139f};
			*uParam1.f_5 = {-5.7232f, 0f, 5.1015f};
			*uParam1.f_8 = {-22.5824f, -122.52f, 64.139f};
			*uParam1.f_11 = {-5.7232f, 0f, 6.6362f};
			*uParam1.f_14 = 35f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			break;
		
		case 7:
			*uParam1.f_2 = {803.5977f, -1075.869f, 37.1981f};
			*uParam1.f_5 = {-10.7685f, 0f, -38.1705f};
			*uParam1.f_8 = {803.5977f, -1075.869f, 32.7981f};
			*uParam1.f_11 = {-10.7685f, 0f, -38.1705f};
			*uParam1.f_14 = 35f;
			*uParam1.f_15 = 6000;
			*uParam1.f_16 = 0;
			break;
		
		default:
			*uParam1.f_2 = {0f, 0f, 0f};
			*uParam1.f_5 = {0f, 0f, 0f};
			*uParam1.f_8 = {0f, 0f, 0f};
			*uParam1.f_11 = {0f, 0f, 0f};
			*uParam1.f_14 = -1f;
			*uParam1.f_15 = -1;
			*uParam1.f_16 = 0;
			break;
	}
	if (GAMEPLAY::GET_HASH_KEY("RAIN") == _get_current_weather_type())
	{
		if (is_string_null_or_empty(uParam1.f_18))
		{
			StringCopy(uParam1.f_18, "EXTRASUNNY", 16);
		}
		if (is_string_null_or_empty(uParam1.f_22))
		{
			StringCopy(uParam1.f_22, "cirrocumulus", 16);
		}
	}
}

int func_362()
{
	int iVar0;
	
	iVar0 = has_cutscene_loaded();
	if (!Global_69488)
	{
		if (!iVar0)
		{
			Global_69488 = 1;
		}
	}
	return iVar0;
}

void func_363()
{
	set_player_control(player_id(), true, 0);
	if (!func_23())
	{
		if (func_393(0))
		{
			set_player_wanted_level(player_id(), false, 0);
			set_player_wanted_level_now(player_id(), 0);
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("surano"));
			STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) || !STREAMING::HAS_MODEL_LOADED(joaat("surano"))) || !STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				wait(false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
			{
				clear_area(vLocal_3294, 5f, 1, 0, 0, false);
				iLocal_3259 = create_vehicle(joaat("rapidgt"), vLocal_3294, fLocal_3321, 1, true);
				set_vehicle_colours(iLocal_3259, 112, 112);
				ENTITY::SET_ENTITY_HEALTH(iLocal_3259, 3000);
				set_vehicle_strong(iLocal_3259, true);
				set_model_as_no_longer_needed(joaat("rapidgt"));
				set_vehicle_model_is_suppressed(joaat("rapidgt"), true);
				_0x3910051CCECDB00C(iLocal_3259, true);
				set_vehicle_has_strong_axles(iLocal_3259, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("surano")))
				{
					clear_area(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, false);
					iLocal_3276 = create_vehicle(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, true);
					set_vehicle_colours(iLocal_3276, false, false);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3276, 3000);
					set_vehicle_strong(iLocal_3276, true);
					set_model_as_no_longer_needed(joaat("surano"));
					set_vehicle_model_is_suppressed(joaat("surano"), true);
					set_vehicle_has_strong_axles(iLocal_3276, true);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3277))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
				{
					clear_area(vLocal_3294, 5f, 1, 0, 0, false);
					iLocal_3277 = create_vehicle(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, true);
					set_vehicle_colours(iLocal_3277, 89, 89);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3277, 3000);
					set_vehicle_strong(iLocal_3277, true);
					set_model_as_no_longer_needed(joaat("carbonizzare"));
					set_vehicle_model_is_suppressed(joaat("carbonizzare"), true);
					set_vehicle_has_strong_axles(iLocal_3277, true);
				}
			}
		}
		iLocal_3181 = 0;
		iLocal_3183 = 0;
		iLocal_3345 = 0;
		iLocal_3180 = 1;
	}
	else
	{
		add_relationship_group("SecGuards", &iLocal_3576);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_3576);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3576, 1862763509);
		if (Global_85788 == 1)
		{
			if (func_366() == 0)
			{
				func_365(vLocal_3312, fLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				trigger_music_event("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_366() == 1)
			{
				func_365(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				trigger_music_event("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_366() == 2)
			{
				func_365(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				trigger_music_event("TRV4_EVADE_RT");
				iLocal_3180 = 8;
			}
			if (func_366() == 3)
			{
				func_365(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 1, 0);
				func_364();
			}
		}
		else
		{
			if (func_366() == 0)
			{
				func_365(-1019.579f, -484.872f, 36.0795f, 93.7701f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				trigger_music_event("TRV4_START_RT");
				iLocal_3180 = 2;
			}
			if (func_366() == 1)
			{
				func_365(vLocal_3312, fLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				trigger_music_event("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_366() == 2)
			{
				func_365(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				trigger_music_event("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_366() == 3)
			{
				func_365(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				trigger_music_event("TRV4_EVADE_RT");
				iLocal_3180 = 8;
			}
		}
		request_additional_text("TREV4", false);
		while (!has_additional_text_loaded(false))
		{
			wait(false);
		}
	}
}

void func_364()
{
	if (iLocal_3181 == 0)
	{
		clear_area(-920.0547f, -2744.662f, 12.8434f, 20f, 1, 0, 0, false);
		set_player_wanted_level(player_id(), false, 0);
		set_player_wanted_level_now(player_id(), 0);
		iLocal_3181++;
	}
	if (iLocal_3181 == 1)
	{
		load_scene(-920.0547f, -2744.662f, 12.8434f);
		if (!is_screen_faded_in())
		{
			func_21(0, -1, 1);
			do_screen_fade_in(800);
		}
		func_6();
	}
}

void func_365(Vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_23())
	{
		set_this_script_can_be_paused(0);
		GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 2);
		set_game_paused(true);
		if (is_player_playing(player_id()))
		{
			set_player_control(player_id(), false, 0);
		}
		Global_91274 = {vParam0};
		Global_91277 = fParam3;
		Global_91273 = 1;
		if (iParam4 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_91278.f_20), 14);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 14);
		}
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_91278.f_20), 24);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 24);
		}
		func_22(1);
	}
}

int func_366()
{
	if (!Global_91278 == 10 && !Global_91278 == 9)
	{
		return 0;
	}
	return Global_91278.f_2;
}

void func_367()
{
	if (iLocal_3490[0] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[7]))
		{
			if (is_vehicle_driveable(iLocal_3121[7], 0))
			{
				_0x153973AB99FE8980(iLocal_3121[7], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3490[0] = 1;
			}
		}
	}
	if (iLocal_3498[0] == 0)
	{
		if (iLocal_3490[0] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[7]))
			{
				if (!is_vehicle_driveable(iLocal_3121[7], 0))
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[7], 0f);
					iLocal_3498[0] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[7], 0f);
					iLocal_3498[0] = 1;
				}
			}
			else
			{
				iLocal_3498[0] = 1;
			}
		}
	}
	if (iLocal_3490[1] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[8]))
		{
			if (is_vehicle_driveable(iLocal_3121[8], 0))
			{
				_0x153973AB99FE8980(iLocal_3121[8], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3490[1] = 1;
			}
		}
	}
	if (iLocal_3498[1] == 0)
	{
		if (iLocal_3490[1] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[8]))
			{
				if (!is_vehicle_driveable(iLocal_3121[8], 0))
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[8], 0f);
					iLocal_3498[1] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[8], 0f);
					iLocal_3498[1] = 1;
				}
			}
			else
			{
				iLocal_3498[1] = 1;
			}
		}
	}
	if (iLocal_3490[2] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[11]))
		{
			if (is_vehicle_driveable(iLocal_3121[11], 0))
			{
				_0x153973AB99FE8980(iLocal_3121[11], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3490[2] = 1;
			}
		}
	}
	if (iLocal_3498[2] == 0)
	{
		if (iLocal_3490[2] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[11]))
			{
				if (!is_vehicle_driveable(iLocal_3121[11], 0))
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[11], 0f);
					iLocal_3498[2] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[11], 0f);
					iLocal_3498[2] = 1;
				}
			}
			else
			{
				iLocal_3498[2] = 1;
			}
		}
	}
	if (iLocal_3490[3] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[12]))
		{
			if (is_vehicle_driveable(iLocal_3121[12], 0))
			{
				_0x153973AB99FE8980(iLocal_3121[12], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3490[3] = 1;
			}
		}
	}
	if (iLocal_3498[3] == 0)
	{
		if (iLocal_3490[3] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[12]))
			{
				if (!is_vehicle_driveable(iLocal_3121[12], 0))
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[12], 0f);
					iLocal_3498[3] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[12], 0f);
					iLocal_3498[3] = 1;
				}
			}
			else
			{
				iLocal_3498[3] = 1;
			}
		}
	}
	if (iLocal_3490[4] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[13]))
		{
			if (is_vehicle_driveable(iLocal_3121[13], 0))
			{
				_0x153973AB99FE8980(iLocal_3121[13], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3490[4] = 1;
			}
		}
	}
	if (iLocal_3498[4] == 0)
	{
		if (iLocal_3490[4] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[13]))
			{
				if (!is_vehicle_driveable(iLocal_3121[13], 0))
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[13], 0f);
					iLocal_3498[4] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[13], 0f);
					iLocal_3498[4] = 1;
				}
			}
			else
			{
				iLocal_3498[4] = 1;
			}
		}
	}
	if (iLocal_3490[5] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[14]))
		{
			if (is_vehicle_driveable(iLocal_3121[14], 0))
			{
				_0x153973AB99FE8980(iLocal_3121[14], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3490[5] = 1;
			}
		}
	}
	if (iLocal_3498[5] == 0)
	{
		if (iLocal_3490[5] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[14]))
			{
				if (!is_vehicle_driveable(iLocal_3121[14], 0))
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[14], 0f);
					iLocal_3498[5] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[14], 0f);
					iLocal_3498[5] = 1;
				}
			}
			else
			{
				iLocal_3498[5] = 1;
			}
		}
	}
	if (iLocal_3490[6] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[15]))
		{
			if (is_vehicle_driveable(iLocal_3121[15], 0))
			{
				_0x153973AB99FE8980(iLocal_3121[15], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3490[6] = 1;
			}
		}
	}
	if (iLocal_3498[6] == 0)
	{
		if (iLocal_3490[6] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[15]))
			{
				if (!is_vehicle_driveable(iLocal_3121[15], 0))
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[15], 0f);
					iLocal_3498[6] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					_0x18EB48CFC41F2EA0(iLocal_3121[15], 0f);
					iLocal_3498[6] = 1;
				}
			}
			else
			{
				iLocal_3498[6] = 1;
			}
		}
	}
}

void func_368()
{
	switch (iLocal_3180)
	{
		case 2:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3364 = 0;
					iLocal_3523 = 0;
					iLocal_3556 = 0;
					iLocal_3557 = 0;
					func_17(&uLocal_3578, 1, 0, "Devin", 0, 1);
					func_17(&uLocal_3578, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3364 == 0)
					{
						if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vLocal_3318, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 2f)
						{
							if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
							{
								if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_3364 = 1;
								}
							}
						}
					}
					if (iLocal_3523 == 0)
					{
						if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vLocal_3318, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 100f)
						{
							if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (func_371(&uLocal_3578, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									_0x293220DA1B46CEBC(4f, 10f, 4);
									iLocal_3523 = 1;
								}
							}
						}
					}
					if (iLocal_3556 == 0 && iLocal_3523 == 1)
					{
						if (func_370())
						{
							if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
							{
								if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_3556 = 1;
								}
							}
						}
					}
					if (iLocal_3557 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
						{
							if (is_vehicle_driveable(iLocal_3258, 0))
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3258, 1) < 200f && is_entity_on_screen(iLocal_3258))
								{
									if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
										{
											if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												_0x293220DA1B46CEBC(3f, 12f, 4);
												iLocal_3557 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_3181 >= 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3524[0] = 0;
					iLocal_3524[1] = 0;
					iLocal_3524[2] = 0;
					iLocal_3524[3] = 0;
					iLocal_3553 = 0;
					iLocal_3554 = 0;
					iLocal_3555 = 0;
					iLocal_3558 = 0;
					iLocal_3559 = 0;
					iLocal_3560 = 0;
					iLocal_3561 = 0;
					iLocal_3562 = 0;
					iLocal_3199 = GAMEPLAY::GET_GAME_TIMER();
					func_17(&uLocal_3578, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					func_17(&uLocal_3578, 4, 0, "SOL3COP", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3557 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
						{
							if (is_vehicle_driveable(iLocal_3258, 0))
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3258, 1) < 200f && is_entity_on_screen(iLocal_3258))
								{
									if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
										{
											if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_3557 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
					{
						if (is_vehicle_driveable(iLocal_3258, 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_3258))
							{
								if (iLocal_3524[0] == 0)
								{
									if (is_vehicle_driveable(iLocal_3121[7], 0) || is_vehicle_driveable(iLocal_3121[8], 0))
									{
										if (get_time_position_in_recording(iLocal_3258) > 7000f && get_time_position_in_recording(iLocal_3258) < 28000f)
										{
											if (!func_231())
											{
												if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
												{
													if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_3524[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[1] == 0)
								{
									if (is_vehicle_driveable(iLocal_3121[7], 0) || is_vehicle_driveable(iLocal_3121[8], 0))
									{
										if (get_time_position_in_recording(iLocal_3258) > 28000f && get_time_position_in_recording(iLocal_3258) < 34500f)
										{
											if (!func_231())
											{
												if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
												{
													if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														_0x293220DA1B46CEBC(4f, 4f, 4);
														iLocal_3524[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[2] == 0)
								{
									if (is_vehicle_driveable(iLocal_3121[7], 0) || is_vehicle_driveable(iLocal_3121[8], 0))
									{
										if (get_time_position_in_recording(iLocal_3258) > 36000f && get_time_position_in_recording(iLocal_3258) < 41000f)
										{
											if (!func_231())
											{
												if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
												{
													if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														_0x293220DA1B46CEBC(2f, 4f, 4);
														iLocal_3524[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3554 == 0)
								{
									if (get_time_position_in_recording(iLocal_3258) > 41000f && get_time_position_in_recording(iLocal_3258) < 43500f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265) && is_entity_on_screen(iLocal_3265))
										{
											if (!func_231())
											{
												if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
												{
													if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														_0x293220DA1B46CEBC(4f, 4f, 4);
														iLocal_3554 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3555 == 0)
								{
									if (get_time_position_in_recording(iLocal_3258) > 50509f && get_time_position_in_recording(iLocal_3258) < 50872f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265) && is_entity_on_screen(iLocal_3265))
										{
											if (!func_231())
											{
												if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
												{
													if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_3555 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[3] == 0)
								{
									if (get_time_position_in_recording(iLocal_3258) > 58000f && get_time_position_in_recording(iLocal_3258) < 68000f)
									{
										if (!func_231())
										{
											if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
											{
												if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_3524[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_3558 == 0 && iLocal_3524[3] == 1)
								{
									if (get_time_position_in_recording(iLocal_3258) < 76000f)
									{
										if (!func_231())
										{
											if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
											{
												if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_3558 = 1;
												}
											}
										}
									}
								}
								if (iLocal_3553 == 0)
								{
									if (get_time_position_in_recording(iLocal_3258) > 80000f && get_time_position_in_recording(iLocal_3258) < 82000f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260[0]))
										{
											if (is_vehicle_driveable(iLocal_3260[0], 0))
											{
												if (is_entity_on_screen(iLocal_3260[0]))
												{
													if (!func_231())
													{
														if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
														{
															if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																_0x293220DA1B46CEBC(3f, 10f, 4);
																iLocal_3553 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3559 == 0)
								{
									if (get_time_position_in_recording(iLocal_3258) > 82100f && get_time_position_in_recording(iLocal_3258) < 83500f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[11]))
										{
											if (is_entity_on_screen(iLocal_3121[11]))
											{
												if (!func_231())
												{
													if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
													{
														if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3559 = 1;
														}
													}
												}
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3121[12]))
										{
											if (is_entity_on_screen(iLocal_3121[12]))
											{
												if (!func_231())
												{
													if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
													{
														if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3559 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3562 == 0)
								{
									if ((get_time_position_in_recording(iLocal_3258) > 101891f && get_time_position_in_recording(iLocal_3258) < 105000f) && is_entity_on_screen(iLocal_3258))
									{
										if (!func_231())
										{
											if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
											{
												if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													_0x293220DA1B46CEBC(3f, 10f, 4);
													iLocal_3562 = 1;
												}
											}
										}
									}
								}
								if (((get_time_position_in_recording(iLocal_3258) > 105500f && get_time_position_in_recording(iLocal_3258) < 119000f) && GAMEPLAY::GET_GAME_TIMER() > iLocal_3199 + 7000) && iLocal_3561 == 0)
								{
									if (!func_231())
									{
										if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
										{
											if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3199 = GAMEPLAY::GET_GAME_TIMER();
												iLocal_3561 = 1;
											}
										}
									}
								}
								if (iLocal_3560 == 0 && iLocal_3561 == 1)
								{
									if (!func_231())
									{
										if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
										{
											if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_3560 = 1;
											}
										}
									}
								}
								if (((get_time_position_in_recording(iLocal_3258) > 105500f && get_time_position_in_recording(iLocal_3258) < 119000f) && GAMEPLAY::GET_GAME_TIMER() > iLocal_3199 + 7000) && iLocal_3560 == 1)
								{
									if (!func_231())
									{
										if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
										{
											if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3199 = GAMEPLAY::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3530 = 0;
					iLocal_3563 = 0;
					iLocal_3569 = 0;
					iLocal_3564 = 1;
					iLocal_3204 = GAMEPLAY::GET_GAME_TIMER();
					func_17(&uLocal_3578, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_3222))
					{
						func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
					}
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3569 == 0)
					{
						_0xED640017ED337E45("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_3569 = 1;
					}
					if (iLocal_3564 == 1)
					{
						if (iLocal_3530 == 0)
						{
							if (!func_231())
							{
								if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
								{
									if (func_232(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										_0x293220DA1B46CEBC(4f, 6f, 4);
										iLocal_3200 = GAMEPLAY::GET_GAME_TIMER();
										iLocal_3530 = 1;
										iLocal_3563 = 1;
										iLocal_3564 = 0;
									}
								}
							}
						}
						if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3200 + 5000)
						{
							if (!func_231())
							{
								if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
								{
									if (func_232(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										_0x293220DA1B46CEBC(4f, 6f, 4);
										iLocal_3200 = GAMEPLAY::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_3563 == 1 && GAMEPLAY::GET_GAME_TIMER() > iLocal_3204 + 4000)
					{
						if (!func_231())
						{
							if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
							{
								if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									_0x293220DA1B46CEBC(4f, 6f, 4);
									iLocal_3204 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_3564 = 1;
									iLocal_3563 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3531 = 0;
					iLocal_3532 = 0;
					iLocal_3533 = 0;
					iLocal_3565 = 0;
					iLocal_3566 = 0;
					func_17(&uLocal_3578, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_3222))
					{
						func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
					}
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3531 == 0)
					{
						if (!func_231())
						{
							if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
							{
								if (func_232(&uLocal_3578, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_3531 = 1;
								}
							}
						}
					}
					if (iLocal_3531 == 1 && iLocal_3533 == 0)
					{
						if (!func_231())
						{
							if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
							{
								if (func_232(&uLocal_3578, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_3533 = 1;
								}
							}
						}
					}
					if (iLocal_3532 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
						{
							if (!PED::IS_PED_INJURED(iLocal_3222))
							{
								if (is_synchronized_scene_running(iLocal_3209))
								{
									if (get_synchronized_scene_phase(iLocal_3209) > 0.65f && get_synchronized_scene_phase(iLocal_3209) < 0.835f)
									{
										if (!func_231())
										{
											if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
											{
												if (func_232(&uLocal_3578, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													_0x293220DA1B46CEBC(8f, 8f, 4);
													iLocal_3532 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3565 == 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
						{
							if (!func_231())
							{
								if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
								{
									if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_3565 = 1;
									}
								}
							}
						}
					}
					if (iLocal_3565 == 1 && iLocal_3566 == 0)
					{
						if (!func_231())
						{
							if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
							{
								if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_3566 = 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3567 = 0;
					iLocal_3205 = GAMEPLAY::GET_GAME_TIMER();
					func_17(&uLocal_3578, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3567 == 0)
					{
						if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_3257 = func_369(PLAYER::PLAYER_PED_ID(), -1533126372, 0, 0, 28);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3257, 1) < 40f)
								{
									if (!func_231())
									{
										if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
										{
											if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3567 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3567 == 1 && GAMEPLAY::GET_GAME_TIMER() > iLocal_3205 + 5000)
					{
						if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_3257 = func_369(PLAYER::PLAYER_PED_ID(), -1533126372, 0, 0, 28);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3257, 1) < 40f)
								{
									if (!func_231())
									{
										if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
										{
											if (func_232(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3205 = GAMEPLAY::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int[] iVar0 = new int[16];
	int iVar17;
	
	iVar17 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		get_ped_nearby_peds(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= iVar0 - 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar17]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar17]))
				{
					if (get_ped_relationship_group_hash(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (is_entity_on_screen(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2 <= iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar17 + iParam2]))
							{
								if (!PED::IS_PED_INJURED(iVar0[iVar17 + iParam2]))
								{
									if (get_ped_relationship_group_hash(iVar0[iVar17 + iParam2]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (is_entity_on_screen(iVar0[iVar17 + iParam2]))
											{
												return iVar0[iVar17 + iParam2];
											}
										}
										else
										{
											return iVar0[iVar17 + iParam2];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

bool func_370()
{
	if (Global_15712 == 0)
	{
		return true;
	}
	return false;
}

int func_371(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_230(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15760 = 1;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
	return func_223(sParam3, iParam4, iParam7);
}

void func_372()
{
	if (((iLocal_3180 == 4 || iLocal_3180 == 5) || iLocal_3180 == 8) || iLocal_3180 == 6)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_373(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 200, 0))
			{
				_0xDC64D2C53493ED12(player_id());
				_0x4669B3ED80F24B4E(player_id());
			}
		}
	}
	if (iLocal_3510 == 0)
	{
		if (iLocal_3180 == 4)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_373(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 200, 0))
				{
					set_player_wanted_level(player_id(), 3, 0);
					set_player_wanted_level_now(player_id(), 0);
					iLocal_3510 = 1;
				}
			}
		}
	}
}

bool func_373(Vector3 vParam0, int iParam1, int iParam2, int iParam3)
{
	Vector3[] vVar0 = new Vector3[15];
	Vector3[] vVar46 = new Vector3[15];
	float[] fVar92 = new float[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			vVar0[0 /*3*/] = {-1332.211f, 100.4608f, 40.38437f};
			vVar46[0 /*3*/] = {-1094.238f, 148.4274f, 73f};
			fVar92[0] = 171.25f;
			vVar0[1 /*3*/] = {-999.7344f, -110.2231f, 25.25706f};
			vVar46[1 /*3*/] = {-1149.494f, 109.2558f, 73f};
			fVar92[1] = 132f;
			vVar0[2 /*3*/] = {-1035.113f, -84.95885f, 28.2746f};
			vVar46[2 /*3*/] = {-1261.103f, 50.08148f, 73f};
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = {-804.3439f, -3346.5f, 10f};
			vVar46[0 /*3*/] = {-1816.954f, -2768.893f, IntToFloat(250 + iParam4)};
			fVar92[0] = 247f;
			vVar0[1 /*3*/] = {-1911.488f, -2934.197f, 10f};
			vVar46[1 /*3*/] = {-968.6236f, -3477.748f, IntToFloat(250 + iParam4)};
			fVar92[1] = 149f;
			vVar0[2 /*3*/] = {-844.9433f, -2802.785f, 10f};
			vVar46[2 /*3*/] = {-1011.081f, -3086.904f, IntToFloat(250 + iParam4)};
			fVar92[2] = 185.5f;
			vVar0[3 /*3*/] = {-1021.086f, -2952.277f, 10f};
			vVar46[3 /*3*/] = {-1599.008f, -2616.271f, IntToFloat(250 + iParam4)};
			fVar92[3] = 250f;
			vVar0[4 /*3*/] = {-1027.136f, -2436.457f, 10f};
			vVar46[4 /*3*/] = {-1392.61f, -2226.763f, IntToFloat(250 + iParam4)};
			fVar92[4] = 193.5f;
			vVar0[5 /*3*/] = {-1497.549f, -2408.712f, 10f};
			vVar46[5 /*3*/] = {-1136.917f, -2617.955f, IntToFloat(250 + iParam4)};
			fVar92[5] = 234.5f;
			vVar0[6 /*3*/] = {-982.7924f, -2831.709f, 12.93313f};
			vVar46[6 /*3*/] = {-966.4677f, -2803.458f, 16.68313f};
			fVar92[6] = 16f;
			vVar0[7 /*3*/] = {-1110.083f, -3496.806f, 12f};
			vVar46[7 /*3*/] = {-1955.298f, -3010.431f, IntToFloat(250 + iParam4)};
			fVar92[7] = 80f;
			vVar0[8 /*3*/] = {-1886.899f, -3193.024f, 12f};
			vVar46[8 /*3*/] = {-1836.143f, -3105.268f, IntToFloat(250 + iParam4)};
			fVar92[8] = 142f;
			vVar0[9 /*3*/] = {-1134.337f, -3535.648f, 12f};
			vVar46[9 /*3*/] = {-1259.649f, -3463.486f, IntToFloat(250 + iParam4)};
			fVar92[9] = 30.75f;
			vVar0[10 /*3*/] = {-969.1279f, -3463.899f, 12f};
			vVar46[10 /*3*/] = {-896.3734f, -3505.715f, IntToFloat(250 + iParam4)};
			fVar92[10] = 150f;
			vVar0[11 /*3*/] = {-1369.491f, -2173.579f, 10f};
			vVar46[11 /*3*/] = {-1685.626f, -2720.364f, IntToFloat(250 + iParam4)};
			fVar92[11] = 29.25f;
			vVar0[12 /*3*/] = {-1010.926f, -3550.943f, 10f};
			vVar46[12 /*3*/] = {-1110.198f, -3493.617f, IntToFloat(250 + iParam4)};
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = {-1773.944f, 3287.334f, 30f};
			vVar46[0 /*3*/] = {-2029.776f, 2845.083f, IntToFloat(250 + iParam4)};
			fVar92[0] = 250f;
			vVar0[1 /*3*/] = {-2725.889f, 3291.099f, 30f};
			vVar46[1 /*3*/] = {-2009.182f, 2879.835f, IntToFloat(250 + iParam4)};
			fVar92[1] = 180f;
			vVar0[2 /*3*/] = {-2442.026f, 3326.699f, 30f};
			vVar46[2 /*3*/] = {-2033.928f, 3089.049f, IntToFloat(250 + iParam4)};
			fVar92[2] = 200f;
			vVar0[3 /*3*/] = {-1917.165f, 3374.209f, 30f};
			vVar46[3 /*3*/] = {-2016.791f, 3195.058f, IntToFloat(250 + iParam4)};
			fVar92[3] = 86.25f;
			vVar0[4 /*3*/] = {-2192.753f, 3373.278f, 30f};
			vVar46[4 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
			fVar92[4] = 140.5f;
			vVar0[5 /*3*/] = {-2077.663f, 3344.514f, 30f};
			vVar46[5 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
			fVar92[5] = 140.5f;
			vVar0[6 /*3*/] = {-2861.755f, 3352.661f, 30f};
			vVar46[6 /*3*/] = {-2715.871f, 3269.916f, IntToFloat(250 + iParam4)};
			fVar92[6] = 90f;
			vVar0[7 /*3*/] = {-2005.574f, 3364.533f, 30f};
			vVar46[7 /*3*/] = {-1977.569f, 3330.888f, IntToFloat(250 + iParam4)};
			fVar92[7] = 100f;
			vVar0[8 /*3*/] = {-1682.235f, 3004.285f, 30f};
			vVar46[8 /*3*/] = {-1942.747f, 2947.441f, IntToFloat(250 + iParam4)};
			fVar92[8] = 248.75f;
			vVar0[9 /*3*/] = {-2393.295f, 2936.406f, 31.6801f};
			vVar46[9 /*3*/] = {-2453.037f, 3006.863f, 52.31003f};
			fVar92[9] = 128f;
			vVar0[10 /*3*/] = {-2347.185f, 3023.83f, 31.56573f};
			vVar46[10 /*3*/] = {-2517.33f, 2989.063f, 49.95644f};
			fVar92[10] = 127.25f;
			vVar0[11 /*3*/] = {-2259.922f, 3358.04f, 29.99972f};
			vVar46[11 /*3*/] = {-2299.772f, 3385.79f, 38.06014f};
			fVar92[11] = 16f;
			vVar0[12 /*3*/] = {-2476.309f, 3363.914f, 31.67933f};
			vVar46[12 /*3*/] = {-2431.981f, 3287.669f, 39.97826f};
			fVar92[12] = 214.25f;
			vVar0[13 /*3*/] = {-2103.081f, 2797.783f, 29.37864f};
			vVar46[13 /*3*/] = {-2096.821f, 2874.423f, 57.80989f};
			fVar92[13] = 65.75f;
			if (iParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[10 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[11 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[12 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[13 /*3*/].f_2 += IntToFloat(iVar111);
			iVar108 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = {1541.607f, 2527.555f, 40f};
			vVar46[0 /*3*/] = {1815.575f, 2535.06f, IntToFloat(150 + iParam4)};
			fVar92[0] = 114f;
			vVar0[1 /*3*/] = {1788.879f, 2445.727f, 40f};
			vVar46[1 /*3*/] = {1716.96f, 2502.957f, IntToFloat(150 + iParam4)};
			fVar92[1] = 88.5f;
			vVar0[2 /*3*/] = {1601.157f, 2436.244f, 40f};
			vVar46[2 /*3*/] = {1650.078f, 2515.923f, IntToFloat(150 + iParam4)};
			fVar92[2] = 133.25f;
			vVar0[3 /*3*/] = {1706.331f, 2407.597f, 40f};
			vVar46[3 /*3*/] = {1698.555f, 2460.208f, IntToFloat(150 + iParam4)};
			fVar92[3] = 104.5f;
			vVar0[4 /*3*/] = {1712.452f, 2756.218f, 40f};
			vVar46[4 /*3*/] = {1718.848f, 2589.162f, IntToFloat(150 + iParam4)};
			fVar92[4] = 121.75f;
			vVar0[5 /*3*/] = {1830.228f, 2661.24f, 40f};
			vVar46[5 /*3*/] = {1774.812f, 2679.419f, IntToFloat(150 + iParam4)};
			fVar92[5] = 84.5f;
			vVar0[6 /*3*/] = {1559.05f, 2632.22f, 40f};
			vVar46[6 /*3*/] = {1657.208f, 2595.484f, IntToFloat(150 + iParam4)};
			fVar92[6] = 103.75f;
			vVar0[7 /*3*/] = {1612.021f, 2716.869f, 40f};
			vVar46[7 /*3*/] = {1657.165f, 2669.721f, IntToFloat(150 + iParam4)};
			fVar92[7] = 104.25f;
			vVar0[8 /*3*/] = {1809.872f, 2729.827f, 40f};
			vVar46[8 /*3*/] = {1789.855f, 2705.037f, IntToFloat(150 + iParam4)};
			fVar92[8] = 91f;
			vVar0[9 /*3*/] = {1818.789f, 2605.948f, 40f};
			vVar46[9 /*3*/] = {1783.114f, 2606.783f, IntToFloat(150 + iParam4)};
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = {3411.002f, 3663.185f, 20f};
			vVar46[0 /*3*/] = {3615.583f, 3626.194f, IntToFloat(40 + iParam4)};
			fVar92[0] = 45.75f;
			vVar0[1 /*3*/] = {3426.66f, 3733.078f, 20f};
			vVar46[1 /*3*/] = {3643.801f, 3694.362f, IntToFloat(40 + iParam4)};
			fVar92[1] = 99f;
			vVar0[2 /*3*/] = {3446.036f, 3795.688f, 20f};
			vVar46[2 /*3*/] = {3650.914f, 3766.152f, IntToFloat(40 + iParam4)};
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = {526.053f, -3391.497f, -10f};
			vVar46[0 /*3*/] = {523.2289f, -3118.678f, IntToFloat(10 + iParam4)};
			fVar92[0] = 120f;
			vVar0[1 /*3*/] = {459.4397f, -3199.99f, 4.819676f};
			vVar46[1 /*3*/] = {593.8928f, -3199.998f, 30.06926f};
			fVar92[1] = 170f;
			vVar0[2 /*3*/] = {552.8467f, -3111.054f, 4.819394f};
			vVar46[2 /*3*/] = {585.3137f, -3111.844f, 17.56923f};
			fVar92[2] = 12.5f;
			vVar0[3 /*3*/] = {598.4666f, -3140.147f, 4.819257f};
			vVar46[3 /*3*/] = {597.4973f, -3117.063f, 17.31926f};
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = {-1108.55f, -570.8798f, 20f};
			vVar46[0 /*3*/] = {-1187.811f, -477.5037f, IntToFloat(50 + iParam4)};
			fVar92[0] = 162f;
			vVar0[1 /*3*/] = {-1201.378f, -485.9673f, 20f};
			vVar46[1 /*3*/] = {-1215.796f, -464.8281f, IntToFloat(50 + iParam4)};
			fVar92[1] = 124f;
			vVar0[2 /*3*/] = {-985.6311f, -525.4233f, 20f};
			vVar46[2 /*3*/] = {-1013.393f, -475.2057f, IntToFloat(50 + iParam4)};
			fVar92[2] = 55f;
			vVar0[3 /*3*/] = {-1055.849f, -477.8226f, 20f};
			vVar46[3 /*3*/] = {-1073.333f, -498.717f, IntToFloat(50 + iParam4)};
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = {461.5684f, -984.572f, 29.43951f};
			vVar46[0 /*3*/] = {471.17f, -984.4292f, 40.14212f};
			fVar92[0] = 7.75f;
			vVar0[1 /*3*/] = {457.3404f, -984.756f, 34.43951f};
			vVar46[1 /*3*/] = {457.2084f, -993.7189f, 29.38958f};
			fVar92[1] = 14.75f;
			vVar0[2 /*3*/] = {477.6227f, -986.6f, 40.00819f};
			vVar46[2 /*3*/] = {424.8687f, -986.3279f, 48.71241f};
			fVar92[2] = 31.5f;
			vVar0[3 /*3*/] = {474.3889f, -974.4613f, 39.55761f};
			vVar46[3 /*3*/] = {474.0358f, -1021.972f, 49.10033f};
			fVar92[3] = 30.5f;
			vVar0[4 /*3*/] = {442.1768f, -974.1888f, 29.68951f};
			vVar46[4 /*3*/] = {442.1855f, -979.8635f, 33.43951f};
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (is_point_in_angled_area(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], iVar110, true))
		{
			return true;
		}
		iVar109++;
	}
	return false;
}

void func_374()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_3259 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
}

void func_375()
{
	if (iLocal_3351 == 1)
	{
		if (iLocal_3180 == 4)
		{
			if (iLocal_3182 > 1 && iLocal_3475 == 0)
			{
				if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, 0, true, 0))
				{
					func_209("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
			{
				if (does_blip_exist(iLocal_3288))
				{
					if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3283, 1) > 100f)
					{
						func_209("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (iLocal_3182 == 2)
			{
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3194 + 7000 && iLocal_3508 == 0)
				{
					func_209("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				if (is_vehicle_driveable(iLocal_3258, 0))
				{
					if (is_playback_going_on_for_vehicle(iLocal_3258))
					{
						if (get_time_position_in_recording(iLocal_3258) > 62000f && get_time_position_in_recording(iLocal_3258) < 77000f)
						{
							if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1219f, -2570f, 13f, 1) < 210f)
							{
								if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (get_entity_heading(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) < 200f && get_entity_heading(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) > 125f)
									{
										if (iLocal_3507 == 0)
										{
											iLocal_3197 = GAMEPLAY::GET_GAME_TIMER();
											iLocal_3507 = 1;
										}
										if (iLocal_3507 == 1 && GAMEPLAY::GET_GAME_TIMER() > iLocal_3197 + 4000)
										{
											func_209("TRV4_FAIL1");
										}
									}
									else if (iLocal_3507 == 1)
									{
										iLocal_3507 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3180 == 5 || iLocal_3180 == 6)
		{
			if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -928.9f, -2935f, 13f, 1) < 5f && !is_player_control_on(player_id()))
			{
				func_209("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4)
		{
			if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()) || is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
			{
				if (func_373(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 200, 0))
				{
					func_209("TRV4_FAIL2");
				}
				else if (!func_184("TRV4_HELP3"))
				{
					func_378("TRV4_HELP3");
				}
			}
			else if (func_184("TRV4_HELP3"))
			{
				clear_help(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
		{
			if (!is_vehicle_driveable(iLocal_3258, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
				{
					if (!PED::IS_PED_INJURED(iLocal_3222))
					{
						set_entity_invincible(iLocal_3222, false);
						ENTITY::SET_ENTITY_HEALTH(iLocal_3222, false);
					}
				}
			}
		}
		if (iLocal_3360 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
			{
				if (PED::IS_PED_INJURED(iLocal_3222))
				{
					func_209("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (iLocal_3352 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_3222))
				{
					if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3222) > 300f)
					{
						if (iLocal_3436 == 1)
						{
							clear_prints();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_3436 = 0;
						}
					}
					else if (iLocal_3436 == 0)
					{
						iLocal_3436 = 1;
					}
					if (is_vehicle_driveable(iLocal_3258, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_3258))
						{
							if (get_time_position_in_recording(iLocal_3258) < 40000f)
							{
								if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3222) > 400f)
								{
									func_209("TRV4_FAIL1");
								}
							}
							else if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3222) > 350f)
							{
								func_209("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_3182 == 3)
			{
				if (iLocal_3476 == 1)
				{
					if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -934.4f, -2927.2f, 13.2f, 1) > 25f || GAMEPLAY::GET_GAME_TIMER() > iLocal_3195 + 12000)
					{
						func_209("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4)
		{
			if (is_ped_in_any_taxi(PLAYER::PLAYER_PED_ID()))
			{
				func_209("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 4)
		{
			if (is_vehicle_driveable(iLocal_3258, 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_3258))
				{
					if (get_time_position_in_recording(iLocal_3258) > 111509f)
					{
						if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, 0, true, 0))
						{
							func_209("TRV4_FAIL1");
						}
					}
					if (get_time_position_in_recording(iLocal_3258) > 122000f)
					{
						if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (is_entity_upsidedown(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
							{
								if (iLocal_3509 == 0)
								{
									iLocal_3198 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_3509 = 1;
								}
								if (iLocal_3509 == 1)
								{
									if (GAMEPLAY::GET_GAME_TIMER() > iLocal_3198 + 4000)
									{
										func_209("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_3509 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_3180 == 2)
		{
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, 0, true, 0))
			{
				func_209("TRV4_FAIL1");
			}
		}
		if (iLocal_3437 == 1)
		{
			if (func_377())
			{
				func_376();
			}
		}
	}
}

void func_376()
{
	func_384(PLAYER::PLAYER_PED_ID(), 0);
	func_380();
}

bool func_377()
{
	if (Global_3)
	{
		return true;
	}
	if (Global_91278 == 7 || Global_91278 == 8)
	{
		return true;
	}
	return false;
}

void func_378(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

void func_379(int iParam0)
{
	if (iParam0)
	{
		StringCopy(&Global_100210, get_this_script_name(), 24);
		Global_100204 = 1;
	}
	else
	{
		StringCopy(&Global_100210, "NULL", 24);
		Global_100204 = 0;
	}
}

void func_380()
{
	func_386(24, 1);
	set_audio_flag("PoliceScannerDisabled", 0);
	set_all_vehicle_generators_active_in_area(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, true, 1);
	func_381();
	func_183(&uLocal_28, 0, 0);
	_set_unk_map_flag(0);
	set_ignore_no_gps_flag(0);
	release_script_audio_bank();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271))
	{
		delete_vehicle(&iLocal_3271);
	}
	func_379(0);
	if (_0x0EAEB0DB4B132399(iLocal_3221))
	{
		remove_navmesh_blocking_object(iLocal_3221);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222))
	{
		if (!PED::IS_PED_INJURED(iLocal_3222))
		{
			set_ped_keep_task(iLocal_3222, true);
		}
		set_ped_as_no_longer_needed(&iLocal_3222);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3228))
	{
		if (!PED::IS_PED_INJURED(iLocal_3228))
		{
			set_ped_keep_task(iLocal_3228, true);
		}
		set_ped_as_no_longer_needed(&iLocal_3228);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
	{
		if (!PED::IS_PED_INJURED(iLocal_3245))
		{
			set_ped_keep_task(iLocal_3245, true);
		}
		set_ped_as_no_longer_needed(&iLocal_3245);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3246))
	{
		if (!PED::IS_PED_INJURED(iLocal_3246))
		{
			set_ped_keep_task(iLocal_3246, true);
		}
		set_ped_as_no_longer_needed(&iLocal_3246);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3247))
	{
		if (!PED::IS_PED_INJURED(iLocal_3247))
		{
			set_ped_keep_task(iLocal_3247, true);
		}
		set_ped_as_no_longer_needed(&iLocal_3247);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3248))
	{
		if (!PED::IS_PED_INJURED(iLocal_3248))
		{
			set_ped_keep_task(iLocal_3248, true);
		}
		set_ped_as_no_longer_needed(&iLocal_3248);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3249))
	{
		if (!PED::IS_PED_INJURED(iLocal_3249))
		{
			set_ped_keep_task(iLocal_3249, true);
		}
		set_ped_as_no_longer_needed(&iLocal_3249);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250))
	{
		if (!PED::IS_PED_INJURED(iLocal_3250))
		{
			set_ped_keep_task(iLocal_3250, true);
		}
		set_ped_as_no_longer_needed(&iLocal_3250);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3223[0]))
		{
			set_ped_keep_task(iLocal_3223[0], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3223[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3223[1]))
		{
			set_ped_keep_task(iLocal_3223[1], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3223[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3223[2]))
		{
			set_ped_keep_task(iLocal_3223[2], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3223[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3223[3]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3223[3]))
		{
			set_ped_keep_task(iLocal_3223[3], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3223[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3229[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3229[0]))
		{
			set_ped_keep_task(uLocal_3229[0], true);
		}
		set_ped_as_no_longer_needed(&(uLocal_3229[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3229[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3229[1]))
		{
			set_ped_keep_task(uLocal_3229[1], true);
		}
		set_ped_as_no_longer_needed(&(uLocal_3229[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3229[2]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3229[2]))
		{
			set_ped_keep_task(uLocal_3229[2], true);
		}
		set_ped_as_no_longer_needed(&(uLocal_3229[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3233[0]))
		{
			set_ped_keep_task(iLocal_3233[0], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3233[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3233[1]))
		{
			set_ped_keep_task(iLocal_3233[1], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3233[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3233[2]))
		{
			set_ped_keep_task(iLocal_3233[2], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3233[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[3]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3233[3]))
		{
			set_ped_keep_task(iLocal_3233[3], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3233[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[4]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3233[4]))
		{
			set_ped_keep_task(iLocal_3233[4], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3233[4]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[5]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3233[5]))
		{
			set_ped_keep_task(iLocal_3233[5], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3233[5]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[6]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3233[6]))
		{
			set_ped_keep_task(iLocal_3233[6], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3233[6]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[7]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3233[7]))
		{
			set_ped_keep_task(iLocal_3233[7], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3233[7]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[8]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3233[8]))
		{
			set_ped_keep_task(iLocal_3233[8], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3233[8]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[9]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3233[9]))
		{
			set_ped_keep_task(iLocal_3233[9], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3233[9]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3233[10]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3233[10]))
		{
			set_ped_keep_task(iLocal_3233[10], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3233[10]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3251[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3251[0]))
		{
			set_ped_keep_task(iLocal_3251[0], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3251[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3254[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3254[0]))
		{
			set_ped_keep_task(iLocal_3254[0], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3254[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3254[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3254[1]))
		{
			set_ped_keep_task(iLocal_3254[1], true);
		}
		set_ped_as_no_longer_needed(&(iLocal_3254[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
	{
		set_vehicle_as_no_longer_needed(&iLocal_3258);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259))
	{
		if (does_entity_belong_to_this_script(iLocal_3259, 0))
		{
			set_vehicle_as_no_longer_needed(&iLocal_3259);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3264))
	{
		set_vehicle_as_no_longer_needed(&iLocal_3264);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
	{
		set_vehicle_as_no_longer_needed(&iLocal_3265);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
	{
		set_vehicle_as_no_longer_needed(&iLocal_3266);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267))
	{
		set_vehicle_as_no_longer_needed(&iLocal_3267);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271))
	{
		set_vehicle_as_no_longer_needed(&iLocal_3271);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
	{
		if (does_entity_belong_to_this_script(iLocal_3275, 0))
		{
			set_vehicle_as_no_longer_needed(&iLocal_3275);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3279[0]))
	{
		set_vehicle_as_no_longer_needed(&(iLocal_3279[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3279[1]))
	{
		set_vehicle_as_no_longer_needed(&(iLocal_3279[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260[0]))
	{
		set_vehicle_as_no_longer_needed(&(iLocal_3260[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260[1]))
	{
		set_vehicle_as_no_longer_needed(&(iLocal_3260[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3279[0]))
	{
		set_vehicle_as_no_longer_needed(&(iLocal_3279[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3279[1]))
	{
		set_vehicle_as_no_longer_needed(&(iLocal_3279[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3268[0]))
	{
		set_vehicle_as_no_longer_needed(&(iLocal_3268[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3268[1]))
	{
		set_vehicle_as_no_longer_needed(&(iLocal_3268[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3272[0]))
	{
		set_vehicle_as_no_longer_needed(&(iLocal_3272[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3263))
	{
		set_vehicle_as_no_longer_needed(&iLocal_3263);
	}
	cancel_music_event("TRV4_START");
	cancel_music_event("TRV4_GAMEPLAY_START");
	cancel_music_event("TRV4_START_CS_SKIP");
	cancel_music_event("TRV4_START_RT");
	cancel_music_event("TRV4_FOOT_CHASE_RT");
	cancel_music_event("TRV4_EVADE_RT");
	cancel_music_event("TRV4_CAR_ENTERED");
	cancel_music_event("TRV4_AIRPORT_ENTERED");
	cancel_music_event("TRV4_CHASE");
	cancel_music_event("TRV4_JET_ENTERED");
	if (_does_door_exist(iLocal_3220))
	{
		remove_door_from_system(iLocal_3220);
	}
	if (does_particle_fx_looped_exist(iLocal_3763))
	{
		remove_particle_fx(iLocal_3763, 0);
	}
	_0x67EEDEA1B9BAFD94();
	set_scaleform_movie_as_no_longer_needed(&iLocal_3293);
	set_streamed_texture_dict_as_no_longer_needed("digitalOverlay");
	set_roads_in_area(-617f, -2274f, 0f, -406.01f, -2044f, 15f, true, 1);
	set_roads_in_area(-482f, -2118f, 6f, -1072f, -2724f, 17f, true, 1);
	if (get_is_waypoint_recording_loaded("Trev4_5"))
	{
		use_waypoint_recording_as_assisted_movement_route("Trev4_5", 0, 0.5f, 1f);
	}
	set_player_control(player_id(), true, 0);
	set_time_scale(1f);
	display_radar(true);
	display_hud(true);
	remove_anim_dict("missheist_agency3aig_lift_waitped_a");
	func_262(0);
	set_cinematic_button_active(true);
	if (func_19(2))
	{
		func_18(2, 0);
	}
	terminate_this_thread();
}

void func_381()
{
	int iVar0;
	
	Global_55778 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55779[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_382()
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_101154.f_7775 || func_393(0))
	{
		if (!func_383())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_212(iVar0))
				{
					return;
				}
				GAMEPLAY::SET_BIT(&(Global_82363[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_217();
		}
	}
}

bool func_383()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

void func_384(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_385(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_91315 > 0)
	{
		Global_95496.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_93091.f_21[iParam1] = iVar0;
	}
}

bool func_385(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_91315 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_95496.f_812[uParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_95496.f_812[uParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_95496.f_812[uParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_95496.f_812[uParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_93091.f_812[uParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_93091.f_812[uParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_93091.f_812[uParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_93091.f_812[uParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_386(int iParam0, int iParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_390(iParam0, &iVar1);
	if (!GAMEPLAY::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (iParam1)
		{
			if (is_interior_disabled(iVar1))
			{
				return;
			}
			if (get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_389(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!is_interior_disabled(iVar1))
			{
				return;
			}
			if (func_387(iParam0))
			{
				func_389(iParam0, 0);
			}
		}
		disable_interior(iVar1, iParam1);
		if (iParam1)
		{
		}
	}
}

bool func_387(int iParam0)
{
	struct<2> Var0;
	
	Var0 = {func_388(iParam0)};
	if (GAMEPLAY::IS_BIT_SET(Global_31492[Var0.f_1], Var0))
	{
		return true;
	}
	return false;
}

struct<2> func_388(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 4)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = iVar0 - Var3.f_1 * 32;
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_389(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = {func_388(iParam0)};
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_31492[Var0.f_1]), Var0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31492[Var0.f_1]), Var0);
	}
}

auto func_390(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = {func_391(iParam0)};
	*iParam1 = get_interior_at_coords_with_type(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_391(int iParam0)
{
	struct<5> Var0;
	Vector3 vVar5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = {-447.4833f, 280.3197f, 77.5215f};
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = {-1906.786f, -573.7576f, 19.0773f};
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = {1399.973f, 1148.756f, 113.3336f};
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = {-598.6379f, -1608.399f, 26.0108f};
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = {-556.5089f, 286.3181f, 81.1763f};
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = {-111.7116f, -11.912f, 69.5196f};
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = {1274.934f, -1714.726f, 53.7715f};
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = {147.433f, -2201.37f, 3.688f};
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = {320.9934f, 265.2515f, 82.1221f};
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = {-1425.564f, -244.3f, 15.8053f};
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = {377.153f, -717.567f, 10.0536f};
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = {245.1564f, 370.211f, 104.7382f};
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = {173.1176f, -1003.279f, -99.9999f};
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = {199.9715f, -999.6678f, -100f};
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = {228.6058f, -992.0537f, -99.9999f};
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = {1854.254f, 3686.739f, 33.2671f};
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = {-444.8907f, 6013.587f, 30.7164f};
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = {3522.845f, 3707.965f, 19.9918f};
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = {717.2994f, -974.4271f, 23.9142f};
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = {717.299f, -974.4271f, 23.9142f};
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = {2449.785f, 4983.825f, 45.8106f};
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = {1087.195f, -1988.445f, 28.649f};
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = {982.233f, -2160.382f, 28.4761f};
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = {479.0568f, -1316.825f, 28.2038f};
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = {-1005.663f, -478.3461f, 49.0265f};
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar5 = {func_392(1)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar5 = {func_392(2)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar5 = {func_392(3)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar5 = {func_392(4)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar5 = {func_392(5)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar5 = {func_392(6)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar5 = {func_392(7)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = {Global_1049163[34 /*1924*/].f_146.f_1517 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar5 = {func_392(35)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar5 = {func_392(36)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar5 = {func_392(37)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar5 = {func_392(38)};
			Var0 = {-20.1f, -580.8f, 91.3f};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar5 = {func_392(39)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar5 = {func_392(40)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar5 = {func_392(41)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar5 = {func_392(42)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar5 = {func_392(43)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = {-470.3754f, -698.5207f, 51.5276f};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = {-460.6133f, -691.5562f, 69.9067f};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = {300.633f, -997.4288f, -99.9727f};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = {-171.3969f, 494.2671f, 134.4935f};
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = {339.4982f, 434.0887f, 146.2206f};
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = {-761.3884f, 615.7333f, 140.9805f};
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = {-678.1752f, 591.0076f, 142.2196f};
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = {120.0541f, 553.793f, 181.0943f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = {-571.4039f, 655.2008f, 142.6293f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = {-742.2565f, 587.6547f, 143.0577f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = {-857.2222f, 685.051f, 149.6502f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = {-1287.65f, 443.2707f, 94.6919f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = {374.2012f, 416.9688f, 142.5991f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = {-16.29585f, -684.0385f, 33.50832f};
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = {341.1f, -1000f, -99.2f};
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = {199.9716f, -1018.954f, -100f};
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = {-1388.001f, -618.4197f, 30.8196f};
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar5 = {func_392(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar5 = {func_392(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar5 = {func_392(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar5 = {func_392(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar5 = {func_392(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar5 = {func_392(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar5 = {func_392(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar5 = {func_392(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar5 = {func_392(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar5 = {func_392(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar5 = {func_392(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar5 = {func_392(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar5 = {func_392(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar5 = {func_392(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar5 = {func_392(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar5 = {func_392(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar5 = {func_392(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar5 = {func_392(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar5 = {func_392(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar5 = {func_392(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar5 = {func_392(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar5 = {func_392(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar5 = {func_392(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar5 = {func_392(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar5 = {func_392(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar5 = {func_392(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar5 = {func_392(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar5 = {func_392(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar5 = {func_392(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar5 = {func_392(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar5 = {func_392(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar5 = {func_392(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar5 = {func_392(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar5 = {func_392(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar5 = {func_392(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar5 = {func_392(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_392(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = {-794.9184f, 339.6266f, 200.4135f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 1:
			Var0 = {-794.9184f, 339.6266f, 200.4135f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 2:
			Var0 = {-761.0982f, 317.6259f, 169.5963f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 3:
			Var0 = {-761.1888f, 317.6295f, 216.0503f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 4:
			Var0 = {-795.3856f, 340.0188f, 152.7941f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 61:
			Var0 = {-778.5056f, 332.3779f, 212.1968f};
			Var0.f_3 = {0f, 0f, 90f};
			break;
		
		case 5:
			Var0 = {-258.1807f, -950.6853f, 70.0239f};
			Var0.f_3 = {0f, 0f, 70f};
			break;
		
		case 6:
			Var0 = {-285.0051f, -957.6552f, 85.3035f};
			Var0.f_3 = {0f, 0f, -110f};
			break;
		
		case 7:
			Var0 = {-1471.882f, -530.7484f, 62.34918f};
			Var0.f_3 = {0f, 0f, -145f};
			break;
		
		case 34:
			Var0 = {-1471.882f, -530.7484f, 49.72156f};
			Var0.f_3 = {0f, 0f, -145f};
			break;
		
		case 62:
			Var0 = {-1463.15f, -540.2369f, 74.2439f};
			Var0.f_3 = {0f, 0f, -145f};
			break;
		
		case 35:
			Var0 = {-885.3702f, -451.4775f, 119.327f};
			Var0.f_3 = {0f, 0f, 27.55617f};
			break;
		
		case 36:
			Var0 = {-913.0385f, -438.4284f, 114.3997f};
			Var0.f_3 = {0f, 0f, -153.3093f};
			break;
		
		case 37:
			Var0 = {-892.5499f, -430.4789f, 88.25368f};
			Var0.f_3 = {0f, 0f, 116.9193f};
			break;
		
		case 38:
			Var0 = {-35.0462f, -576.317f, 82.90739f};
			Var0.f_3 = {0f, 0f, 160f};
			break;
		
		case 39:
			Var0 = {-10.3788f, -590.7431f, 93.02542f};
			Var0.f_3 = {0f, 0f, 70f};
			break;
		
		case 65:
			Var0 = {-22.2487f, -589.1461f, 80.2305f};
			Var0.f_3 = {0f, 0f, 69.88f};
			break;
		
		case 40:
			Var0 = {-900.6311f, -376.7462f, 78.27306f};
			Var0.f_3 = {0f, 0f, 26.92611f};
			break;
		
		case 41:
			Var0 = {-929.483f, -374.5104f, 102.2329f};
			Var0.f_3 = {0f, 0f, -152.5531f};
			break;
		
		case 63:
			Var0 = {-914.4202f, -375.8189f, 114.4743f};
			Var0.f_3 = {0f, 0f, -63f};
			break;
		
		case 42:
			Var0 = {-617.1647f, 64.6042f, 100.8196f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 43:
			Var0 = {-584.2015f, 42.7133f, 86.4187f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 64:
			Var0 = {-609.5665f, 50.2203f, 98.3998f};
			Var0.f_3 = {0f, 0f, -90f};
			break;
		
		case 73:
			Var0 = {-171.3969f, 494.2671f, 134.4935f};
			Var0.f_3 = {0f, 0f, 11f};
			break;
		
		case 74:
			Var0 = {339.4982f, 434.0887f, 146.2206f};
			Var0.f_3 = {0f, 0f, -63.5f};
			break;
		
		case 75:
			Var0 = {-761.3884f, 615.7333f, 140.9805f};
			Var0.f_3 = {0f, 0f, -71.5f};
			break;
		
		case 76:
			Var0 = {-678.1752f, 591.0076f, 142.2196f};
			Var0.f_3 = {0f, 0f, 40.5f};
			break;
		
		case 77:
			Var0 = {120.0541f, 553.793f, 181.0943f};
			Var0.f_3 = {0f, 0f, 6f};
			break;
		
		case 78:
			Var0 = {-571.4039f, 655.2008f, 142.6293f};
			Var0.f_3 = {0f, 0f, -14.5f};
			break;
		
		case 79:
			Var0 = {-742.2565f, 587.6547f, 143.0577f};
			Var0.f_3 = {0f, 0f, -29f};
			break;
		
		case 80:
			Var0 = {-857.2222f, 685.051f, 149.6502f};
			Var0.f_3 = {0f, 0f, 4.5f};
			break;
		
		case 81:
			Var0 = {-1287.65f, 443.2707f, 94.6919f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 82:
			Var0 = {374.2012f, 416.9688f, 142.6977f};
			Var0.f_3 = {0f, 0f, -14f};
			break;
		
		case 83:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = {0f, 0f, 90f};
			break;
		
		case 84:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = {0f, 0f, 90f};
			break;
		
		case 85:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = {0f, 0f, -90f};
			break;
		
		case 86:
			Var0 = {-1573.098f, -4085.806f, 9.7851f};
			Var0.f_3 = {0f, 0f, 162f};
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = {342.8157f, -997.4288f, -100f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = {260.3297f, -997.4288f, -100f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 87:
			Var0 = {-1572.187f, -570.8315f, 109.9879f};
			Var0.f_3 = {0f, 0f, -54f};
			break;
		
		case 88:
			Var0 = {-1383.954f, -476.7112f, 73.507f};
			Var0.f_3 = {0f, 0f, 8f};
			break;
		
		case 89:
			Var0 = {-138.0029f, -629.739f, 170.2854f};
			Var0.f_3 = {0f, 0f, -84f};
			break;
		
		case 90:
			Var0 = {-74.8895f, -817.6883f, 244.8508f};
			Var0.f_3 = {0f, 0f, 70f};
			break;
	}
	return Var0;
}

int func_393(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

