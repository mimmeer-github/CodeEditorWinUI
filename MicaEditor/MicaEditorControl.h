﻿#pragma once

#include "winrt/Microsoft.UI.Xaml.h"
#include "winrt/Microsoft.UI.Xaml.Markup.h"
#include "winrt/Microsoft.UI.Xaml.Controls.Primitives.h"
#include "MicaEditorControl.g.h"

namespace winrt::MicaEditor::implementation
{
	struct MicaEditorControl : MicaEditorControlT<MicaEditorControl>
	{
		MicaEditorControl();

		int32_t MyProperty();
		void MyProperty(int32_t value);

		void OnApplyTemplate();

	private:
		int32_t _myProperty = 0;
		void UpdateBox();
	};
}

namespace winrt::MicaEditor::factory_implementation
{
	struct MicaEditorControl : MicaEditorControlT<MicaEditorControl, implementation::MicaEditorControl>
	{
	};
}
