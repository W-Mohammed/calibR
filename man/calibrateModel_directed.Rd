% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/optim_helpers.R
\name{calibrateModel_directed}
\alias{calibrateModel_directed}
\title{Calibrate model using Directed search algorithms (optimisation
functions)}
\usage{
calibrateModel_directed(
  .l_params = l_params,
  .func,
  .args,
  .gof = "LLK",
  .gof_func = NULL,
  .samples,
  .s_method = "NM",
  .maximise = TRUE,
  .l_targets,
  .seed_no = 1,
  ...
)
}
\arguments{
\item{.l_params}{A list that contains a vector of parameter names,
distributions and distributions' arguments.}

\item{.func}{Function defining the model to be optimised.}

\item{.args}{List of arguments to be passed to .func.}

\item{.gof}{Name goodness-of-fit function, default is log-likelihood.}

\item{.gof_func}{Goodness-of-fit function, when one other than supported
is needed.}

\item{.samples}{A table with sampled parameter values.}

\item{.s_method}{A Character, "NM", "BFGS", "SANN" or "GA",
that would identify the optimisation algorithm to be used.}

\item{.maximise}{Logical for whether algorithm that created (or .func
which will create) the hessian matrix maximised the goodness-of-fit
function. Default is \code{TRUE}.}

\item{.l_targets}{A list containing a vector of targets' names, a vector
of targets' weights, a vector of targets' distributions, and a table for
each target that contains the values (column name 'value') and standard
errors (column name 'sd') of the corresponding target.}

\item{.seed_no}{Integer for a random number generator seed number.}

\item{...}{Arguments to be passed to the optimisation function.}
}
\value{
A list containing GOF values, identified parameters and
associated uncertainty. The returned list is sorted in descending order
based on the GOF values.
}
\description{
Calibrate model using Directed search algorithms (optimisation
functions)
}
\examples{
\dontrun{
library(calibR)
data("CRS_targets")
Surv <- CRS_targets$Surv
v_targets_names <- c("Surv", "Surv")
v_targets_weights <- c(0.5, 0.5)
v_targets_dists <- c("norm", "norm")
# v_targets_names <- c("Surv")
# v_targets_weights <- c(1)
l_targets <-
  list('v_targets_names' = v_targets_names,
       'Surv' = Surv,
       'v_targets_dists' = v_targets_dists,
       'v_targets_weights' = v_targets_weights)

v_params_names <- c("p_Mets", "p_DieMets")
v_params_dists <- c("unif", "unif")
args <- list(list(min = 0.04, max = 0.16),
             list(min = 0.04, max = 0.12))
l_params <- list('v_params_names' = v_params_names,
                 'v_params_dists' = v_params_dists,
                 'args' = args)

set.seed(1)
samples <- sample_prior_LHS(.l_params = l_params,
                            .n_samples = 5)

NM_optimise_wSSE <- calibrateModel_directed(
  .l_params = l_params,
  .func = CRS_markov,
  .args = NULL,
  .gof = 'SSE',
  .samples = samples,
  .s_method = 'NM',
  .maximise = TRUE,
  .l_targets = l_targets,
  maxit = 1000)

GB_optimise_wSSE <- calibrateModel_directed(
  .l_params = l_params,
  .func = CRS_markov,
  .args = NULL,
  .gof = 'SSE',
  .samples = samples,
  .s_method = 'BFGS',
  .maximise = TRUE,
  .l_targets = l_targets,
  maxit = 1000)

SA_optimise_wSSE <- calibrateModel_directed(
  .l_params = l_params,
  .func = CRS_markov,
  .args = list(NULL),
  .gof = 'SSE',
  .samples = samples,
  .s_method = 'SANN',
  .maximise = TRUE,
  .l_targets = l_targets,
  maxit = 1000,
  temp = 10,
  tmax = 10)

GA_optimise_wSSE <- calibrateModel_directed(
  .l_params = l_params,
  .func = CRS_markov,
  .args = list(NULL),
  .gof = 'SSE',
  .samples = samples,
  .s_method = 'GA',
  .maximise = TRUE,
  .l_targets = l_targets,
  maxit = 1000)

NM_optimise_lLLK <- calibrateModel_directed(
  .l_params = l_params,
  .func = CRS_markov,
  .args = NULL,
  .gof = 'LLK',
  .samples = samples,
  .s_method = 'NM',
  .maximise = TRUE,
  .l_targets = l_targets,
  maxit = 1000)

GB_optimise_lLLK <- calibrateModel_directed(
  .l_params = l_params,
  .func = CRS_markov,
  .args = NULL,
  .gof = 'LLK',
  .samples = samples,
  .s_method = 'BFGS',
  .maximise = TRUE,
  .l_targets = l_targets,
  maxit = 1000)

SA_optimise_lLLK <- calibrateModel_directed(
  .l_params = l_params,
  .func = CRS_markov,
  .args = NULL,
  .gof = 'LLK',
  .samples = samples,
  .s_method = 'SANN',
  .maximise = TRUE,
  .l_targets = l_targets,
  temp = 10,
  tmax = 10,
  maxit = 1000)

GA_optimise_lLLK <- calibrateModel_directed(
  .l_params = l_params,
  .func = CRS_markov,
  .args = list(NULL),
  .gof = 'LLK',
  .samples = samples,
  .s_method = 'GA',
  .maximise = TRUE,
  .l_targets = l_targets,
  maxit = 1000)
}
}
