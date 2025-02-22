#pragma once

namespace MikuMikuWorld
{
	enum class TimelineMode
	{
		Select,
		InsertTap,
		InsertLong,
		InsertLongMid,
		InsertFlick,
		MakeCritical,
		InsertBPM,
		InsertTimeSign,
		TimelineToolMax
	};

	enum class ScrollMode
	{
		None,
		Page,
		FollowCursor,
		ScrollModeMax
	};

	constexpr const char* timelineModes[]
	{
		"select",
		"tap",
		"hold",
		"hold_step",
		"flick",
		"critical",
		"bpm",
		"time_signature",
	};

	constexpr const char* scrollModes[]
	{
		"none",
		"page",
		"follow_cursor"
	};

	constexpr int divisions[]
	{
		4, 8, 12, 16, 24, 32, 48, 64, 96, 128, 192
	};
}