modded class MagicBox: ItemBase
{
	override void OnCrateSucceed(ItemBase item)
	{
		m_RollCount++;
		m_DisplayedWeapon.SetMysteryBoxState(MysteryBoxWeaponState.AWAITING_USER);
		m_BoxTimer.Run(0.01, this, "OnWaitTimer", new Param2<float, int>(USER_WAIT_TIME, GetGame().GetTime()), true);
		DoubleCostToOpen();
	}
	void DoubleCostToOpen()
	{
		m_CostToOpen = m_CostToOpen*2;
		SetCostToOpen(m_CostToOpen);
	}
}