﻿#pragma once

#include "MainPage.g.h"

namespace winrt::WidgetIPCSample::implementation {
struct MainPage : MainPageT<MainPage> {
  MainPage();

  int32_t MyProperty();
  void MyProperty(int32_t value);

  void ClickHandler(Windows::Foundation::IInspectable const &sender,
                    Windows::UI::Xaml::RoutedEventArgs const &args);
};
} // namespace winrt::WidgetIPCSample::implementation

namespace winrt::WidgetIPCSample::factory_implementation {
struct MainPage : MainPageT<MainPage, implementation::MainPage> {};
} // namespace winrt::WidgetIPCSample::factory_implementation