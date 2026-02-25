
modded class Land_KlimaX_T3Door 
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
		  
		crate.GetInventory().CreateInInventory("SodaCan_Cola");	
		crate.GetInventory().CreateInInventory("SodaCan_Fronta");
		
	};
};