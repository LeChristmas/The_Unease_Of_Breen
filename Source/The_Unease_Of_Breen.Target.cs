// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class The_Unease_Of_BreenTarget : TargetRules
{
	public The_Unease_Of_BreenTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "The_Unease_Of_Breen" } );
	}
}
