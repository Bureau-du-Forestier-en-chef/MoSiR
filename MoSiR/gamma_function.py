from scipy.stats import gamma
from scipy.optimize import minimize_scalar

# Parameters
alpha = 15.5825
beta = 2
x = 0

# Calculate PDF
pdf_value = gamma.pdf(x, alpha, scale=1/beta)
gamma.pdf(0, alpha, scale=beta)
gamma.pdf(1, alpha, scale=beta)
gamma.pdf(2, alpha, scale=beta)
gamma.pdf(3, alpha, scale=beta)
gamma.pdf(4, alpha, scale=beta)
gamma.pdf(5, alpha, scale=beta)
gamma.pdf(6, alpha, scale=beta)
gamma.pdf(30, alpha, scale=beta)

gamma.cdf(30, alpha, scale=beta)

def objective(alpha):
    # Calculate the CDF value at x=30
    cdf_value = gamma.cdf(30, alpha, scale=2)
    # Compute the absolute difference from the target (0.50)
    return abs(cdf_value - 0.50) 

minimize_scalar(objective)

gamma.cdf(30, 28.3326, scale=2)