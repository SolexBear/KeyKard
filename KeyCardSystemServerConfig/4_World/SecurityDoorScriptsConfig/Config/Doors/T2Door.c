modded class Land_KlimaX_T2Door 
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
		  
		rndIndex = Math.RandomInt(0,3); // (0,3) picks either 0,1,2. Basically make the last number how many items you want and remember to start at 0
		switch (rndIndex) // AR & LMG (balancing reasons x)
		{
			case 0:
				weapon = crate.GetInventory().CreateInInventory("M4A1");
				weapon.GetInventory().CreateAttachment("M4_OEBttstck");
				weapon.GetInventory().CreateAttachment("M4_RISHndgrd");
				optic = weapon.GetInventory().CreateAttachment("ACOGOptic");

				crate.GetInventory().CreateInInventory("Mag_CMAG_30Rnd");
				crate.GetInventory().CreateInInventory("Mag_CMAG_30Rnd");
			break;
			case 1:
				weapon = crate.GetInventory().CreateInInventory("FAL");
				weapon.GetInventory().CreateAttachment("Fal_FoldingBttstck");
				optic = weapon.GetInventory().CreateAttachment("ACOGOptic_6x");
				
				crate.GetInventory().CreateInInventory("Mag_FAL_20Rnd");
				crate.GetInventory().CreateInInventory("Mag_FAL_20Rnd");
			break;
			case 2:
				weapon = crate.GetInventory().CreateInInventory("SVD");
				optic = weapon.GetInventory().CreateAttachment("PSO11Optic");

				crate.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
				crate.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
			break;
			case 3:
				weapon = crate.GetInventory().CreateInInventory("SV98");
				optic = weapon.GetInventory().CreateAttachment("ACOGOptic_6x");
 
				crate.GetInventory().CreateInInventory("Mag_SV98_10Rnd");
				crate.GetInventory().CreateInInventory("Mag_SV98_10Rnd");
			break;
		};

		rndIndex = Math.RandomInt(0,3);
		switch (rndIndex) // Plate Carriers
		{							
			case 0:
				platecarrier = crate.GetInventory().CreateInInventory("PlateCarrierVest_Camo");
				platecarrier.GetInventory().CreateAttachment("PlateCarrierHolster_Camo");
				platecarrier.GetInventory().CreateAttachment("PlateCarrierPouches_Camo");
			break;
			case 1:
				platecarrier = crate.GetInventory().CreateInInventory("PlateCarrierVest");
				platecarrier.GetInventory().CreateAttachment("PlateCarrierHolster");
				platecarrier.GetInventory().CreateAttachment("PlateCarrierPouches");
			break;
			case 2:
				platecarrier = crate.GetInventory().CreateInInventory("PlateCarrierVest_Black");
				platecarrier.GetInventory().CreateAttachment("PlateCarrierHolster_Black");
				platecarrier.GetInventory().CreateAttachment("PlateCarrierPouches_Black");
			break; 
			case 3:
				platecarrier = crate.GetInventory().CreateInInventory("PlateCarrierVest_Green");
				platecarrier.GetInventory().CreateAttachment("PlateCarrierHolster_Green");
				platecarrier.GetInventory().CreateAttachment("PlateCarrierPouches_Green");
			break;  			
		};

		rndIndex = Math.RandomInt(0,2);
		switch (rndIndex) // Misc
		{
			case 0:
				crate.GetInventory().CreateInInventory("StarlightOptic");
			break;	
			case 1:
				crate.GetInventory().CreateInInventory("KazuarOptic");
			break;	
			case 2:
				crate.GetInventory().CreateInInventory("NVGoggles");
				crate.GetInventory().CreateInInventory("NVGHeadstrap");
			break;
		};
	};
};