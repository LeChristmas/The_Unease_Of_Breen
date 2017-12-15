// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class The_Unease_Of_BreenEditorTarget : TargetRules
{
	public The_Unease_Of_BreenEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "The_Unease_Of_Breen" } );
	}
}
