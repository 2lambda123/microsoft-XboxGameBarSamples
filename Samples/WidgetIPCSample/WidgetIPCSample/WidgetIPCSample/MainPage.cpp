﻿#include "MainPage.h"
#include "MainPage.g.cpp"
#include "pch.h"

using namespace winrt;
using namespace winrt::Windows::UI::Xaml;

namespace winrt::WidgetIPCSample::implementation {
MainPage::MainPage() { InitializeComponent(); }

int32_t MainPage::MyProperty() { throw hresult_not_implemented(); }

void MainPage::MyProperty(int32_t /* value */) {
  throw hresult_not_implemented();
}

void MainPage::ClickHandler(IInspectable const &, RoutedEventArgs const &e) {}
} // namespace winrt::WidgetIPCSample::implementation
