modded class Land_KlimaX_T4Door 
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
		  
		rndIndex = Math.RandomInt(0,1); // (0,3) picks either 0,1,2. Basically make the last number how many items you want and remember to start at 0
		switch (rndIndex) // AR & LMG (balancing reasons x)
		{
			case 0:
				weapon = crate.GetInventory().CreateInInventory("MKII");
				
				crate.GetInventory().CreateInInventory("Mag_MKII_10Rnd");
				crate.GetInventory().CreateInInventory("Mag_MKII_10Rnd");
				crate.GetInventory().CreateInInventory("Mag_MKII_10Rnd");
			break;
			case 1:
				weapon = crate.GetInventory().CreateInInventory("Glock19");
				
				crate.GetInventory().CreateInInventory("Mag_Glock_15Rnd");
				crate.GetInventory().CreateInInventory("Mag_Glock_15Rnd");
				crate.GetInventory().CreateInInventory("Mag_Glock_15Rnd");
			break;
		};
	};
};