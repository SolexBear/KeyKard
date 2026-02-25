modded class Land_KlimaX_T1Door 
{
	override string GetCrateClassName()
	{
		return "RedemptionMilitaryCrate";
	}
	//super.AddLoot( crate );

	override void AddLoot( EntityAI crate ) // everything in here
	{
		// super.AddLoot( crate );

		// Don't touch these
		int rndIndex; // Declares the random num variable 
		EntityAI weapon; // Declares the weapon class 
		EntityAI optic; // Declares scope class - only needed if scope needs a battery
		EntityAI platecarrier; // Declares Pouches class

		// Repeat all this for every "roll"
		  
		rndIndex = Math.RandomInt(0,17); // (0,3) picks either 0,1,2. Basically make the last number how many items you want and remember to start at 0
		switch (rndIndex) // AR & LMG (balancing reasons x)
		{
			case 0:
				weapon = crate.GetInventory().CreateInInventory("VSS");
				optic = weapon.GetInventory().CreateAttachment("PSO11Optic");
				
				crate.GetInventory().CreateInInventory("Mag_VSS_10Rnd");
				crate.GetInventory().CreateInInventory("Mag_VSS_10Rnd");
			break;
			case 1:
				weapon = crate.GetInventory().CreateInInventory("ASVAL");
				optic = weapon.GetInventory().CreateAttachment("ACOGOptic");
				
				crate.GetInventory().CreateInInventory("Mag_VAL_20Rnd");
				crate.GetInventory().CreateInInventory("Mag_VAL_20Rnd");
			break;
			case 2:
				weapon = crate.GetInventory().CreateInInventory("Vikhr");
				optic = weapon.GetInventory().CreateAttachment("KobraOptic");
				
				crate.GetInventory().CreateInInventory("Mag_Vikhr_30Rnd");
				crate.GetInventory().CreateInInventory("Mag_Vikhr_30Rnd");
			break;
			case 3:
				weapon = crate.GetInventory().CreateInInventory("AKM");
				weapon.GetInventory().CreateAttachment("AK_FoldingBttstck");
				weapon.GetInventory().CreateAttachment("AK_RailHndgrd");
				optic = weapon.GetInventory().CreateAttachment("PSO11Optic");
				
				crate.GetInventory().CreateInInventory("Mag_AKM_30Rnd");
				crate.GetInventory().CreateInInventory("Mag_AKM_30Rnd");
			break;
			case 4:
				weapon = crate.GetInventory().CreateInInventory("AK74");
				weapon.GetInventory().CreateAttachment("AK74_WoodBttstck");
				weapon.GetInventory().CreateAttachment("AK74_Hndgrd");
				optic = weapon.GetInventory().CreateAttachment("PSO11Optic");

				crate.GetInventory().CreateInInventory("Mag_AK74_30Rnd");
				crate.GetInventory().CreateInInventory("Mag_AK74_30Rnd");
			break;
			case 5:
				weapon = crate.GetInventory().CreateInInventory("AK101");
				weapon.GetInventory().CreateAttachment("AK_WoodBttstck");
				weapon.GetInventory().CreateAttachment("AK_WoodHndgrd");
				optic = weapon.GetInventory().CreateAttachment("PSO11Optic");
				
				crate.GetInventory().CreateInInventory("Mag_AK101_30Rnd");
				crate.GetInventory().CreateInInventory("Mag_AK101_30Rnd");
			break;
			case 6:
				weapon = crate.GetInventory().CreateInInventory("Aug");
				optic = weapon.GetInventory().CreateAttachment("ACOGOptic");
				
				crate.GetInventory().CreateInInventory("Mag_Aug_30Rnd");
				crate.GetInventory().CreateInInventory("Mag_Aug_30Rnd");
			break;
			case 7:
				weapon = crate.GetInventory().CreateInInventory("AugShort");
				
				crate.GetInventory().CreateInInventory("Mag_Aug_30Rnd");
				crate.GetInventory().CreateInInventory("Mag_Aug_30Rnd");
			break;
			case 8:
				weapon = crate.GetInventory().CreateInInventory("Saiga");
				weapon.GetInventory().CreateAttachment("Saiga_Bttstck");
				
				crate.GetInventory().CreateInInventory("Mag_Saiga_Drum20Rnd");
				crate.GetInventory().CreateInInventory("Mag_Saiga_Drum20Rnd");
			break;
			case 9:
				weapon = crate.GetInventory().CreateInInventory("Scout");
				optic = weapon.GetInventory().CreateAttachment("ACOGOptic_6x");
				
				crate.GetInventory().CreateInInventory("Mag_Scout_5Rnd");
				crate.GetInventory().CreateInInventory("Mag_Scout_5Rnd");
			break;
			case 10:
				weapon = crate.GetInventory().CreateInInventory("PP19");
				weapon.GetInventory().CreateAttachment("PP19_Bttstck");
				optic = weapon.GetInventory().CreateAttachment("KobraOptic");
				
				crate.GetInventory().CreateInInventory("Mag_PP19_64Rnd");
				crate.GetInventory().CreateInInventory("Mag_PP19_64Rnd");
			break;
			case 11:
				weapon = crate.GetInventory().CreateInInventory("M14");
				optic = weapon.GetInventory().CreateAttachment("ACOGOptic_6x");
				
				crate.GetInventory().CreateInInventory("Mag_M14_10Rnd");
				crate.GetInventory().CreateInInventory("Mag_M14_10Rnd");
			break;
			case 12:
				weapon = crate.GetInventory().CreateInInventory("M16A2");
				
				crate.GetInventory().CreateInInventory("Mag_CMAG_30Rnd");
				crate.GetInventory().CreateInInventory("Mag_CMAG_30Rnd");
			break;
			case 13:
				weapon = crate.GetInventory().CreateInInventory("AKS74U");
				weapon.GetInventory().CreateAttachment("AKS74U_Bttstck");
				
				crate.GetInventory().CreateInInventory("Mag_AK74_30Rnd");
				crate.GetInventory().CreateInInventory("Mag_AK74_30Rnd");
			break;
			case 14:
				weapon = crate.GetInventory().CreateInInventory("MP5K");
				weapon.GetInventory().CreateAttachment("MP5_RailHndgrd");
				weapon.GetInventory().CreateAttachment("MP5k_StockBttstck");
				weapon.GetInventory().CreateAttachment("MP5_Compensator");
				optic = weapon.GetInventory().CreateAttachment("M4_T3NRDSOptic");
				
				crate.GetInventory().CreateInInventory("Mag_MP5_30Rnd");
				crate.GetInventory().CreateInInventory("Mag_MP5_30Rnd");
			break;
			case 15:
				weapon = crate.GetInventory().CreateInInventory("UMP45");
				optic = weapon.GetInventory().CreateAttachment("ACOGOptic");

				crate.GetInventory().CreateInInventory("Mag_UMP_25Rnd");
				crate.GetInventory().CreateInInventory("Mag_UMP_25Rnd");
			break;
			case 16:
				weapon = crate.GetInventory().CreateInInventory("FAMAS");
				
				crate.GetInventory().CreateInInventory("Mag_FAMAS_25Rnd");
				crate.GetInventory().CreateInInventory("Mag_FAMAS_25Rnd");
			break;
			case 17:
				weapon = crate.GetInventory().CreateInInventory("M79");
				
				crate.GetInventory().CreateInInventory("Ammo_40mm_Explosive");
				crate.GetInventory().CreateInInventory("Ammo_40mm_Explosive");
				crate.GetInventory().CreateInInventory("Ammo_40mm_Explosive");
			break;
		};

		rndIndex = Math.RandomInt(0,4);
		switch (rndIndex) // Pistol
		{
			case 0:	
				weapon = crate.GetInventory().CreateInInventory("CZ75");
				
				crate.GetInventory().CreateInInventory("Mag_CZ75_15Rnd");
				crate.GetInventory().CreateInInventory("Mag_CZ75_15Rnd");
			break;
			case 1:	
				weapon = crate.GetInventory().CreateInInventory("Glock19");
				
				crate.GetInventory().CreateInInventory("Mag_Glock_15Rnd");
				crate.GetInventory().CreateInInventory("Mag_Glock_15Rnd");
			break;
			case 2:
				weapon = crate.GetInventory().CreateInInventory("FNX45");
				
				crate.GetInventory().CreateInInventory("Mag_FNX45_15Rnd");
				crate.GetInventory().CreateInInventory("Mag_FNX45_15Rnd");
			break;
			case 3:
				weapon = crate.GetInventory().CreateInInventory("Deagle");
				
				crate.GetInventory().CreateInInventory("Mag_Deagle_9rnd");
				crate.GetInventory().CreateInInventory("Mag_Deagle_9rnd");
			break;
			case 4:
				weapon = crate.GetInventory().CreateInInventory("Colt1911");
				
				crate.GetInventory().CreateInInventory("Mag_1911_7Rnd");
				crate.GetInventory().CreateInInventory("Mag_1911_7Rnd");
			break;
		};

		rndIndex = Math.RandomInt(0,8);
		switch (rndIndex) // Bag
		{
			case 0:	
				crate.GetInventory().CreateInInventory("AliceBag_Green");
			break;
			case 1:	
				crate.GetInventory().CreateInInventory("AliceBag_Black");
			break;
			case 2:
				crate.GetInventory().CreateInInventory("AliceBag_Camo");
			break;
			case 3:
				crate.GetInventory().CreateInInventory("CoyoteBag_Green");
			break;
			case 4:
				crate.GetInventory().CreateInInventory("CoyoteBag_Brown");
			break;
			case 5:
				crate.GetInventory().CreateInInventory("TortillaBag");
			break;
			case 6:
				crate.GetInventory().CreateInInventory("AssaultBag_Black");
			break;
			case 7:
				crate.GetInventory().CreateInInventory("AssaultBag_Green");
			break;
			case 8:
				crate.GetInventory().CreateInInventory("AssaultBag_Ttsko");
			break;
		};

		rndIndex = Math.RandomInt(0,6);
		switch (rndIndex) // VESTS
		{							
			case 0:
				crate.GetInventory().CreateInInventory("UKAssVest_Camo");
			break;
			case 1:
				crate.GetInventory().CreateInInventory("UKAssVest_Khaki");
			break;
			case 2:
				crate.GetInventory().CreateInInventory("UKAssVest_Black");
			break; 
			case 3:
				crate.GetInventory().CreateInInventory("UKAssVest_Olive");
			break;  			
			case 4:
				crate.GetInventory().CreateInInventory("HighCapacityVest_Black");
			break; 			
			case 5:
				crate.GetInventory().CreateInInventory("HighCapacityVest_Olive");
			break; 
			case 6:
				crate.GetInventory().CreateInInventory("SmershBag");
				crate.GetInventory().CreateInInventory("SmershVest");
			break; 			
		};
		
		rndIndex = Math.RandomInt(0,5);
		switch (rndIndex) // Helmet
		{							
			case 0:
				crate.GetInventory().CreateInInventory("BallisticHelmet_BDU");
			break;
			case 1:
				crate.GetInventory().CreateInInventory("BallisticHelmet_Desert");
			break;
			case 2:
				crate.GetInventory().CreateInInventory("BallisticHelmet_Woodland");
			break; 
			case 3:
				crate.GetInventory().CreateInInventory("BallisticHelmet_Green");
			break;  			
			case 4:
				crate.GetInventory().CreateInInventory("BallisticHelmet_Black");
			break; 			
			case 5:
				crate.GetInventory().CreateInInventory("GorkaHelmet");
			break; 			
		};
		
		rndIndex = Math.RandomInt(0,7);
		switch (rndIndex) // Clothing
		{							
			case 0:
				crate.GetInventory().CreateInInventory("BDUJacket");
				crate.GetInventory().CreateInInventory("BDUPants");
			break;
			case 1:
				crate.GetInventory().CreateInInventory("GorkaPants_Autumn");
				crate.GetInventory().CreateInInventory("GorkaEJacket_Autumn");
			break;
			case 2:
				crate.GetInventory().CreateInInventory("GorkaPants_Flat");
				crate.GetInventory().CreateInInventory("GorkaEJacket_Flat");
			break; 
			case 3:
				crate.GetInventory().CreateInInventory("GorkaPants_PautRev");
				crate.GetInventory().CreateInInventory("GorkaEJacket_PautRev");
			break;  			
			case 4:
				crate.GetInventory().CreateInInventory("GorkaPants_Summer");
				crate.GetInventory().CreateInInventory("GorkaEJacket_Summer");
			break; 			
			case 5:
				crate.GetInventory().CreateInInventory("TTSKOPants");
				crate.GetInventory().CreateInInventory("TTsKOJacket_Camo");
			break; 
			case 6:
				crate.GetInventory().CreateInInventory("USMCJacket_Desert");
				crate.GetInventory().CreateInInventory("USMCPants_Desert");
			break; 			
			case 7:
				crate.GetInventory().CreateInInventory("USMCJacket_Woodland");
				crate.GetInventory().CreateInInventory("USMCPants_Woodland");
			break; 			
		};
		
		rndIndex = Math.RandomInt(0,4);
		switch (rndIndex) // Gloves
		{							
			case 0:
				crate.GetInventory().CreateInInventory("TacticalGloves_Beige");
			break;
			case 1:
				crate.GetInventory().CreateInInventory("TacticalGloves_Black");
			break;
			case 2:
				crate.GetInventory().CreateInInventory("TacticalGloves_Green");
			break; 
			case 3:
				crate.GetInventory().CreateInInventory("OMNOGloves_Brown");
			break;  			
			case 4:
				crate.GetInventory().CreateInInventory("OMNOGloves_Gray");
			break; 			
		};
		
		rndIndex = Math.RandomInt(0,13);
		switch (rndIndex) // Boots
		{							
			case 0:
				crate.GetInventory().CreateInInventory("TTSKOBoots");
			break;
			case 1:
				crate.GetInventory().CreateInInventory("CombatBoots_Beige");
			break;
			case 2:
				crate.GetInventory().CreateInInventory("CombatBoots_Black");
			break; 
			case 3:
				crate.GetInventory().CreateInInventory("CombatBoots_Brown");
			break;  			
			case 4:
				crate.GetInventory().CreateInInventory("CombatBoots_Green");
			break; 	
			case 5:
				crate.GetInventory().CreateInInventory("CombatBoots_Grey");
			break;
			case 6:
				crate.GetInventory().CreateInInventory("JungleBoots_Beige");
			break; 
			case 7:
				crate.GetInventory().CreateInInventory("JungleBoots_Black");
			break;  			
			case 8:
				crate.GetInventory().CreateInInventory("JungleBoots_Brown");
			break; 	
			case 9:
				crate.GetInventory().CreateInInventory("JungleBoots_Green");
			break;  			
			case 10:
				crate.GetInventory().CreateInInventory("JungleBoots_Olive");
			break; 	
			case 11:
				crate.GetInventory().CreateInInventory("MilitaryBoots_Black");
			break;
			case 12:
				crate.GetInventory().CreateInInventory("MilitaryBoots_Beige");
			break; 
			case 13:
				crate.GetInventory().CreateInInventory("MilitaryBoots_Brown");
			break;  			
		};

		rndIndex = Math.RandomInt(0,4);
		switch (rndIndex) // Misc
		{
			case 0:
				crate.GetInventory().CreateInInventory("LandMineTrap");
			break;
			case 1:
				crate.GetInventory().CreateInInventory("FlashGrenade");
				crate.GetInventory().CreateInInventory("FlashGrenade");
			break;
			case 2:
				crate.GetInventory().CreateInInventory("M67Grenade");
				crate.GetInventory().CreateInInventory("RGD5Grenade");
			break;
			case 3:
				crate.GetInventory().CreateInInventory("M67Grenade");
				crate.GetInventory().CreateInInventory("RGD5Grenade");
			break;		
			case 4:
				crate.GetInventory().CreateInInventory("ClaymoreMine");
			break;
		};
	};
}