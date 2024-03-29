% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/plot_fitness_helpers.R
\name{fitness_contour_area}
\alias{fitness_contour_area}
\title{Get the minimum and maximum values for the x and y axis}
\usage{
fitness_contour_area(
  .l_params_,
  .zoom_,
  .zoom_calib_res_,
  .param_x,
  .param_y,
  .x_axis_lb_,
  .x_axis_ub_,
  .y_axis_lb_,
  .y_axis_ub_
)
}
\arguments{
\item{.l_params_}{List containing information about calibration parameters,
including parameters' names, distributions, and boundaries.}

\item{.zoom_}{Logical (default TRUE) for whether to zoom in to the identified
sets (best fitting sets, extrema, and posterior distributions centres).}

\item{.zoom_calib_res_}{Dataset/tibble containing all relevant points but
sampled prior values or initial guesses.}

\item{.param_x}{String identifying the parameter plotted in the x-axis.}

\item{.param_y}{String identifying the parameter plotted in the y-axis.}

\item{.x_axis_lb_}{Numeric (double) value specifying the lower bound of x-axis.}

\item{.x_axis_ub_}{Numeric (double) value specifying the upper bound of x-axis.}

\item{.y_axis_lb_}{Numeric (double) value specifying the lower bound of y-axis.}

\item{.y_axis_ub_}{Numeric (double) value specifying the upper bound of y-axis.}
}
\description{
Get the minimum and maximum values for the x and y axis
}
\examples{
\dontrun{
}
}
