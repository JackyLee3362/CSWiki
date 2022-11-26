# %%
import numpy as np
from sklearn.decomposition import PCA
from sklearn.model_selection import cross_val_score
# %%
pca = PCA(svd_solver='full')
pca.n_components = 0
X = np.array([[-1, -1], [-2, -1], [-3, -2], [1, 1], [2, 1], [3, 2]])
cross_val_score(pca, X)

# %%
pca = PCA(svd_solver='full')
X = np.array([[-1, -1], [-2, -1], [-3, -2], [1, 1], [2, 1], [3, 2]])

cross_val_score(pca, X)


# %%
X = np.array([[-1, -1], [-2, -1], [-3, -2], [1, 1], [2, 1], [3, 2]])
pca = PCA(n_components=2)
pca.fit(X)
# %% 返回最大方差的主成分
pca.components_

# %% 它代表降维后的各主成分的方差值，方差值越大，则说明越是重要的主成分
pca.explained_variance_
# %%
pca.explained_variance_ratio_

# %% 返回所被选主成分的奇异值
pca.singular_values_

# %%

# %%
